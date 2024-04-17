// [QHD Basic]. Bài 1. Giai Thừa Chia Dư
// Đề bài rất đơn giản, bạn hãy tính N! chia dư cho (10^9 + 7).

// Gợi ý : Xây dựng mảng F[], trong đó F[i] lưu i! chia dư cho 10^9 + 7, mỗi test nhập n thì chỉ cần in ra F[n].

// Input Format

// Dòng 1 là số bộ test T

// T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

// Constraints

// 1<=T<=10000

// 0<=N<=10^6

// Output Format

// Đưa ra kết quả của mỗi test trên 1 dòng

// Sample Input 0

// 5
// 11
// 6
// 8
// 10
// 13
// Sample Output 0

// 39916800
// 720
// 40320
// 3628800
// 227020758


#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll f[1000006];
const ll mod = 1e9+7;
ll gt(ll n){
    if(n == 0) return 1;
    if(f[n]) return f[n];
    f[n] = n * gt(n-1) % mod;
    return f[n];
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << gt(n) << endl;
    }
    return 0;
}