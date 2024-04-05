//[Hàm, Lý Thuyết Số]. Bài 40. Chữ số cuối cùng
// Cho n, in ra chữ số cuối cùng của 1378^n.

// Input Format

// Số nguyên không âm n

// Constraints

// 0≤n≤10^18

// Output Format

// Chữ số cuối cung của 1378^n

// Sample Input 0

// 2
// Sample Output 0

// 4
// Explanation 0

// (1378^2)%10 = 1898884 % 10 = 4


#include <iostream>

#define ll long long
using namespace std;




int main() {
    ll n;
    cin >> n;
    if(n%4==0) {
        cout << 6;
    } else if(n%4 == 1){
        cout << 8;
    } else if(n%4 == 2) {
        cout << 4;
    } else {
        cout << 2;
    }

    return 0;
}