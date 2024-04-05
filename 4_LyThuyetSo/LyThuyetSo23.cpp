// [Hàm, Lý Thuyết Số]. Bài 23. Tổng ước số
// Tính tổng ước của 1 số nguyên dương N.

// Input Format

// 1 số nguyên dương N

// Constraints

// 1≤N≤10^12.

// Output Format

// Tổng ước số của N

// Sample Input 0

// 100
// Sample Output 0

// 217
// Sample Input 1

// 28
// Sample Output 1

// 56

#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;
ll sumU(ll n){
    ll sum = 0;
    for(ll i = 1; i <= sqrt(n); i++){
        if(n % i == 0) {
            sum = sum + i;
            //Truong hop 2 so nguyen bang nhau. vi du 100 = 50 x 50. uoc chi tinh 1 so.
            if(i != n / i){
                sum = sum + n / i;
            }
        }
    }
    return sum;
}
int main() {
    ll n; cin >> n;
    cout << sumU(n);
    return 0;
}