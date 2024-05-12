// [Mảng 2 Chiều]. Bài 33. Chu vi
// Cho mảng A[][] gồm N hàng, M cột chỉ bao gồm các số 0 và 1. Bạn hãy tiến hành tính chu vi của từng vùng số 1 xuất hiện trong mảng, 2 số 1 được coi là cùng vùng với nhau nếu chúng nằm ở 2 ô chung cạnh.

// Chu vi của 1 vùng số 1 sẽ là tổng độ dài các cạnh bao quanh của các ố số 1 trong vùng đó. Mỗi ô trong mảng 2 chiều là 1 hình vuông có cạnh độ dài là 1.

// Xem xét ví dụ sau đây thì chu vi vùng số 1 đầu tiên sẽ là 6, vùng số 2 sẽ có chu vi là 10.



// Gợi ý : Đối với mỗi (i, j) lấy 4 - x, trong đó x là số ô số 1 xung quanh chung cạnh với ô i, j thì 4 - x => số cạnh bao bên ngoài mà ô (i, j) đóng góp vào chu vi của miền

// Đầu vào
// • Dòng 1 là N và M

// • N dòng tiếp theo mỗi dòng gồm M số 0 hoặc 1

// Giới hạn
// • 1<=N,M<=100

// • Các phần tử trong mảng A là 0 hoặc 1

// Đầu ra
// In ra chu vi của từng vùng theo thứ tự xuất hiện trong mảng (từ trên xuống dưới và từ trái qua phải) cách nhau 1 dấu cách

// Ví dụ :
// Input 01
// Copy
// 5 8
// 1 1 0 0 0 1 0 0 
// 0 0 0 1 1 0 1 1 
// 1 0 1 1 0 1 0 1 
// 0 0 1 1 0 1 1 0 
// 0 1 1 1 0 0 1 0
// Output 01
// Copy
// 6 4 16 8 4 10

#include <bits/stdc++.h>

using namespace std;

int dx[] = {0, -1, 1, 0};
int dy[] = {-1, 0, 0, 1};

int a[100][100];
int n, m, cnt = 0, p = 0;
void nhap(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}

void loang(int i, int j){
    p += 4 - cnt;
    a[i][j] = 0;
    for(int k = 0; k < 4; k++){
        int ix = i + dx[k];
        int jy = j + dy[k];
        if(ix >= 0 && ix < n && jy >= 0 && jy < n){
            if(a[ix][jy] == 1){
                loang(ix, jy);
                cnt++;
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
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[j][i] == 1){
                cnt = 1;
                loang(i, j);
                cout << p << " ";

                p = 0;
                cnt = 0;
            }
        }
    }

    return 0;
}