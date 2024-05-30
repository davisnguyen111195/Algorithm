// [Hai Con Trỏ]. Bài 10. Two sum
// Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng có 2 phần tử A[i], A[j] với i khác j và A[i] + A[j] = K hay không ? Bài này các bạn có thể giải theo 3 cách : Binary search, Hai con trỏ, Map.

// Đầu vào
// • Dòng đầu tiên là N và K

// • Dòng thứ 2 là N số trong mảng A[]

// Giới hạn
// • 1<=N<=5000

// • 1<=A[i],K<=10^9

// Đầu ra
// In ra YES nếu tồn tại, ngược lại in ra NO

// Ví dụ :
// Input 01
// Copy
// 5 28
// 2 1 10 5 9
// Output 01
// Copy
// NO
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;

    int a[n];
    for(int &x: a) cin >> x;
    sort(a, a+n);
    int r = n-1, l = 0;
    while(l < r){
        if(a[r] + a[l] > k){
            r--;
        } else if(a[r] + a[l] < k){
            l++;
        } else {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}