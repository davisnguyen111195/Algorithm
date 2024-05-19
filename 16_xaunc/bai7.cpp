// [Xâu Ký Tự]. Bài 7. Xâu đối xứng
// Cho một xâu ký tự S chỉ bao gồm các chữ cái, hãy kiểm tra xem xâu nhập vào có phải là xâu đối xứng hay không?

// Đầu vào
// Dòng duy nhất là xâu S

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// In ra YES nếu S đối xứng, ngược lại in NO.

// Ví dụ :
// Input 01
// Copy
// 28techhcet82
// Output 01
// Copy


#include <bits/stdc++.h>

using namespace std;
bool check(string s){
    string b;
    for(int i = s.size() - 1; i >= 0; i--){
        b.push_back(s[i]); 
    }
    return s == b;
}
int main(){
    string s;
    getline(cin, s);
    if(check(s)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}