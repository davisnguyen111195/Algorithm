// [Mảng 2 Chiều]. Bài 14. Ma trận xoắn ốc
// Xây dựng ma trận xoắn ốc cấp N

// Đầu vào
// Số nguyên dương N là cấp của ma trận xoáy ốc cần xây dựng.

// Giới hạn
// 1≤N≤100

// Đầu ra
// In ra ma trận xoáy ốc.

// Ví dụ :
// Input 01
// Copy
// 3
// Output 01
// Copy
// 1 2 3 
// 8 9 4 
// 7 6 5

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    int h1 = 0, c1 = 0, h2 = n-1, c2 = n - 1;
    int dem = 1;
    while(h1 <= h2 && c1 <= c2){
        
        for(int i = c1; i <= c2; i++){
            a[h1][i] = dem;
            dem++;
        }
        h1++;

        
        for(int i = h1; i <= h2; i++){
            a[i][c2] = dem;
            dem++;
        }
        c2--;

        for(int i = c2; i >= c1; i--){
            a[h2][i] = dem;
            dem++;
        }
        h2--;

        for(int i = h2; i >= h1; i--){
            a[i][c1] = dem;
            dem++;
        }
        c1++;

    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
