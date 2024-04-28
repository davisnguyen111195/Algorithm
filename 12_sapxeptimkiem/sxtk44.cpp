// [Sắp xếp - Tìm Kiếm]. Bài 44. Đếm mảng con có nhiều nhất k số khác nhau
// Cho một mảng n số nguyên, nhiệm vụ của bạn là tính số mảng con liên tiếp có nhiều nhất k giá trị khác nhau.

// Input Format

// Dòng nhập đầu tiên có hai số nguyên n và k. Dòng tiếp theo có n số nguyên x1, x2,…, xn: nội dung của mảng.

// Constraints

// 1≤k≤n≤2⋅10^5;
// 1≤xi≤10^9

// Output Format

// In một số nguyên: số mảng con.

// Sample Input 0

// 100 3
// 3 2 3 4 3 3 4 2 3 1 4 4 1 3 4 4 3 1 3 1 4 2 2 3 4 3 2 1 1 1 4 1 1 2 2 1 3 2 4 3 1 3 4 2 1 3 2 2 2 1 4 4 1 4 3 3 3 1 2 1 2 3 1 2 4 3 1 2 4 3 1 4 3 2 1 4 3 4 1 2 3 3 2 2 2 4 4 4 3 2 2 3 4 2 4 2 4 3 1 1
// Sample Output 0

// 641
// Sample Input 1

// 5 2
// 1 2 3 1 1
// Sample Output 1

// 10


#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int l = 0;
    ll cnt = 0;
    ll maxLen = 0;
    map<ll, int> mX;
    ll res = 0;
    for(int r = 0; r < n; r++){
        mX[a[r]]++;
        if(mX[a[r]] == 1) {
            cnt++;
        }
        while(cnt > k){
            mX[a[l]]--;
            if(mX[a[l]] == 0){
                cnt--;
            }
            l++;
        }
        res += r-l+1;
    }
    cout << res;
    return 0;
}