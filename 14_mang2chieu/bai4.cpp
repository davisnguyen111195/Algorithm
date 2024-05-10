// [Mảng 2 Chiều]. Bài 4. Số thuận nghịch tam giác dưới
// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số thuận nghịch thuộc tam giác dưới của ma trận trên.

// Tam giác dưới là những phần tử thuộc đường chéo chính trở xuống :
// Đầu vào
// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Giới hạn
// 1≤N≤200

// Các phần tử trong ma trận là số dương không quá 10^9.

// Đầu ra
// In ra số lượng số thuận nghịch trong ma trận.

// Ví dụ :
// Input 01
// Copy
// 3
// 1 2 3
// 22 14 56
// 76 5 4
// Output 01
// Copy
// 4

#include <bits/stdc++.h>

using namespace std;

bool tnChecker(int n){
    int tmp = 0;
    int nX = n;
    while(n != 0){
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    return tmp == nX;
}

int main(){
    int n, m; cin >> n;
    m = n;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(tnChecker(a[i][j])){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}
