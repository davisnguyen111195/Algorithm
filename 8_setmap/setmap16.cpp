#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n; 
    set<int> sX;
    map<int, int> mX;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        sX.insert(x);
        mX[x] = i;
    }
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        auto itLower = lower_bound(sX.begin(), sX.end(), k);
        if(itLower != sX.end()){
            cout << "YES" << " " << mX[*itLower] << endl;
        }
    }
    return 0;
}