// [Đệ Quy]. Bài 18. Tính tổng chữ số chẵn lẻ.
// Cho số nguyên không âm N, hãy tính tổng các chữ số chẵn, tổng các chữ số lẻ của N.

// Input Format

// Số nguyên không âm N.

// Constraints

// 0≤n≤10^18

// Output Format

// Dòng đầu tiên in ra tổng các chữ số chẵn. Dòng thứ 2 in ra tổng các chữ số lẻ.

// Sample Input 0

// 123456
// Sample Output 0

// 12
// 9

#include <iostream>

typedef long long ll;
using namespace std;

ll sumEven(ll n){
    if(n <= 9){
        if(n % 2 == 0){
            return n;
        } else {
            return 0;
        }
    } else {
        return sumEven(n%10) + sumEven(n/10);
    }
}

ll sumOdd(ll n){
    if(n <= 9){
        if(n % 2 != 0){
            return n;
        } else {
            return 0;
        }
    } else {
        return sumOdd(n%10) + sumOdd(n/10);
    }
}

int main(){
    ll n; cin >> n;
    cout << sumEven(n) << endl;
    cout << sumOdd(n) << endl;
    return 0;
}