// [Mảng 2 Chiều]. Bài 19. Maximum path sum
// Cho ma trận A các số nguyên có N hàng và M cột. Tìm đường đi từ ở [1, 1] tới ô [N, M] sao cho tổng các số trên đường đi là lớn nhất có thể, biết rằng ở mỗi bước chỉ có thể đi từ ô hiện tại xuống ô phía dưới hoặc đi sang phải.

// Ví dụ đường đi có tổng lớn nhất ở ma trận bên dưới được tô màu xanh :



// Đầu vào
// Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

// Giới hạn
// 1≤N,M≤100

// 1≤A[i][j]≤10^9

// Đầu ra
// In ra đường đi có tổng lớn nhất.

// Ví dụ :
// Input 01
// Copy
// 3 3
// 1 2 2
// 3 10 2
// 5 7 2
// Output 01
// Copy
// 23

#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int dx[] = {1, 0};
int dy[] = {0, 1};
int n, m;
long long f[102][102]; 
long long a[102][102];
void nhap(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
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
    f[0][0] = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            f[i][j] = a[i][j];
            ll best = 0;
            if(i > 0){
                best = f[i-1][j];
            } 
            if(j > 0){
                best = max(best, f[i][j-1]);
            }
            f[i][j] += best;
        }
    }

    cout << f[n-1][m-1];
    return 0;
}