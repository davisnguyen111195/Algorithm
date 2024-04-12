// [Vector]. Bài 13. Vector các vector

// Cho 1 bảng số có N dòng và M cột, bạn hãy lưu bảng số này vào một vector các vector dạng vector> trong đó mỗi hàng của bảng số bạn lưu vào 1 vector. Hãy lật ngược từng dòng của bảng số sau đó in ra màn hình. Bạn phải cài đặt theo khuôn mẫu sau

// void nhap(vector<vector<int>> &v, int n, int m){
    
// }

// void xuat(vector<vector<int>> v, int n, int m){
    
// }

// void lat(vector<vector<int>> &v, int n, int m){
    
// }

// int main(){
//     int n, m; cin >> n >> m;
//     vector<vector<int>> v;
//     nhap(v, n, m);
//     lat(v, n, m);
//     xuat(v, n, m);
// }
// Input Format

// Dòng 1 là N và M

// N dòng tiếp theo mỗi dòng là M số

// Constraints

// 1<=N,M<=100

// Các số trong bảng số là số int

// Output Format

// In ra bảng số sau khi lật ngược từng dòng

// Sample Input 0

// 5 5
// 7 5 6 1 6 
// 7 4 2 3 9 
// 5 0 4 1 9 
// 2 0 1 5 4 
// 7 5 6 7 3 
// Sample Output 0

// 6 1 6 5 7 
// 9 3 2 4 7 
// 9 1 4 0 5 
// 4 5 1 0 2 
// 3 7 6 5 7 


#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void nhap(vector<vector<int>> &v, int n, int m);
void xuat(vector<vector<int>> v, int n, int m);
void lat(vector<vector<int>> &v, int n, int m);
void swap(int* a, int* b);

int main(){

    // #ifndef ON
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int n, m; cin >> n >> m;

    vector<vector<int>> vts;
    nhap(vts, n, m);
    lat(vts, n, m);
    cout << endl;
    xuat(vts, n, m);
    return 0;
}

void nhap(vector<vector<int>> &v, int n, int m){
    for(int i = 0; i < n; i++){
        vector<int> vt;
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            vt.push_back(x);
        }
        v.push_back(vt);
        vt.clear();
    }
}

void xuat(vector<vector<int>> v, int n, int m){
    for(auto items : v){
        for(auto item : items){
            cout << item << " ";
        }
        cout << endl;
    }
}

void lat(vector<vector<int>> &v, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int end = m - j - 1;
            if(j <= end){
                swap(v[i][j], v[i][end]);
            }
        }
    }
}

void swap(int* a, int* b){

    int tmp = *a;
    *a = *b;
    *b = tmp;
}