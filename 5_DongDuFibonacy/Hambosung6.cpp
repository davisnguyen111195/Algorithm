// [Hàm bổ sung]. Bài 6. Tổng chia dư
// Cho N số nguyên, bạn hãy tính tổng các số này và chia dư tổng cho 10^9 + 7 (1000000007).

// Input Format

// Dòng 1 là N : số lượng số nguyên

// Dòng 2 gồm N số nguyên cách nhau 1 khoảng trắng

// Constraints

// 1<=N<=10^5

// Các số là nguyên dương không quá 10^16

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 5
// 534 7 669 826 610 
// Sample Output 0

// 2646
#include <iostream>

#define ll long long

using namespace std;
const ll _MOD = 1e9+7;

ll tongChiaDu(ll a, ll b, ll _mod){
    return ((a%_mod)+(b%_mod))%_mod;
}


int main(){
    int n; cin >> n;
    ll sum = 0;
    while(n--){
        ll x; cin >> x;
        sum = tongChiaDu(sum, x, _MOD);
    }
    cout << sum;
    return 0;
}
