// [Mảng 2 Chiều]. Bài 11. Sắp xếp hàng của ma trận
// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy sắp xếp các phần tử của từng hàng của ma trận theo thứ tự tăng dần.

// Đầu vào
// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Giới hạn
// 1≤N≤200

// Các phần tử trong ma trận là số dương không quá 10^9

// Đầu ra
// In ra ma trận sau khi sắp xếp

// Ví dụ :
// Input 01
// Copy
// 3
// 2 7 6
// 1 2 3
// 9 8 1
// Output 01
// Copy
// 2 6 7
// 1 2 3
// 1 8 9

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
        sort(a[i], a[i]+n);
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}