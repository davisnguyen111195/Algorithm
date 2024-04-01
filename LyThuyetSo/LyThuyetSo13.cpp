//Using Legendre 
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

ll divFunc(ll n, ll p){
    ll count = 0;
    for(ll i = 1; pow(p, i) <= n; i++){
        ll k = n / pow(p, i);
        count = count + k;
    }
    return count;
}

int main(){

    ll n; ll p; cin >> n >> p;

    cout << divFunc(n, p);
    return 0;
}