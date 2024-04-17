// [QHD Basic]. Bài 2. Fibonacci
// Cho dãy số Fibonacci với F[0] = 0, F[1] = 1, F[n] = F[n - 1] + F[n - 2] với n >= 2. Hãy tính F[n] chia dư cho 10^9 + 7.

// Input Format

// Dòng 1 là số bộ test T

// T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

// Constraints

// 1<=T<=10000

// 0<=N<=10^6

// Output Format

// Đưa ra kết quả của mỗi test trên 1 dòng

// Sample Input 0

// 6
// 5
// 13
// 10
// 14
// 8
// 11
// Sample Output 0

// 5
// 233
// 55
// 377
// 21
// 89
#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll mod = 1e9+7;
ll f[1000006];

ll fibo(ll n){
    f[0] = 0;
    f[1] = 1;
    if(n == 2){
        return 1;
    }
    if(f[n]) return f[n];
    f[n] = (fibo(n-1)%mod + fibo(n-2)%mod) % mod;
    return f[n];
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << fibo(n) << endl;
    }
    return 0;
}