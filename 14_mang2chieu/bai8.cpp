// [Mảng 2 Chiều]. Bài 8. Hoán vị 2 cột
// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy hoán vị các phần tử trên 2 cột của ma trận.

// Đầu vào
// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Dòng tiếp theo là 2 cột u, v cần hoán vị.

// Giới hạn
// 1≤N≤200

// Các phần tử trong ma trận là số dương không quá 10^9

// 1≤u,v≤200

// Đầu ra
// In ra ma trận sau khi hoán vị 2 cột.

// Ví dụ :
// Input 01
// Copy
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// 1 3
// Output 01
// Copy
// 3 2 1
// 6 5 4
// 9 8 7


#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

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
    int u, v; cin >> u >> v;

    for(int i = 0; i < n; i++){
        swap(a[i][u-1], a[i][v-1]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}