// [Hàm bổ sung]. Bài 9. Chữ số cuối cùng
// Tìm K chữ số cuối cùng của N^M, kết quả có thể không đủ K chữ số. Ví dụ 9^5 = 59049 và K = 3 thì bạn chỉ cần in ra 49.

// Input Format

// 3 số N, M, K

// Constraints

// 1<=N,M<=10^6

// 1<=K<=9

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 9 8 1
// Sample Output 0

// 1

#include <iostream>
#include <cmath>

#define ll long long
using namespace std;

int tichChiaDu(ll a, ll b, ll _MOD){
    return ((a % _MOD) * (b % _MOD)) % _MOD;
}
int main(){

    int n, m, k; cin >> n >> m >> k;
    ll _mod = pow(10, k);
    ll end = 1;
    while(m--){
        end = tichChiaDu(end, n, _mod);
    }
    cout << end;
    return 0;
}