// [Mảng 2 Chiều]. Bài 32. Các vùng diện tích
// 28tech cung cấp cho bạn mảng A[][] 2 chiều gồm n dòng và m cột chứa các kí tự dấu sao hoặc dấu chấm nhiệm vụ của bạn là hãy liệt kê diện tích các vùng dấu sao theo thứ tự từ nhỏ đến lớn, các dấu sao được coi là cùng vùng với nhau nếu chúng nằm ở 2 ô chung cạnh với nhau.

// Đầu vào
// • Dòng 1 là N và M

// • N dòng tiếp theo mỗi dòng là M kí tự

// Giới hạn
// • 1<=N,M<=100

// • Các kí tự trong mảng A[][] là dấu * hoặc dấu .

// Đầu ra
// • In ra các vùng diện tích vùng dấu * từ nhỏ tới lớn

// Ví dụ :
// Input 01
// Copy
// 10 10
// *.*...*...
// ..***.*..*
// **...*..*.
// .....*....
// ...****...
// ..***..*..
// ...**..***
// *.........
// *......*..
// .*.**...*.
// Output 01
// Copy
// 1 1 1 1 1 1 2 2 2 2 4 4 11
#include <bits/stdc++.h>

using namespace std;
int dx[] = {0, -1, 1, 0};
int dy[] = {-1, 0, 0, 1};
char a[105][105];
int n, m;
void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
}
int cnt = 0;
void loang(int i, int j){
    for(int k = 0; k < 4; k++){
        a[i][j] = '.';
        int ix = i + dx[k];
        int jy = j + dy[k];
        if(ix >= 1 && ix <= n && jy >= 1 && jy <= m){
            if(a[ix][jy] == '*'){
                cnt++;
                loang(ix, jy);
            }
        }
    }
}

int main(){
    nhap();
    multiset<int> msX;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == '*'){
                cnt = 1;
                loang(i, j);
                msX.insert(cnt);
            }
        }
    }
    for(int item: msX){
        cout << item << " ";
    }
    return 0;
}