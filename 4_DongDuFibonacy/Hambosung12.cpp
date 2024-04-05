// [Hàm, Lý Thuyết Số]. Bài 64. Số Fibonacci 2
// Nhập vào một số và kiểm tra xem số vừa nhập có phải là số trong dãy fibonacci hay không? Biết rằng số fibonacci bắt đầu bằng 0 và 1.

// Input Format

// Số nguyên không âm n

// Constraints

// 0≤n≤9*10^18

// Output Format

// In ra YES nếu n là số Fibonacci, ngược lại in NO

// Sample Input 0

// 0
// Sample Output 0

// YES
// Sample Input 1

// 18636
// Sample Output 1

// NO
#include <iostream>
#define ll long long

using namespace std;

bool fiboChecker(ll n){
    ll f[100];
    if(n == 0 || n == 1) {
        return true;
    }
    f[0] = 0;
    f[1] = 1;
    for(ll i = 2; i <= 92; i++){
        f[i] = f[i - 1] + f[i - 2];
        if(f[i] == n) {
            return true;
        }
    }
    return false;
}

int main(){
    ll n; cin >> n;
    if(fiboChecker(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}