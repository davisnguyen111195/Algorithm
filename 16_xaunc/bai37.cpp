// [Xâu Ký Tự]. Bài 36. Số chia hết cho 15
// Kiểm tra xem một số nguyên không âm N có chia hết cho 4 hay không, số chia hết cho 4 là số có nhiều hơn 1 chữ số mà có 2 chữ số tận cùng chia hết cho 4 hoặc là số có 1 chữ số chia hết cho 4.

// Đầu vào
// Số nguyên không âm N.

// Giới hạn
// N có không quá 1000 chữ số.

// Đầu ra
// In ra YES nếu N là số chia hết cho 4, ngược lại in ra NO.

// Ví dụ :
// Input 01
// Copy
// 516
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
    int mod = chiaDu(s, 15);
    if(mod == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}