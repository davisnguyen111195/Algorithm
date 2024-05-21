// [Xâu Ký Tự]. Bài 44. Lũy thừa với cơ số lớn
// Cho 2 số N và M, hãy tính N^M % (10^9 + 7).

// Trong đó N là một số nguyên lớn, M là một số nguyên 64 bit.

// Gợi ý : Để làm được bài này các bạn phải sử dụng lũy thừa nhị phân để tránh Time Limit. Vì N^M % mod = (N % mod)^M % mod nên bạn có thể chia dư cơ số cho mod trước khi lũy thừa, lưu ý là không được lấy M chia dư cho mod.

// Đầu vào
// Dòng đầu tiên là số nguyên dương N.

// Dòng thứ 2 là số nguyên dương M.

// Giới hạn
// N có không quá 1000 chữ số

// M là 1 số nguyên 64 bit.

// Đầu ra
// In ra kết quả của bài toán

// Ví dụ :
// Input 01
// Copy
// 2
// 10
// Output 01
// Copy
// 1024
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const ll MOD = 1e9+7;
ll mod(string s, ll m){
    ll mod = 0;
    for(int i = 0; i < s.size(); i++){
        mod = mod * 10 + (s[i] - '0');
        mod %= m;
    }

    return mod;
}

ll binPow(ll a, ll n){
    ll res = 1;
    a %= MOD;
    while(n){
        if(n%2){
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        n /= 2;
    }

    return res;
}

int main(){
    string n; 
    ll m;
    cin >> n >> m;

    cout << binPow(mod(n, MOD), m);
    return 0;
}