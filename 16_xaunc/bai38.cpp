// [Xâu Ký Tự]. Bài 38. Số chia hết cho 25
// Kiểm tra xem một số nguyên không âm N có chia hết cho 25 hay không? Số chia hết cho 25 nếu nó có 2 chữ số tận cùng là 2 số 0 hoặc là số chia hết cho 25.

// Đầu vào
// Số nguyên không âm N.

// Giới hạn
// N có không quá 1000 chữ số.

// Đầu ra
// In ra YES nếu N chia hết cho 25, ngược lại in ra NO.

// Ví dụ :
// Input 01
// Copy
// 150
// Output 01
// Copy
// YES

#include <bits/stdc++.h>

using namespace std;

int chiaDu(string s, int k){
    int mod = 0;
    for(int i = 0; i < s.size(); i++){
        mod = (mod * 10 + s[i]-'0') % k;
    }

    return mod;
}

int main(){
    string s;
    cin >> s;
    int mod = chiaDu(s, 25);
    if(mod == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}