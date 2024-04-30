// [Mảng 1 Chiều]. Bài 13. Đổi tiền tham lam
// Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, số lượng tờ tiền mỗi mệnh giá là không hạn chế. Một người cần đổi số tiền có giá trị bằng N. Hãy xác định xem số tờ tiền ít nhất sau khi đổi là bao nhiêu?

// Input Format

// Gồm 1 số nguyên N

// Constraints

// 1 ≤ N ≤ 10^14

// Output Format

// Số lượng tờ tiền ít nhất có tổng bằng N.

// Sample Input 0

// 121
// Sample Output 0

// 3

#include <bits/stdc++.h>
using ll = long long;
using namespace std;



int main(){
    ll n; cin >> n;
    ll a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    ll cnt = 0;
    for(int i = 9; i >= 0; i--){
        cnt += n/a[i];
        n %= a[i];
    }
    cout << cnt;

    return 0;
}