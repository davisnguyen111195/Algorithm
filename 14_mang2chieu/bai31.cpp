// [Mảng 2 Chiều]. Bài 31. Tổ hợp chập K của N
// Bạn hãy tính tổ hợp chập K của N và chia dư cho 10^9 + 7

// Đầu vào
// • Dòng 1 là số test case T

// • T dòng tiếp theo mỗi dòng gồm 2 số N và K

// Giới hạn
// • 1<=T<=10000

// • 0<=K<=N<=1000

// Đầu ra
// In ra kết quả của mỗi test trên 1 dòng

// Ví dụ :
// Input 01
// Copy
// 5
// 9 0
// 13 8
// 16 7
// 9 9
// 7 6
// Output 01
// Copy
// 1
// 1287
// 11440
// 1
// 7
//Cach 1
// #include <bits/stdc++.h>
// using ll = long long;
// using namespace std;

// ll c[1005][1005];

// const ll mod = 1e9+7;
// int main(){
//     for(int i = 0; i <= 1000; i++){
//         for(int j = 0; j <= 1000; j++){
//             if(i == 0 || j == i){
//                 c[i][j] = 1;
//             } else {
//                 c[i][j] = (c[i-1][j]%mod + c[i-1][j-1]% mod)%mod;
//             }
//         }
//     }

//     int q; cin >> q;
//     while(q--){
//         int n, k; cin >> n >> k;
//         cout << c[n][k] << endl;
//     }
//     return 0;
// }

//Cach 2
#include <bits/stdc++.h>
using namespace std;
long long f[1005][1005];
const long long mod = 1e9+7;
int C(int n, int k){
    if(k == 0 || k == n){
        return 1;
    }
    if(f[n][k]){
        return f[n][k];
    }
    f[k][n] = (C(n-1, k-1)%mod + C(n-1, k)%mod) %mod;
    return f[k][n];

}

int main(){
    int q;
    cin >> q;
    while(q--){
        int n, k;
        cin >> n >> k;
        cout << C(n, k) << endl;
    }
    return 0;
}