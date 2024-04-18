// [Mảng 2 Chiều]. Bài 31. Tổ hợp chập K của N
// Bạn hãy tính tổ hợp chập K của N và chia dư cho 10^9 + 7

// Input Format

// Dòng 1 là số test case T

// T dong tiếp theo mỗi dòng gồm 2 số N và K

// Constraints

// 1<=T<=10000

// 0<=K<=N<=1000

// Output Format

// In ra kết quả của mỗi test trên 1 dòng

// Sample Input 0

// 5
// 9 0
// 13 8
// 16 7
// 9 9
// 7 6
// Sample Output 0

// 1
// 1287
// 11440
// 1
// 7

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll f[1005];
const ll mod = 1e9+7;
ll gt(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    if(f[n]){
        return f[n];
    }
    f[n] = (gt(n-1) % mod * n % mod) % mod;
    return f[n];
}
ll fc[1003][1003];
ll C(int k, int n){
    if(k == 0 || k == n){
        fc[0][n] = 1;
        fc[n][n] = 1;
        return 1;
    }

    if(k == 1){
        fc[1][n] = 1;
        return n;
    }

    if(fc[k][n]){
        return fc[k][n];
    }
    fc[k][n] = (C(k-1, n-1)%mod + C(k, n-1)%mod)%mod;
    return fc[k][n];
}


int main(){
    int t; cin >> t;
    while(t--){
        int k, n; cin >> n >> k;
        ll result = C(k, n);
        cout << result << endl;
    }
    return 0;
}