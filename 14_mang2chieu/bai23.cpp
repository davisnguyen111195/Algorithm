// [Mảng 2 Chiều]. Bài 23. Biên của ma trận
// Cho ma trận vuông A[N][N]. Hãy in các phần tử thuộc vùng biên.

// Đầu vào
// Dòng đầu tiên đưa vào N là cấp của ma trận A[N][N]

// N dòng tiếp mỗi dòng gồm N số nguyên.

// Giới hạn
// 1≤N≤100

// 0≤A[i][j]≤1000000

// Đầu ra
// In ra ma trận theo yêu cầu, các số được in trên 1 dòng.

// Ví dụ :
// Input 01
// Copy
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output 01
// Copy
// 1 2 3 4 6 7 8 9


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n; 
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        if(i == 0){
            for(int j = 0; j < n; j++){
                cout << a[i][j] << " ";
            }
        } else if(i == n-1){
            for(int k = 0; k < n; k++){
                cout << a[i][k] << " ";
            }
        } else {
            cout << a[i][0] << " " << a[i][n-1] << " ";
        }
    }
    return 0;
}
