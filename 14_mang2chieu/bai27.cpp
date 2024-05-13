// [Mảng 2 Chiều]. Bài 27. Maximum path sum 3
// Cho mảng 2 chiều A gồm N hàng và N cột, hãy tìm 1 đường đi từ cột 1 tới cột N sao cho các phần tử trên đường đi đó là lớn nhất có thể. Biết rằng ở mỗi bước đi từ ô hiện tại (i, j) chỉ có thể đi sang phải (i, j + 1) hoặc đi xuống ô dưới bên phải (i + 1, j + 1), ô bên trên bên phải (i - 1, j + 1). Hãy tìm 1 đường đi có tổng các số trên đường đi là lớn nhất.



// Đầu vào
// • Dòng 1 là N

// • N dòng tiếp theo mỗi dòng gồm N số

// Giới hạn
// • 1<=N<=100

// • 100<=A[i][j]<=100

// Đầu ra
// In ra đáp án của bài toán

// Ví dụ :
// Input 01
// Copy
// 5
// 2 -8 2 9 0 
// -5 6 6 -1 6 
// 3 5 0 2 9 
// 9 -8 9 7 0 
// -4 6 1 -2 0
// Output 01
// Copy
// 40

#include <bits/stdc++.h>

using namespace std;

int f[105][105];
int a[105][105];
int n; 
void nhap(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

int main(){
    #ifndef K
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    nhap();

    for(int j = 1; j <= n; j++){
        for(int i = 1; i <= n; i++){
            f[i][j] = a[i][j] + max({f[i-1][j-1], f[i][j-1], f[i+1][j-1]});
        }
    }
    int result = -1*150*150*150;
    for(int i = 1; i <= n; i++){
        result = max(result, f[i][n]);
    }
    cout << result;
    return 0;
}