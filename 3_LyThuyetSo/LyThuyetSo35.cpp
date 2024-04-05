// [Hàm, Lý Thuyết Số]. Bài 35. Ước chung lớn nhất, bội chung nhỏ nhất
// Tìm ước chung lớn nhất và bội chung nhỏ nhất của 2 số nguyên

// Input Format

// 2 số nguyên a, b

// Constraints

// 1≤a,b≤10^12

// Output Format

// Ước chung lớn nhất và bội chung nhỏ nhất, dữ liệu đảm bảo BCNN của 2 số không vượt quá số int 64bit

// Sample Input 0

// 20 50
// Sample Output 0

// 10 100

#include <iostream>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    while(b != 0) {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ll a, b; cin >> a >> b;
    ll gcdAB = gcd(a, b);
    ll lcmAB = lcm(a, b);
    cout << gcdAB << " " << lcmAB;
    return 0;
}