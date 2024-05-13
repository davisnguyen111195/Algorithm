// [Mảng 2 Chiều]. Bài 26. Maximum path sum 2
// Cho mảng 2 chiều A gồm N hàng và N cột, hãy tìm 1 đường đi từ dòng 1 tới dòng N sao cho các phần tử trên đường đi đó là lớn nhất có thể. Biết rằng ở mỗi bước đi từ ô hiện tại chỉ có thể đi xuống ô dưới bên trái, ô dưới bên phải hoặc ô dưới của ô hiện tại. Hãy tìm 1 đường đi có tổng các số trên đường đi là lớn nhất.



// Đầu vào
// • Dòng 1 là N

// • N dòng tiếp theo mỗi dòng gồm N số

// Giới hạn
// • 1<=N<=100

// • 1<=A[i][j]<=100

// Đầu ra
// In ra kết quả của bài toán

// Ví dụ :
// Input 01
// Copy
// 5
// 5 1 8 6 7 
// 6 0 0 3 7 
// 3 4 1 5 3 
// 9 8 9 2 2 
// 5 3 4 5 3
// Output 01
// Copy
// 33

#include <bits/stdc++.h>

using namespace std;



int f[105][105];
int a[105][105];
int n;
int dx[] = {-1, -1, -1};
int dy[] = {-1, 0, 1};
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


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            f[i][j] = a[i][j] + max({f[i-1][j-1], f[i-1][j], f[i-1][j+1]});
        }
    }

    cout << *max_element(f[n]+1, f[n]+n+1);
    return 0;
}