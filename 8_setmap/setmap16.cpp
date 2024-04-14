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
    //multiset<int> sX;
    multimap<int, int> mX;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        //sX.insert(x);
        mX.insert({x, i});

        
    }
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        if(mX.count(k)){
            cout << "Yes" << " ";
        } else {
            cout << "No" << " ";
        }
        
        auto itLower = mX.lower_bound(k);
        //auto it = mX.find(*itLower);
        if(itLower != mX.end()){
            cout << (*itLower).second << endl;
        }
        
    }
    return 0;
}