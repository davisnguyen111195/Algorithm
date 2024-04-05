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
const ll _MOD = 1000000007;
int degree(int n, int p){
    int ans = 0;
    for(auto i = p; i <= n; i+=p){
        auto tmp = i;
        while(tmp % p == 0){
            ans++;
            tmp = tmp / p;
        }
    }
    return ans;
}

int degree2(int n, int p){
    int ans = 0;
    for(int i = p; i <= n; i*=p){
        ans += n / i;
    }
    return ans;
}

bool primeCheck(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}
//dung cong thuc tinh uoc so nguyen của n!
ll divcheck(int n) {
    ll result = 1;
    for(auto i = 1; i <= n; i++){
        if(primeCheck(i)){
            result *= (degree2(n, i) + 1);
        }
    }
    return result;
}

int main(){
    int n; cin >> n;
    ll result = divcheck(n);
    cout << result;
    return 0;
}

