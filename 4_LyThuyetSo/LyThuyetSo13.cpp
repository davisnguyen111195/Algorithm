//Using Legendre 

// Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho p^x. Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 3^2.

// Input Format

// Cặp số N, p được viết cách nhau một khoảng trống.

// Constraints

// 1≤N≤10^14; 2≤p≤5000

// Output Format

// Đưa ra kết quả trên một dòng

// Sample Input 0

// 7 3
// Sample Output 0

// 2
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

ll divFunc(ll n, ll p){
    ll count = 0;
    for(ll i = 1; pow(p, i) <= n; i++){
        ll k = n / pow(p, i);
        count = count + k;
    }
    return count;
}

int main(){

    ll n; ll p; cin >> n >> p;

    cout << divFunc(n, p);
    return 0;
}