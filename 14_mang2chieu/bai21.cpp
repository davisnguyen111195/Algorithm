// [Mảng 2 Chiều]. Bài 21. Đường đi của quân Mã
// Cho bàn cờ vua cỡ N * N, các ô trên bàn cờ có giá trị là 0 hoặc 1. Một con mã xuất phát từ ô (s, t) và muốn di chuyển tới ô (u, v), con mã chỉ có thể di chuyển ở các ô mà tại ô đó có giá trị là 1 và nó có thể di chuyển qua lại 1 ô nhiều lần. Hãy xác định xem con mã có thể tìm được đường đi hay không, dữ liệu đảm bảo ô (s, t) và ô (u, v) đều có giá trị là 1.

// Đầu vào
// Dòng đầu tiên N.

// Dòng thứ 2 là 4 số s, t, u , v.

// N dòng tiếp theo mỗi dòng gồm N phần tử.

// Giới hạn
// 1≤N,M≤100

// 1≤s,t,u,v≤N

// 0≤A[i][j]≤1

// Đầu ra
// In YES nếu con mã có thể tìm được đường đi, ngược lại in NO.

// Ví dụ :
// Input 01
// Copy
// 9
// 7 5 4 3
// 1 0 1 0 1 0 1 1 1 
// 1 1 1 1 0 0 0 0 1 
// 1 0 1 1 1 0 1 1 1 
// 1 0 1 0 1 0 0 0 0 
// 0 1 1 0 1 1 0 1 1 
// 1 0 0 0 0 1 1 0 1 
// 1 0 1 0 1 0 1 1 0 
// 0 1 1 0 0 0 0 1 1 
// 0 0 1 1 0 0 0 0 1
// Output 01
// Copy
// YES


#include <bits/stdc++.h>

using namespace std;

int a[101][101];
int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2 , -1, 1};

int n, s, t, u, v;
void nhap(){
    cin >> n >> s >> t >> u >> v;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}
void loang(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int ix = i + dx[k];
        int jy = j + dy[k];
        if(ix >= 1 && ix <= n && jy >= 1 && jy <= n){
            if(a[ix][jy] == 1){
                loang(ix, jy);
            }
        }
    }
}



int main(){
    #ifndef K
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    nhap();
    loang(s, t);
    if(a[u][v] == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}