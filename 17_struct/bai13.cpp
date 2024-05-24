// [Struct]. Bài 13. Số đối xứng chẵn
// Cho các số tự nhiên, bạn hãy liệt kê những số đối xứng và có toàn chữ số chẵn trong các số đã cho. In ra danh sách những số đối xứng chẵn kèm theo tần suất giảm dần, nếu có 2 số có cùng tần suất thì số nào xuất hiện trước sẽ được in ra trước. Các bạn sử dụng struct như sau (C++) :

// Copy
// struct word{
//   string number;
//   int fre;
// };
// Đầu vào
// Gồm nhiều dòng, mỗi dòng gồm nhiều số.

// Giới hạn
// Có không quá 10000 số, mỗi số nằm trong giới hạn số 64 bit

// Đầu ra
// In ra các số theo yêu cầu của đề bài.

// Ví dụ :
// Input 01
// Copy
// 3333    
// 2882 2222 123    123331 111 3333    
// 3333 2882 123    3333 2222 2882    
// 123331 2332 1131    123 111 2332
// Output 01
// Copy
// 2882 3
// 2222 2

#include <bits/stdc++.h>

using namespace std;

struct Word{
    string number;
    int fre;
    void showInfor(){
        cout << number << " " << fre << endl;
    }
};

bool checkDoiXung(string s){
    string b;
    for(int i = s.size() - 1; i >= 0; i--){
        b.push_back(s[i]);
    }
    return b == s;
}

bool checkDoiXungChan(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        int check = s[i] - '0';
        if(check % 2 == 0){
            cnt++;
        }
    }
    return cnt == s.size() && checkDoiXung(s);
}
bool cmp(Word a, Word b){
    return a.fre > b.fre;
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
            if(checkDoiXungChan(w)){
                mS[w]++;
            }
        }
    }
    int i = 0;
    Word a[mS.size()];
    for(auto item: mS){
        a[i].number = item.first;
        a[i].fre = item.second;
        i++;
    }

    stable_sort(a, a+mS.size(), cmp);

    for(Word item: a){
        item.showInfor();
    }
    return 0;
}