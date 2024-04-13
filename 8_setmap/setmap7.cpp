#include <iostream>
#include <stdio.h>
#include <set>
#include <map>
using namespace std;

int main(){
    #ifndef ON
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    map<int, int> mX; 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(mX[x] == i - 1){
                mX[x] = i;
            }
        }
    }

    bool check = false;

    for(auto it : mX){
        if(it.second == n){
            cout << it.first << " ";
            check = true;
        }
    }

    if(!check){
        cout << "NOT FOUND";
    }

    return 0;
}