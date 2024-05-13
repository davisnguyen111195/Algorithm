// [Mảng 2 Chiều]. Bài 20. Tìm đường đi
// Cho một ma trận nhị phân có N hàng và M cột, một con chuột bắt đầu từ ô có tọa độ [s, t] và tìm đường đi tới ô [u, v], biết rằng ở mỗi bước con chuột có thể di chuyển từ ô hiện tại sang các ô chung cạnh với ô hiện tại và số ở ô chung cạnh là số 1.

// Bạn chỉ được đi qua 1 ô đúng 1 lần hãy kiểm tra xem con chuột có thể tìm được đường đi tới ô [u, v] hay không ? Dữ liệu đảm bảo 2 ô [s, t] và ô [u, v] đều bằng 1.

// Gợi ý : Loang từ ô (u, v) xem ô (s, t) có bị đi qua không, nếu có là sẽ tìm được đường đi

// Ví dụ con chuột có thể đi từ ô (1, 1) tới ô (3, 6) theo đường đi được tô màu xanh



// Đầu vào
// Dòng đầu tiên N và M.

// Dòng thứ 2 là 4 số s, t, u , v

// N dòng tiếp theo mỗi dòng gồm M phần tử.

// Giới hạn
// 1≤N,M≤100

// 1≤s,u≤N

// 1≤t,v≤M

// Đầu ra
// In YES nếu con chuột có thể tìm được đường đi, ngược lại in NO.

// Ví dụ :
// Input 01
// Copy
// 3 5
// 1 1 3 5
// 1 0 1 0 0 
// 0 1 1 1 1 
// 1 0 0 0 1
// Output 01
// Copy
// NO

#include <bits/stdc++.h>

using namespace std;
int dx[] = {0, -1, 1, 0};
int dy[] = {-1, 0, 0, 1};
int n, m, s, t, u ,v; 
int a[100][100];
void nhap(){
    cin >> n >> m >> s >> t >> u >> v;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}

void loang(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 4; k++){
        int ix = i + dx[k];
        int jy = j + dy[k];
        if(ix >= 0 && ix < n && jy >= 0 && jy < m){
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
    loang(s-1, t-1);

    if(a[u-1][v-1] == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}