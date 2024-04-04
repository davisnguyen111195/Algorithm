// [Hàm, Lý Thuyết Số]. Bài 39. Tính giá trị của hàm F
// Đối với số nguyên dương n hãy xác định hàm f: f(n) = - 1 + 2 - 3 + .. + (- 1)^n * n Nhiệm vụ của bạn là tính f (n) cho một số nguyên n đã cho

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^16

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 12734
// Sample Output 0

// 6367

#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

ll fn(ll n){
    return (ll)pow(-1, n) * n;
}

int main(){
    ll n; cin >> n;
    ll fnn = abs(fn(n));
    ll fnlui1 = abs(fn(n-1));
    ll sum = 0;
    if(fnn % 2 == 0) {
        ll numbersEven = (fnn - 2) / 2 + 1;
        ll numbersOdd = (fnlui1 - 1) / 2 + 1;
        ll sumEven = ((fnn + 2) * numbersEven) / 2;
        ll sumOdd = ((fnlui1 + 1) * numbersOdd) / 2;
        sum = sumEven - sumOdd;
    } else {
        ll numbersEven = (fnlui1 - 2) / 2 + 1;
        ll numbersOdd = (fnn - 1) / 2 + 1;
        ll sumEven = ((fnlui1 + 2) * numbersEven) / 2;
        ll sumOdd = ((fnn + 1) * numbersOdd) / 2;
        sum = sumEven - sumOdd;
    }



    cout << sum;
    return 0;
}