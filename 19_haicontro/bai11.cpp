// [Hai Con Trỏ]. Bài 11. Sum of three values
// Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng có 3 phần tử A[i], A[j], A[k] với i, j, k khác nhau và A[i] + A[j] + A[k] = K hay không ?

// Đầu vào
// • Dòng đầu tiên là N và K

// • Dòng thứ 2 là N số trong mảng A[]

// Giới hạn
// • 1<=N<=10^5

// • 1<=A[i],K<=10^9

// Đầu ra
// In ra YES nếu tồn tại, ngược lại in ra NO

// Ví dụ :
// Input 01
// Copy
// 7 13
// 1 7 6 3 3 1 8
// Output 01
// Copy
// YES

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x: a) cin >> x;
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        int check = k - a[i];
        int l = i + 1;
        int r = n-1;
        while(l < r){
            if(a[l] + a[r] > check){
                r--;
            } else if(a[l] + a[r] < check){
                l++;
            } else {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;

}