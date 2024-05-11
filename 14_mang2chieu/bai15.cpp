// [Mảng 2 Chiều]. Bài 15. Xoắn ốc Fibonacii
// In ra ma trận xoắn ốc cấp N, với các số trong ma trận đều là các số trong dãy Fibonacci.

// Đầu vào
// Số nguyên dương N

// Giới hạn
// 1≤N≤9

// Đầu ra
// Ma trận xoắn ốc cấp N

// Ví dụ :
// Input 01
// Copy
// 3
// Output 01
// Copy
// 0 1 1 
// 13 21 2 
// 8 5 3
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
        int n; cin >> n;
    ll a[100][100];
    ll b[100];
    b[0] = 0;
    b[1] = 1;
    for(int i = 2; i < 100; i++){
        b[i] = b[i-1] + b[i-2];
    }
    int h1 = 0, c1 = 0, h2 = n-1, c2 = n - 1;
    int dem = 0;
    while(h1 <= h2 && c1 <= c2){
        
        for(int i = c1; i <= c2; i++){
            a[h1][i] = b[dem];
            dem++;
        }
        h1++;

        
        for(int i = h1; i <= h2; i++){
            a[i][c2] = b[dem];
            dem++;
        }
        c2--;

        for(int i = c2; i >= c1; i--){
            a[h2][i] = b[dem];
            dem++;
        }
        h2--;

        for(int i = h2; i >= h1; i--){
            a[i][c1] = b[dem];
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
