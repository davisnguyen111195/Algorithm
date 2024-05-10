// [Mảng 2 Chiều]. Bài 3. Số lớn nhất, nhỏ nhất
// Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy tìm số nhỏ nhất trong ma trận và số lớn nhất trong ma trận, sau đó liệt kê các vị trí xuất hiện của các phần tử này trong ma trận.

// Đầu vào
// Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.

// Giới hạn
// 1≤N,M≤205

// Các phần tử trong ma trận là số dương không quá 10^9.

// Đầu ra
// Dòng đầu tiên in ra số nhỏ nhất trong ma trận, các dòng tiếp theo liệt kê các vị trí của số này trong ma trận.

// Dòng tiếp theo in ra số lớn nhất trong ma trận, các dòng tiếp theo liệt kê các vị trí của số này trong ma trận. Xem test case mẫu để rõ hơn.

// Ví dụ :
// Input 01
// Copy
// 3 3
// 1 2 1
// 4 5 6
// 7 8 9
// Output 01
// Copy
// 1
// 1 1
// 1 3
// 9
// 3 3

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int minA = 1e9+6, maxA = -1;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            a[i][j] = x;
            minA = min(x, minA);
            maxA = max(x, maxA);
        }
    }
    
    cout << minA << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == minA){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }

    cout << maxA << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == maxA){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
    return 0;
}
