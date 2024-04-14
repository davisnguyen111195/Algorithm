#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    map<string, int> mX;

    int q; cin >> q;
    while(q--){
        int ac; cin >> ac;
        if(ac == 1){
            string name; int x;
            cin >> name >> x;
            if(mX.count(name)){
                mX[name] = mX[name] + x;
            } else {
                mX[name] = x;
            }
        } else if(ac == 2){
            string name2;
            cin >> name2;
            if(mX.count(name2)){
                mX.erase(name2);
            }
        } else if(ac == 3){
            string name3; cin >> name3;
            if(mX.count(name3)){
                cout << mX[name3] << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}