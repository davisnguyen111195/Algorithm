// [Hàm, Lý Thuyết Số]. Bài 34. Số nguyên dương nhỏ nhất chia hết cho x, y, z.

// Cho 4 số nguyên dương x, y, z, n. Tìm số nguyên dương nhỏ nhất có n chữ số chia hết cho cả x, y, và z.

// Input Format

// 4 số nguyên dương x, y, z, n

// Constraints

// (1 ≤x,y,z≤10^4); n≤16

// Output Format

// Kết quả của bài toán, trường hợp không tìm được số thỏa mãn in -1

// Sample Input 0

// 2 3 5 4
// Sample Output 0

// 1020
// Sample Input 1

// 3 5 7 2
// Sample Output 1

// -1

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;


ll gcd(ll a, ll b){
    while(b != 0){
        ll tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
int main() {

    ll x, y, z, n; cin >> x >> y >> z >> n;
    ll range1 = pow(10, (n-1));
    ll range2 = pow(10, n);
    ll lcmNumber = lcm(x, lcm(y, z));

    ll result = range1 / lcmNumber;
    if(range1 % lcmNumber) {
        result++;
        
    }
    result = result * lcmNumber;
    if(result < range2) {
        cout << result;
    } else {
        cout << -1;
    }
    


    return 0;
}