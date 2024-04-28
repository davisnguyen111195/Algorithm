// [Sắp xếp - Tìm Kiếm]. Bài 42. Đếm mảng con có tổng bằng x(2)
// Cho một mảng gồm n số nguyên, nhiệm vụ của bạn là đếm số mảng con (dãy con các phần tử liên tiếp) có tổng bằng x.

// Input Format

// Dòng đầu tiên có hai số nguyên n và x: kích thước của mảng và tổng mục tiêu x. Dòng tiếp theo có n số nguyên a1, a2,…, an: các phần tử trong mảng

// Constraints

// 1≤n≤2⋅10^5; -10^9≤x, ai≤10^9

// Output Format

// In một số nguyên: số lượng mảng con cần thiết.

// Sample Input 0

// 5 7
// 2 4 1 2 7
// Sample Output 0

// 3

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n;
    ll x; cin >> n >> x;
    ll a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    ll b[n+1];
    b[0] = 0;
    
    for(int i = 1; i <= n; i++){
        b[i] = b[i-1] + a[i];
    }
    map<ll, int> mX;
    ll cnt = 0;
    for(int i = 0; i <= n; i++){
        ll target = b[i] - x;
        cnt += mX[target];
        mX[b[i]]++;
    }
    cout << cnt;
    return 0;
}