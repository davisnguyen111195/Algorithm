// [Xâu Ký Tự]. Bài 43. UCLN
// Cho 2 số N và M, hãy tìm ước chung lớn nhất của N và M. Chú ý ở đây N là một số nguyên lớn và M là một số nguyên 64 bit.

// Gợi ý : Dùng thuật toán Euclid để tìm số dư của N với M, khi đó số dư sẽ là số 64 bit => áp dụng UCLN với M cùng số dư đó sẽ trở về bài toán bình thường.

// Đầu vào
// Dòng đầu tiên là số nguyên dương N.

// Dòng thứ 2 là số nguyên dương M.

// Giới hạn
// N có không quá 1000 chữ số

// M là 1 số nguyên 64 bit.

// Đầu ra
// In ra UCLN của N và M

// Ví dụ :
// Input 01
// Copy
// 100
// 20
// Output 01
// Copy
// 20

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll chiaDu(string s, ll m){
    ll mod = 0;
    for(int i = 0; i < s.size(); i++){
        mod = (mod * 10 + s[i]-'0') % m;
    }
    return mod;
}

ll gcd(ll n, ll m){
    if(n == 0){
        return m;
    }
    return gcd(m % n, n);

}

int main(){
    string s;
    ll m;
    cin >> s >> m;

    cout << gcd(chiaDu(s, m), m);

    return 0;
}