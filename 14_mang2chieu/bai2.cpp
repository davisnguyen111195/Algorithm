// [Mảng 2 Chiều]. Bài 2. Tổng hàng, tổng cột
// Cho mảng 2 chiều cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy tính tổng các phần tử trên từng hàng và tổng các phần tử trên từng cột của mảng 2 chiều này.

// Đầu vào
// Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.

// Giới hạn
// 1≤N,M≤200

// Các phần tử trong ma trận là số dương không quá 10^9.

// Đầu ra
// Dòng đầu tiên, in ra N số là tổng của N hàng. Dòng thứ 2 in ra M số là tổng của M cột.

// Ví dụ :
// Input 01

// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output 01

// 6 15 24 
// 12 15 18

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            a[i][j] = x;
        }
    }

    for(int i = 0; i < n; i++){
        ll sum1 = 0;
        for(int j = 0; j < m; j++){
            sum1 += a[i][j];
        }
        cout << sum1 << " ";
    }

    cout << endl;

    for(int i = 0; i < m; i++){
        ll sum2 = 0;
        for(int j = 0; j < n; j++){
            sum2 += a[j][i];
        }
        cout << sum2 << " ";
    }
    return 0;
}
