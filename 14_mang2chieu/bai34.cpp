#include <bits/stdc++.h>

using namespace std;

int dx[] = {0, -1, 1, 0};
int dy[] = {-1, 0, 0, 1};

int a[105][105];
int c[105][105];
int n, m, p = 0;
void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
}

void loang(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 4; k++){
        int ix = i + dx[k];
        int jy = j + dy[k];
        if(ix >= 1 && ix <= n && jy >= 1 && jy <= m){
            if(a[ix][jy] == 1){
                p += 4 - c[ix][jy];
                loang(ix, jy);
            }
        }
    }
}

void checkChungCanh(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 1){
                int cnt = 0;
                for(int k = 0; k < 4; k++){
                    int ix = i + dx[k];
                    int jy = j + dy[k];
                    if(ix >= 0 && ix <= n && jy >= 0 && jy <= m){
                        if(a[ix][jy] == 1){
                            cnt++;
                        }
                    }
                    
                }
                c[i][j] = cnt;
            }
        }
    }
}

int main(){
    #ifndef K
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    nhap();
    checkChungCanh();
    int maxP = -1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            p = 0;
            if(a[i][j] == 1){
                p += 4 - c[i][j];
                loang(i, j);
                maxP = max(maxP, p);
            }
        }
    }

    cout << maxP;
    return 0;
}