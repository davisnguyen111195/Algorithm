// [Xâu Ký Tự]. Bài 2. In hoa, in thường
// Cho một xâu kí tự, hãy viết hoa và viết thường các kí tự là chữ cái trong xâu, các kí tự không phải là chữ cái thì không thay đổi.

// Đầu vào
// Xâu kí tự S.

// Giới hạn
// 1≤len(S)≤1000.

// Đầu ra
// Dòng đầu tiên in ra xâu sau khi thay đổi mọi kí tự thường trong xâu thành ký tự hoa.

// Dòng thứ 2 in ra xâu sau khi thay đổi mọi kí tự hoa trong xâu thành kí tự thường.

// Ví dụ :
// Input 01
// Copy
// abcd ABCD
// Output 01
// Copy
// ABCD ABCD
// abcd abcd

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 97 && s[i] <= 122){
            s[i] = s[i] - 32;
        }
        cout << s[i];
    }
    cout << endl;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] = s[i] + 32;
        }
        cout << s[i];
    }
    return 0;
}