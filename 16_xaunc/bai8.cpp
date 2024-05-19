// [Xâu Ký Tự]. Bài 8. Xâu pangram
// Xâu pangram là xâu có chứa đầy đủ các kí tự từ A tới Z không phân biệt chữ hoa hay thường.

// Nhập vào xâu S và kiểm tra xem xâu S có phải là xâu pangram hay không?

// Đầu vào
// Xâu kí tự S chỉ bao gồm các kí tự in hoa hoặc in thường.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// In ra YES nếu S là xâu pangram, ngược lại in NO.

// Ví dụ :
// Input 01
// Copy
// abcdefghijklmnopqrstuvwxyZ
// Output 01
// Copy
// YES

#include <bits/stdc++.h>
using namespace std;

bool checkPangram(string s){
    int cnt[265] = {0};
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90){ 
            s[i] = s[i] + 32;
            cnt[s[i]] = 1;
        } else {
            cnt[s[i]] = 1;
        }
    }

    for(int i = 97; i <= 122; i++){
        if(cnt[i] == 0){
            return false;
        }
    }

    return true;
}
int main(){
    string s;
    getline(cin, s);
    if(checkPangram(s)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}