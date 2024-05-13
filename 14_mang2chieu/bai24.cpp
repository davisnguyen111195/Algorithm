// [Mảng 2 Chiều]. Bài 24. Phần tử xuất hiện ở mọi hàng
// Cho ma trận vuông A[N][N]. Hãy in ra các số xuất hiện ở mọi hàng theo thứ tự từ bé đến lớn, mỗi giá trị xuất hiện chỉ liệt kê 1 lần.

// Đầu vào
// Dòng đầu tiên đưa vào N là cấp của ma trận A[N][N]

// N dòng tiếp mỗi dòng gồm N số nguyên.

// Giới hạn
// 1≤N≤100

// 0≤A[i][j]≤100000

// Đầu ra
// In ra các giá trị xuất hiện trên mọi dòng của ma trận, các số in cách nhau một dấu cách.

// Nếu không tồn tại giá trị nào thỏa mãn in ra "NOT FOUND".

// Ví dụ :
// Input 01
// Copy
// 4
// 1 2 2 3
// 2 1 2 4
// 1 4 5 2
// 2 2 3 1
// Output 01
// Copy
// 1 2
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        sort(a[i], a[i] + n);
    }
    set<int> sX;
    for(int l = 0; l < n; l++){
        int cnt = 1;
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[0][l] == a[i][j]){
                    cnt++;
                    break;
                }
            }
        }
        if(cnt == n){
            sX.insert(a[0][l]);
        }
    }
    if(sX.size() != 0){
        for(auto item : sX){
            cout << item << " ";
        }
    } else {
        cout << "NOT FOUND";
    }
    

    return 0;
}
