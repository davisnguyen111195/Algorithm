// [Xâu Ký Tự Cơ Bản]. Bài 13. Liệt kê từ
// Cho một xâu S gồm nhiều từ, các từ được phân cách nhau bởi dấu cách hoặc các dấu '.', ',', '!', '?',

// Hãy liệt kê các từ xuất hiện trong xâu, giữa các từ cách nhau một dấu cách

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// S chỉ bao gồm các chữ cái, dấu cách và các dấu câu đã liệt kê ở trên.

// Đầu ra
// Liệt kê các từ trong xâu

// Ví dụ :
// Input 01
// Copy
// oSAz ?oiiaz iSaSz SDA ,bbW oWA AIIia .
// Output 01
// Copy
// oSAz oiiaz iSaSz SDA bbW oWA AIIia

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    s.push_back(' ');
    string b;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?'){
            b.push_back(' ');
        } else {
            b.push_back(s[i]);
        }
    }
    stringstream ss(b);
    string word;
    while(ss >> word){
        cout << word << " ";
    }
    return 0;
}