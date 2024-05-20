// [Xâu Ký Tự]. Bài 15. Kiểm tra xâu con
// Cho 2 xâu S và T chỉ bao gồm các chữ cái in hoa, in thường và dấu cách. Hãy kiểm tra xem xâu T có phải là xâu con của xâu S hay không?

// Đầu vào
// Dòng đầu tiên là xâu S.

// Dòng thứ 2 là xâu T.

// Giới hạn
// 1≤len(S)≤100000

// 1≤len(T)≤100000

// Đầu ra
// In ra YES nếu xâu T xuất hiện trong xâu S, ngược lại in ra NO.

// Ví dụ :
// Input 01
// Copy
// 28tech.com.vn tech28
// 28tech
// Output 01
// Copy
// YES

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    string t;
    getline(cin, t);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == t[0]){
            string b = s.substr(i, t.size());
            if(b == t){
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}
