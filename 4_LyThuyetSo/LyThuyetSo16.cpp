//Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các thừa số nguyên tố trong phân tích của N. Ví dụ N = 666 có các thừa số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18.

#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;
int sumNumber(int n) {
    int sum = 0;
    while(n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

bool smithCheck(int n) {

    int sum1 = sumNumber(n);
    int sum2 = 0;
    int tmp = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) {
            while(n % i == 0) {
                sum2 = sum2 + sumNumber(i);
                n = n / i;
            }
            
        }
    }
    if(tmp == n) {
        return false;
    }

    if(n > 1) {
        sum2 = sum2 + sumNumber(n);
    }
    return sum1 == sum2;
}

int main() {
    int n; cin >> n;
    if(smithCheck(n)){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}