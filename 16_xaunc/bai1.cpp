// [Xâu Ký Tự]. Bài 1. Đếm số loại ký tự
// Cho một xâu kí tự, hay đếm số lượng kí tự là chữ cái, chữ số và kí tự đặc biệt (Các kí tự không phải là chữ cái và chữ số).

// Đầu vào
// Xâu kí tự S.

// Giới hạn
// 1≤len(S)≤1000.

// Đầu ra
// In ra số lượng chữ cái, chữ số, và kì tự đặc biệt xuất hiện trong xâu

// Ví dụ :
// Input 01
// Copy
// abcd123 $%^ a
// Output 01
// Copy
// 5 3 5

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int cnts = 0;
    int cntc = 0;
    int cntk = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            cnts++;
        } else if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
            cntc++;
        } else{
            cntk++;
        }
    }

    cout << cntc << " " << cnts << " " << cntk;

    return 0;
}