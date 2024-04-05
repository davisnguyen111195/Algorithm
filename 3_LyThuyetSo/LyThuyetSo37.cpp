// [Hàm, Lý Thuyết Số]. Bài 37. Lũy thừa
// Problem
// Submissions
// Discussions
// Tính a^b%1000000007 với a,b nguyên không âm.

// Input Format

// 2 số nguyên không âm a và b

// Constraints

// 1≤a,b≤10^12

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 2 10
// Sample Output 0

// 1024

#include <iostream>


using namespace std;
using ll = long long;
const ll _MOD = 1e9+7;

ll binPow(ll a, ll b){
    ll res = 1;
    a = a % _MOD;
    while(b != 0) {
        if(b % 2 == 1) {
            res = (res * a) % _MOD;
        }
        a = (a * a) % _MOD;
        b = b / 2;
    }
    return res;
}

int main() {
    ll a, b; cin >> a >> b;
    ll x = binPow(a, b) % _MOD;

    cout << x;

    return 0;
}