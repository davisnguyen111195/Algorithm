// [Mảng 2 Chiều]. Bài 30. Đường đi của quân Xe
// Tèo khá thích chơi cờ vua và quân cờ mà Tèo yêu thích chính là quân Xe, bây giờ Tèo có một bàn cờ cỡ NxN, trên bàn cờ sẽ có những ô trống và có những ô có vật cản, nhiệm vụ của bạn là hãy xác định xem số lượng ô trên bàn cờ mà quân Xe có thể di chuyển tới, biết rằng nó có thể đi qua đi lại 1 ô trống nhiều lần và không thể đi vào ô có vật cản.

// Bàn cờ gồm N hàng N cột, mỗi ô là số 1 tương ứng với vật cản và ô số 0 tương ứng với ô trống. Ban đầu quân Xe nằm ở vị trí hàng S và cột T và ô (S, T) là ô trống

// Đầu vào
// • Dòng 1 là N, S, T

// • N dòng tiếp theo mỗi dòng gồm N số

// Giới hạn
// • 5<=N<=20

// • 0<=A[i][j]<=1

// Đầu ra
// In ra số lượng ô trên bàn cờ mà quân Xe có thể đến được

// Ví dụ :
// Input 01
// Copy
// 7 4 6
// 1 1 1 0 0 1 0 
// 1 1 0 0 0 1 1 
// 0 1 0 0 0 0 0 
// 1 0 1 0 1 0 1 
// 1 0 1 1 1 1 0 
// 1 1 0 0 1 0 1 
// 0 0 0 0 1 1 0
// Output 01
// Copy
// 12
// Giải thích :
// Những ô quân Xe có thể đi tới : 4 6, 3 6, 3 5, 2 5, 1 5, 1 4, 2 4, 3 4, 4 4, 3 3, 2 3, 3 7

#include <bits/stdc++.h>

using namespace std;
int dx[] = {0, -1, 1, 0};
int dy[] = {-1, 0, 0, 1};
int n, s, t, cnt = 0;
int a[25][25];
void nhap(){
    cin >> n >> s >> t;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }

    }
}
void loang(int i, int j){
    a[i][j] = 1;
    for(int k = 0; k < 4; k++){
        int ix = i + dx[k];
        int jy = j + dy[k];
        if(ix >= 1 && ix <= n && jy >= 1 && jy <= n){
            if(a[ix][jy] == 0){
                loang(ix, jy);
                cnt++;
            }
        }
    }
}

int main(){
    nhap();
    if(a[s][t] == 0){
        cnt = 1;
        loang(s, t);
    }
    cout << cnt;
    return 0;
}
