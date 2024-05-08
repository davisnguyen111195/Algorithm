#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n]; int cnt = -1;
    map<int, int> mX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        int x = a[i] - k; int y = a[i] + k;
        if(mX.count(x)){
            cnt = max(cnt, i - mX[x]);
        }
        if(mX.count(y)){
            cnt = max(cnt, i - mX[y]);
        }
        if(mX.count(a[i]) == 0){
            mX[a[i]] = i;
        }
    }

    

   
     
    cout << cnt;
    return 0;

}