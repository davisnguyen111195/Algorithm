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

        for(int j = 0; j < n; j++){
            int x; cin >> x;
            if(i == 1){
                mX[x] = 1;
            } else {
                if(mX.find(x) != mX.end()){
                    if(i - mX[x] == 1){
                        mX[x]++;
                    } else {
                        break;
                    }
                }
            }
            
        }
    }
    int cnt = 0;
    for(auto item : mX){
        if(item.second == n){
            cout << item.first << " ";
            cnt++;
        }
    }
    if(cnt == 0){
        cout << "NOT FOUND";
    }

    return 0;
}