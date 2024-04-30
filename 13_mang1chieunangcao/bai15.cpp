// [Mảng 1 Chiều]. Bài 17. Truy vấn tổng trên đoạn
// Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là tính tổng các số trong dãy từ vị trí l tới chỉ số r.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i] và số Q là số cuối cùng ở dòng thứ 2. Q dòng tiếp theo mỗi dòng là 2 ví trị l, r.

// Constraints

// 1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^9; 1 ≤ Q ≤ 1000; 1 ≤ l ≤ r ≤ N

// Output Format

// In ra tổng các phần tử trong đoạn [l, r] của từng truy vấn trên 1 dòng.

// Sample Input 0

// 5
// 1 2 3 4 5 
// 1
// 1 3
// Sample Output 0

// 6

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n; cin >> n;
    ll a[n+1];
    a[0] = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        a[i] = a[i-1] + x; 
        
    }

    int t;
    cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        cout << a[r] - a[l-1] << endl;
    }
    return 0;
}