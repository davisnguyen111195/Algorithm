#include <iostream>
#include <cmath>

using namespace std;
using ll = unsigned long long;
const ll MOD = 1e9+7;
ll divFunc(ll n, ll q){
    ll count = 0;
    for(ll i = q; i <= n; i*=q){
        count = count + n / i;
    }

    return count;
}


int main(){
    ll n;
    cin >> n;
    cout << divFunc(n, 5) % MOD;
    return 0;
}