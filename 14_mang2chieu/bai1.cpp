// [Mảng 2 Chiều]. Bài 1. Liệt kê các số nguyên tố trong mảng 2 chiều
// Cho mảng 2 chiều cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy liệt kê các số nguyên tố theo từng hàng trong mảng 2 chiều.

// Đầu vào
// Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.

// Giới hạn
// 1≤N,M≤500

// Các phần tử trong ma trận là số dương không quá 10^9.

// Đầu ra
// In ra các số nguyên tố trong ma trận theo từng dòng

// Ví dụ :
// Input 01
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output 01
// 2 3
// 5
// 7

#include <bits/stdc++.h>
using ll = long long;
using namespace std;


bool checkPrime(ll n){
    if(n < 2){
        return false;
    }

    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    
    int n, m; cin >> n >> m;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            if(checkPrime(x)){
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
