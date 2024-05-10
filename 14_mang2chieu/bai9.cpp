// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số nguyên tố trên đường chéo chính và đường chéo phụ, mỗi phần tử là số nguyên tố thỏa mãn chỉ đếm 1 lần. Tức là khi N lẻ, thì chéo chính và phụ sẽ giao nhau ở giữa, và nếu số ở vị trí giao nhau đó là số nguyên tố thì bạn chỉ đếm 1 lần thôi

// Đầu vào
// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Giới hạn
// 1≤N≤200

// Các phần tử trong ma trận là số dương không quá 10^9

// Đầu ra
// In ra số lượng số nguyên tố trên đường chéo chính và phụ.

// Ví dụ :
// Input 01
// Copy
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 1 2
// 2 3 5 7
// Output 01
// Copy
// 3

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

bool primeChecker(int n){
    if(n < 2){
        return false;
    }

    for(int i = 2; i*i < n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}


int main(){
    #ifndef K
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
        
    }
    set<pair<int, int>> sX;
    for(int i = 0; i < n; i++){
        if(primeChecker(a[i][i])){
            sX.insert({i, i});
        }
        if(primeChecker(a[i][n-1-i])){
            sX.insert({i, n-i-1});
        }
    }

    cout << sX.size();
    return 0;
}