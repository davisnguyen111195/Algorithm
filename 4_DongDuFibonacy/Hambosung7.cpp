// [Hàm bổ sung]. Bài 7. Tích chia dư
// Cho N số nguyên, bạn hãy tính tích các số này và chia dư tổng cho 10^9 + 7 (1000000007).

// Input Format

// Dòng 1 là N : số lượng số nguyên

// Dòng 2 gồm N số nguyên cách nhau 1 khoảng trắng

// Constraints

// 1<=N<=10^5

// Các số là nguyên dương không quá 10^6

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 5
// 153 747 236 481 789 
// Sample Output 0

// 373224432

#include <iostream>


#define ll long long

using namespace std;
const ll _MOD = 1e9+7;

ll tichChiaDu(ll a, ll b, ll _mod){
    return ((a%_mod)*(b%_mod))%_mod;
}

int main(){
    int n; cin >> n;
    ll mul = 1;
    while(n--){
        ll x; cin >> x;
        mul = tichChiaDu(mul, x, _MOD);
    }
    cout << mul;
    return 0;
}