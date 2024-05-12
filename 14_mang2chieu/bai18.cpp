// [Mảng 2 Chiều]. Bài 16. Đếm đảo 1
// Cho ma trận nhị phân gồm N hàng và M cột chỉ bao gồm các số 0 và 1. Hãy đếm số lượng miền các số 1 trong ma trận, các ô số 1 được coi là cùng miền nếu chúng có chung cạnh.

// Ví dụ về 1 ma trận nhị phân với 6 miền :



// Đầu vào
// Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

// Giới hạn
// 1≤N,M≤50

// Đầu ra
// In ra số lượng miền số 1 trong ma trận.

// Ví dụ :
// Input 01
// Copy
// 4 7
// 0 1 1 0 1 1 0 
// 1 1 1 1 1 1 1 
// 1 0 0 0 0 1 1 
// 1 1 0 1 0 0 0
// Output 01
// Copy
// 2


#include <bits/stdc++.h>

using namespace std;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main(){

    
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            bool check = true;
            for(int k = 0; k < 8; k++){
                int ix = i + dx[k];
                int jy = j + dy[k];
                if(ix >= 0 && ix < n && jy >= 0 && jy < m){
                    if(a[ix][jy] >= a[i][j]){
                        check = false;
                        break;
                    }
                }
            }
            if(check){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}
