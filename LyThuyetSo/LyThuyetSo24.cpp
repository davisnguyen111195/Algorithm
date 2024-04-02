// [Hàm, Lý Thuyết Số]. Bài 24. Đếm số lượng ước số của số nguyên 2
// Đếm số lượng ước của 1 số nguyên dương N

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^14

// Output Format

// Số lượng ước của số nguyên dương N.

// Sample Input 0

// 100
// Sample Output 0

// 9
// Sample Input 1

// 28
// Sample Output 1

// 6

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    int counter = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0) {
            counter++;
            if(i != n / i){
                counter++;
            }
        }
    }
    cout << counter;
    return 0;
}