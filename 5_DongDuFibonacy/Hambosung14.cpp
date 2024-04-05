// [Hàm, Lý Thuyết Số]. Fibonacci 4
// Liệt kê những số là số nguyên tố nhỏ hơn N và có tổng các chữ số của nó là một số trong dãy số Fibonacci.

// Input Format

// Dòng duy nhất chứa số nguyên dương N

// Constraints

// 1<=N<=10000

// Output Format

// In ra các số nhỏ hơn N là số nguyên tố và thỏa mãn tổng chữ số của nó là một số trong dãy Fibonacci. Các số in cách nhau một khoảng trắng

// Sample Input 0

// 114
// Sample Output 0

// 2 3 5 11 17 23 41 53 67 71 101 107 113 

#include <iostream>
#define ll long long
using namespace std;

ll f[100];

void fiboGen(void) {
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 92; i++){
        f[i] = f[i-1] + f[i-2];
        //cout << f[i] << " ";
    }
}

bool primeChecker(ll n){
    if(n < 2) return false;
    for(ll i = 2; i*i <= n; i++) {
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int sumNumber(ll n) {
    int sum = 0;
    while(n != 0){
        sum = sum + n%10;
        n /= 10;
    }

    return sum;
}

using namespace std;
int main(){
    fiboGen();
    int n; cin >> n;

    for(int i = 1; i <= n; i++){
        if(primeChecker(i)){
            int sumnumber = sumNumber(i);
            for(int j = 0; j <= 92; j++){
                if(f[j] == sumnumber){
                    cout << i << " ";
                }
            }
        }
    }
    return 0;
}