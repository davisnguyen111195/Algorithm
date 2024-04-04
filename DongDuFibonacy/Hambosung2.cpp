#include <iostream>
#include <cmath>

#define ll long long

using namespace std;
int d[10];

void ptsnt(ll n){
    for(ll i = 2; i * i <= n; i++){
        int counter = 0;
        if(n % i == 0) {
            while(n % i == 0){
                counter++;
                n /= i;
            }
            d[i] = counter;
        }
    }
    if(n > 1){
        d[n] = 1;
    }
}

int main() {
    ll n; cin >> n;
    ptsnt(n);
    int maxI = -1;
    for(int i = 2; i <= 10; i++){
        maxI = max(maxI, i);
    }
    if()
    return 0;
}