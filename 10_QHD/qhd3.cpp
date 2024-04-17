// [QHD Basic]. Bài 3. Tribonacci
// Cho dãy số Tribonacci với F[0] = 0, F[1] = 0, F[2] = 1, F[n] = F[n - 1] + F[n - 2] + F[n - 3] với n >= 3. Hãy tính F[n] chia dư cho 10^9 + 7.

// Input Format

// Dòng 1 là số bộ test T

// T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

// Constraints

// 1<=T<=10000

// 0<=N<=10^6

// Output Format

// Đưa ra kết quả của mỗi test trên 1 dòng

// Sample Input 0

// 7
// 8
// 14
// 12
// 7
// 9
// 7
// 12
// Sample Output 0

// 24
// 927
// 274
// 13
// 44
// 13
// 274
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f[1000005];
const ll mod = 1e9+7;

int main(){

    f[0] = 0;
    f[1] = 0;
    f[2] = 1;
    for(ll j = 3; j < 1000005; j++){
        f[j] = (f[j-1] + f[j-2] + f[j-3]);
        f[j] %= mod;
    }
    int t; cin >> t;
    while(t--){
        ll x; cin >> x;
        cout << f[x] << endl;
    }
    return 0;
}