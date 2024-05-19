// [Xâu Ký Tự Cơ Bản]. Bài 30. Permutation
// Cho 2 xâu S, T bạn hãy kiểm tra xem 2 xâu này có phải là hoán vị của nhau hay không? Ví dụ S = 28tech và T = t28ceh được coi là 2 hoán vị của nhau

// Đầu vào
// Dòng duy nhất chứa xâu S và T

// Giới hạn
// 1<=len(S), len(T)<=10000

// S và T chứa kí tự là chữ cái, chữ số

// Đầu ra
// In ra 28tech nếu S và T là hoán vị của nhau, ngược lại in ra 29tech

// Ví dụ :
// Input 01
// Copy
// 28tech tech28
// Output 01
// Copy
// 28tech

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    cin.ignore();
    string t;
    getline(cin, t);
    cin.ignore();
    int ssize = s.size();
    int tsize = t.size();
    if(ssize != tsize){
        cout << "29tech";
    } else {
        int cnt = 0;
        for(int i = 0; i < ssize; i++){
            for(int j = 0; j < tsize; j++){
                if(s[i] == t[j]){
                    t.erase(j, 1);
                }
            }
        }
        if(t.size() == 0){
            cout << "28tech";
        } else {
            cout << "29tech";
        }
    }
    return 0;
}