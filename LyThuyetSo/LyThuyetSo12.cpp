// Hãy phân tích một số nguyên dương N thành thừa số nguyên tố

// Input Format

// Số nguyên dương N

// Constraints

// 2≤N≤10^16

// Output Format

// Phân tích thừa số nguyên tố của N, xem ví dụ để rõ hơn format.

// Sample Input 0

// 60
// Sample Output 0

// 2^2 * 3^1 * 5^1

#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll x = sqrt(n);
    for(auto i = 2; i <= x; i++) {
        int counter = 0;
        if(n % i == 0){
            cout << i;
        } else {
            continue;
        }
        while(n % i == 0){
            if(n % i == 0) {
                counter++;
            }
            n = n / i;
        }
        if(counter != 0) {
            cout << "^" << counter;
            if(n > 1){
                cout << " * ";
            }
        }
         
    }
    if(n > 1) {
        cout << n << "^1";
    }
    

    return 0;
}