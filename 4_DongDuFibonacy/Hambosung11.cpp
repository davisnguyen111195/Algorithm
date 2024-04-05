// [Hàm, Lý Thuyết Số]. Fibonacci 1
// Nhiệm vụ của bạn là in ra N số Fibonacci đầu tiên, một số đầu tiên trong dãy Fibonacci là 1, 1, 2, 3, 5, 8....

// Input Format

// Dòng duy nhất chứa số nguyên dương N

// Constraints

// 1<=N<=92

// Output Format

// In ra N số Fibonacci đầu tiên, mỗi số trên 1 dòng

// Sample Input 0

// 6
// Sample Output 0

// 1
// 1
// 2
// 3
// 5
// 8
#include <iostream>
#define ll long long
using namespace std;

int main(){
    int n; cin >> n;
    ll f[n];
    if(n <= 1) {
        f[1] = 1;
        cout << f[1] << endl;
    } else {
        f[1] = 1;
        f[2] = 1;
        cout << f[1] << endl;
        cout << f[2] << endl;
    }
    
    
    for(ll i = 3; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
        cout << f[i] << endl;
    }

    return 0;
}