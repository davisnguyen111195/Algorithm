#include <iostream>
#include <stdio.h>
#include <set>

using namespace std;

int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    set<int> sX;
    while(t--){
        int ac; cin >> ac;
        if(ac == 1){
            int x; cin >> x;
            sX.insert(x);
            
        } else if(ac == 2){
            int k; cin >> k;
            if(sX.count(k)){
                sX.erase(k);
            }
            
        }else if(ac == 3){
            int l; cin >> l;
            if(sX.count(l)){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}