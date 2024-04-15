// // [Đệ Quy]. Bài 9. Lũy thừa nhị phân.
// // Cho 2 số nguyên không âm a và b. Hãy tính a^b%(10^9+7). Kiến thức bạn cần sử dụng là Binary Exponentiation.



// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a,b≤10^9

// Output Format

// In ra kết quả của bài toán.

// Sample Input 0

// 2 10
// Sample Output 0

// 1024

#include <iostream>
#define ll long long
const ll mod = 1e9+7;
using namespace std;

ll binPow(ll a, ll b){
    if(b == 0){
        return 1;
    } 
    ll X = binPow(a, b/2);
    if(b % 2 != 0){
        return (X%mod * X%mod * a%mod) % mod;
    } else {
        return (X%mod * X%mod) % mod;
    }
}

int main(){
    ll a, b; cin >> a >> b;
    cout << binPow(a, b);
    return 0;
}