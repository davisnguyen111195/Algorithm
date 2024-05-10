// [Mảng 2 Chiều]. Bài 6. Hoán vị đường chéo
// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy hoán vị các phần tử trên 2 đường chéo chính và phụ của ma trận.

// Đầu vào
// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Giới hạn
// 1≤n≤200

// Các phần tử trong ma trận là số dương không quá 10^9.

// Đầu ra
// In ra ma trận sau khi hoán vị 2 đường chéo

// Ví dụ :
// Input 01
// Copy
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output 01
// Copy
// 3 2 1
// 4 5 6
// 9 8 7

#include <bits/stdc++.h>

using namespace std;
void swap(int* a, int* b){
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
    for(int i = 0; i < n; i++){
        int j = n-1-i;
        swap(a[i][i], a[i][j]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}