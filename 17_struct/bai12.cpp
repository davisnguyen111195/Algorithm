// [Struct]. Bài 12. Sắp xếp từ thuận nghịch
// Cho một đoạn văn gồm nhiều dòng, các từ trong đoạn văn được viết cách nhau một vài dấu cách. Hãy sắp xếp các từ Thuận Nghịch trong đoạn văn theo thứ tự tần suất giảm dần, nếu 2 từ có cùng tần suất thì sắp theo thứ tự từ điển tăng dần. Bài này các bạn sử dụng struct như sau :

// Copy
// struct word{
//   string data;
//   int fre;
// };
// Đầu vào
// Gồm nhiều dòng, mỗi dòng có nhiều từ.

// Giới hạn
// Số lượng từ xuất hiện trong đoạn văn không quá 1000 từ. Mỗi từ có độ dài không quá 20 kí tự.

// Đầu ra
// In ra các từ kèm số lần xuất hiện trên từng dòng.

// Ví dụ :
// Input 01
// Copy
// js    
// oop 28techhcet82 c    28tech js 28techhcet82    
// c devved 28techhcet82
// Output 01
// Copy
// 28techhcet82 3
// c 2
// devved 1

#include <bits/stdc++.h>
using namespace std;
struct word{
  string data;
  int fre;

  void showInfor(){
    cout << data << " " << fre << endl;
  }
};
bool cmp(word a, word b){
    if(a.fre != b.fre){
        return a.fre > b.fre;
    } else {
        return a.data < b.data;
    }
}

bool checkDoiXung(string s){
    string b;
    for(int i = s.size() - 1; i >= 0; i--){
        b.push_back(s[i]);
    }
    return b == s;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    map<string, int> mS;
    while(getline(cin, s)){
        stringstream ss(s);
        string w;
        while(ss >> w){
            if(checkDoiXung(w)){
                mS[w]++;    
            }
            
        }
    }
    int i = 0;
    word a[mS.size()];
    for(auto item: mS){
        a[i].data = item.first;
        a[i].fre = item.second;

        i++;
    }
    sort(a, a+mS.size(), cmp);
    for(word item: a){
        item.showInfor();
    }
    return 0;
}