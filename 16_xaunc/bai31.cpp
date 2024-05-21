// [Xâu Ký Tự]. Bài 31. Tổng chữ số nguyên
// Cho một số nguyên không âm N, hãy tính tổng các chữ số của N.

// Đầu vào
// Số nguyên không âm N.

// Giới hạn
// N có không quá 1000 chữ số.

// Đầu ra
// In ra tổng các chữ số của N.

// Ví dụ :
// Input 01
// Copy
// 123456789
// Output 01
// Copy
// 45

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    cout << sum;
    return 0;
}
