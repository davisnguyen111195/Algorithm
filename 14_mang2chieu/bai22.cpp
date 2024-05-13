#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef K
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < n; j++){
                cout << a[i][j] << " ";
            }
        } else {
            for(int k = n-1; k >= 0; k--){
                cout << a[i][k] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}