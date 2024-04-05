// [Hàm bổ sung]. Bài 10. Dãy số 23

// Dãy số 23 được định nghĩa như sau : F(1) = 1, F(2) = 1, Fn = 2 * F(n - 1) + 3 * F(n - 2). Một số đầu tiên trong dãy 28 : 1, 1, 5, 13, 41.... Hãy tính số thứ n trong dãy số 23 chia dư cho 10^9 + 7.

// Input Format

// Dòng duy nhất chứa số nguyên dương n

// Constraints

// 1<=n<=10^6

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 6
// Sample Output 0

// 121

#include <iostream>
#define ll long long
using namespace std;
const ll _MOD = 1e9+7;

int tongChiaDu(int a, int b, ll _MOD){
    return ((a%_MOD) + (b%_MOD)) % _MOD;
}

int main(){
    int n; cin >> n;
    ll f[n];
    f[1] = 1;
    f[2] = 1;
    ll sum = 0;
    for(ll i = 3; i <= n; i++){
        f[i] = (2*f[i-1]%_MOD + 3*f[i-2]%_MOD) % _MOD;
        //2*f[i-1] + 3*f[i-2];
    }

    cout << f[n];
    return 0;
}
