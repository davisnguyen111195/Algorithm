#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n; cin >> n; 
    set<int> sX;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        sX.insert(x);
    }
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        auto itLower = upper_bound(sX.begin(), sX.end(), k);
        if()
    }
    return 0;
}