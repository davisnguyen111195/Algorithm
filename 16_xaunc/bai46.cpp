// [Xâu Ký Tự]. Bài 46. Tìm số dư
// Yêu cầu tính (1^n + 2^n + 3^n +4^n) % 5, trong đó n là số nguyên lớn.

// Gợi ý :

// 1^n chữ số tận cùng luôn là 1

// 2^n chữ số tận cùng chu kỳ 4 là 2, 4, 8, 6

// 3^n chữ số tận cùng chu kỳ 4 là 3 9 7 1

// 4^n chữ số tận cùng chu kỳ 2 là 4 6

// Vì thế tổng 1^n + 2^n + 3^n +4^n sẽ tuần hoàn với chu kỳ 4, bạn xét 4 trường hợp khi n chia 4 dư 0, 1, 2, 3 là sẽ tìm được kết quả

// Đầu vào
// Số nguyên không âm n.

// Giới hạn
// n có không quá 1000 chữ số.

// Đầu ra
// Copy
// In ra kết quả của bài toán
// Ví dụ :
// Input 01
// Copy
// 0
// Output 01
// Copy
// 4

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int chiaDu(string s, int n){
    int mod = 0;
    for(char x: s){
        mod = mod * 10 + x-'0';
        mod %= n;
    }
    return mod;
}

int main(){
    string n;
    getline(cin, n);
    int mod = chiaDu(n, 4);
    switch (mod)
    {
    case 0:
        cout << 4;
        break;
    case 1: 
        cout << 0;
        break;
    case 2: 
        cout << 0;
        break;
    case 3: 
        cout << 0;
        break;
    default:
        break;
    }
    return 0;
}
