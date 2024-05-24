// [Struct]. Bài 11. Từ xuất hiện nhiều nhất
// Cho một đoạn văn gồm nhiều dòng, các từ trong đoạn văn được viết cách nhau một vài dấu cách. Hãy tìm từ xuất hiện nhiều nhất trong đoạn văn, nếu có nhiều từ có cùng số lần xuất hiện thì bạn hãy in ra từ có thứ tự từ điển nhỏ nhất. Các bạn sử dụng struct như sau (C++) :

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
// In ra từ có số lần xuất hiện nhiều nhất

// Ví dụ :
// Input 01
// Copy
// 28tech    
// 28tech python c    c 
// python 28tech    
// python java 
// python    28tech 28tech c    
// js
// Output 01
// Copy
// 28tech

#include <bits/stdc++.h>

using namespace std;
struct Word{
    string data;
    int fre;
};
bool cmp(Word a, Word b){
    if(a.fre != b.fre){
        return a.fre < b.fre;
    } else {
        return a.data > b.data;
    }
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
            mS[w]++;
        }
    }
    Word a[mS.size()];
    int i = 0;
    for(auto item: mS){
        a[i].data = item.first;
        a[i].fre = item.second;

        i++;
    }
    sort(a, a+mS.size(), cmp);
    Word result = a[mS.size()-1];
    cout << result.data;
    return 0;
}