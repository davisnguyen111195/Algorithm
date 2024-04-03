// [Hàm, Lý Thuyết Số]. Bài 38. Số lượng ước của N!
// Đếm số lượng ước của n!.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤n≤10^5

// Output Format

// Số lượng ước của n giai thừa lấy dư với 1000000007

// Sample Input 0

// 4
// Sample Output 0

// 8

#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int degree(ll n, int p){
    int ans = 0;
    for(auto i = p; i <= n; i+=p){
        int tmp = i;
        while(tmp % p == 0){
            ans++;
            tmp = tmp / i;
        }
    }
    return ans;
}

int main(){
    ll n; cin >> n;
    ll sum = 1;
    ll counter = 0;

    cout << degree(4, 2);
    return 0;
}

