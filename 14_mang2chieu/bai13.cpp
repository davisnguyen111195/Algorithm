// [Mảng 2 Chiều]. Bài 13. Nhân 2 ma trận
// Cho ma trận A cỡ NxM, ma trận B cỡ MxP. Hãy tính ma trận tích của A và B.

// Tham khảo cách nhân 2 ma trận : Nhân 2 ma trận

// Đầu vào
// Dòng đầu tiên là 3 số N, M, P

// N dòng tiếp theo, mỗi dòng M của ma trận A

// M dòng tiếp theo, mỗi dòng P số của ma trận B

// Giới hạn
// 1≤N,M,P≤50

// Các phần tử trong ma trận là số dương không quá 100000

// Đầu ra
// In ra ma trận tích của A và B

// Ví dụ :
// Input 01
// Copy
// 3 4 5
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// Output 01
// Copy
// 110 120 130 140 150
// 246 272 298 324 350
// 382 424 466 508 550

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n, m, p; cin >> n >> m >> p;
    ll a[n][m];
    ll b[m][p];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            cin >> b[i][j];
        }
    }
    ll c[n][p];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            c[i][j] = 0;
            for(int k = 0; k < m; k++){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    //cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
