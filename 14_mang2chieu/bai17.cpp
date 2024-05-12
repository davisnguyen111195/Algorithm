// Cho ma trận nhị phân gồm N hàng và M cột chỉ bao gồm các số 0 và 1. Hãy đếm số lượng miền các số 1 trong ma trận, các ô số 1 được coi là cùng miền nếu chúng có chung đỉnh.

// Ví dụ về ma trận nhị phân gồm 4 miền :



// Đầu vào
// Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

// Giới hạn
// 1≤N,M≤50.

// Đầu ra
// In ra số lượng miền số 1 trong ma trận.

// Ví dụ :
// Input 01
// Copy
// 3 3
// 1 0 1
// 0 0 1
// 1 1 0
// Output 01
// Copy
// 2

#include <bits/stdc++.h>

using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n, m;
int a[100][100];
void nhap(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}

void loang(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int ix = i + dx[k];
        int jy = j + dy[k];
        if(ix >= 0 && ix < n && jy >= 0 && jy < m){
            if(a[ix][jy] == 1){
                loang(ix, jy);
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

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                cnt++;
                loang(i, j);
            }
        }
    }

    cout << cnt;
    return 0;
}