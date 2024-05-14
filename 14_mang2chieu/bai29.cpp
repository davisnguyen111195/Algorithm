// [Mảng 2 Chiều]. Bài 29. Đường đi của quân Tịnh
// Tèo khá thích chơi cờ vua và quân cờ mà Tèo yêu thích chính là quân Tịnh, bây giờ Tèo có một bàn cờ cỡ NxN, trên bàn cờ sẽ có những ô trống và có những ô có vật cản, nhiệm vụ của bạn là hãy xác định xem số lượng ô trên bàn cờ mà quân Tịnh có thể di chuyển tới, biết rằng nó có thể đi qua đi lại 1 ô trống nhiều lần và không thể đi vào ô có vật cản.

// Bàn cờ gồm N hàng N cột, mỗi ô là số 1 tương ứng với vật cản và ô số 0 tương ứng với ô trống. Ban đầu quân Tịnh nằm ở vị trí hàng S và cột T và ô (S, T) là ô trống

// Đầu vào
// • Dòng 1 là N, S, T

// • N dòng tiếp theo mỗi dòng gồm N số

// Giới hạn
// • 5<=N<=20

// • 0<=A[i][j]<=1

// Đầu ra
// In ra số lượng ô trên bàn cờ mà quân Tịnh có thể đến được

// Ví dụ :
// Input 01
// Copy
// 6 1 3
// 0 0 0 1 1 0 
// 1 1 1 0 1 0 
// 1 0 0 1 0 1 
// 1 1 1 1 1 0 
// 0 0 1 1 1 0 
// 0 1 1 0 1 0
// Output 01
// Copy
// 6

#include <bits/stdc++.h>

using namespace std;
int n, s, t;
int a[25][25];
int dx[] = {-1, 1, 1, -1};
int dy[] = {-1, 1, -1, 1};
int cnt = 0;
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
