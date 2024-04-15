// [Đệ Quy]. Bài 8. Ước chung lớn nhất, bội chung nhỏ nhất.
// Cho 2 số a và b, hãy tính ước chung lớn nhất và bội chung nhỏ nhất của 2 số a và b. Trong đó hàm UCLN sử dụng đệ quy để tính.

// Input Format

// 2 số nguyên dương a và b.

// Constraints

// 1≤a,b≤10^12;

// Output Format

// In ra UCLN và BCNN của 2 số. Dữ liệu đảm bảo UCLN của 2 số nằm trong khoảng số nguyên 64 bit.

// Sample Input 0

// 10 20
// Sample Output 0

// 10 20

#include <iostream>

#define ll long long

using namespace std;
const ll mod = 1e9+7;
ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    } else {
        return gcd(b, a % b);
    }
}

ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}


int main(){
    ll a, b; cin >> a >> b;
    cout << gcd(a, b);
    cout << " " << lcm(a, b);
    return 0;
}