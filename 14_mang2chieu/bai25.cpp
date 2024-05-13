
// [Mảng 2 Chiều]. Bài 25. Diện tích
// Cho một ma trận nhị phân cỡ NxM chỉ bao gồm các số 0, 1. Hãy xác định vùng nhiều số 1 nhất trên ma trận, biết rằng các ô có chung cạnh được coi là cùng miền.

// Đầu vào
// Dòng đầu tiên là N và M tương ứng với số hàng, cột của ma trận. N dòng tiếp theo mỗi dòng có M số

// Giới hạn
// 1<=N, M <= 500

// Các phần tử trong ma trận có giá trị 0 hoặc 1.

// Đầu ra
// In ra diện tích miền có nhiều số 1 nhất

// Ví dụ :
// Input 01
// Copy
// 5 6
// 0 1 0 1 0 1 
// 0 0 0 1 1 0 
// 0 1 1 0 1 1 
// 0 1 1 0 0 0 
// 0 0 0 0 0 0
// Output 01
// Copy
// 5

#include <bits/stdc++.h>

using namespace std;
int dx[] = {0, -1, 1, 0};
int dy[] = {-1, 0, 0, 1};
int n, m, cnt = 0; 
int a[500][500];
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
    for(int k = 0; k < 4; k++){
        int ix = i + dx[k];
        int jy = j + dy[k];
        if(ix >= 0 && ix < n && jy >= 0 && jy < m){
            if(a[ix][jy] == 1){
                loang(ix, jy);
                cnt++;
            }
            
        }
    }
}

int main(){
    nhap();
    int maxS = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                cnt = 1;
                loang(i, j);
                maxS = max(maxS, cnt);
                cnt = 0;
            }
            
        }
    }
    
    cout << maxS;
    return 0;
}
