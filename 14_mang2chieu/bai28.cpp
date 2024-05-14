// [Mảng 2 Chiều]. Bài 28. Hình vuông lớn nhất
// Cho mảng 2 chiều A gồm N hàng và N cột, hãy xét tất cả các hình vuông con cỡ 3x3 của mảng A, hãy tìm hình vuông có có tổng lớn nhất đó.

// Đầu vào
// • Dòng 1 là N

// • N dòng tiếp theo mỗi dòng gồm N số

// Giới hạn
// • 3<=N<=100

// • 100<=A[i][j]<=100

// Đầu ra
// In ra tổng lớn nhất của hình vuông cỡ 3x3

// Ví dụ :
// Input 01
// Copy
// 6
// 4 6 4 5 8 2 
// 8 0 9 0 1 4 
// 3 5 3 6 3 4 
// 5 7 0 9 5 9 
// 4 5 5 9 6 3 
// 9 2 3 6 1 8
// Output 01
// Copy
// 56

#include <bits/stdc++.h>

using namespace std;
int a[105][105];
int n; 
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
void nhap(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

int tongMatran(int i, int j){
    int sum = a[i][j];
    for(int k = 0; k < 8; k++){
        int ix = i + dx[k];
        int jy = j + dy[k];
        sum += a[ix][jy];
    }
    return sum;
}


int main(){
    nhap();
    int maxSum = -1*150*150*150;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            maxSum = max(maxSum, tongMatran(i, j));

        }
    }
    cout << maxSum;
    return 0;
}
