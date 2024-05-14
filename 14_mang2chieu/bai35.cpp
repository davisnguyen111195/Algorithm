#include <bits/stdc++.h>
using  ll = long long;
using namespace std;

int a[105][105], b[105][105];

int n, m;
void nhap(int c[105][105]){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> c[i][j];
        }
    }
}

 int main(){
    cin >> n >> m;
    nhap(a);
    nhap(b);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << 1ll * a[i][j] * b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
 }