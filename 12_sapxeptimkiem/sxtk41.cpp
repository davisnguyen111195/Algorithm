// [Sắp xếp - Tìm Kiếm]. Bài 41. Mảng con có tổng bằng X
// Cho một mảng gồm n số nguyên dương, nhiệm vụ của bạn là đếm số mảng con (dãy con các phần tử liên tiếp) có tổng bằng x.

// Input Format

// Dòng đầu tiên có hai số nguyên n và x: kích thước của mảng và tổng mục tiêu x. Dòng tiếp theo có n số nguyên a1, a2,…, an: các phần tử trong mảng

// Constraints

// 1≤n≤2⋅10^5; 1≤x,ai≤10^9

// Output Format

// In một số nguyên: số lượng mảng con.

// Sample Input 0

// 5 7
// 2 4 1 2 7
// Sample Output 0

// 3
// Explanation 0

// 3 dãy con liên tiếp là : (2, 4, 1), (4, 1, 2), (7)

#include <bits/stdc++.h>
using ll = long long;
using namespace std;



int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    ll sum = 0;
    int l = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(sum > x){
            sum -= a[l];
            l++;
        }
        if(sum == x){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}