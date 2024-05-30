// [Hai Con Trỏ]. Bài 12. Sum of four values
// Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng có 3 phần tử A[i], A[j], A[k]*, A[l] với *i, j, k, l khác nhau và A[i] + A[j] + A[k] + A[l] = K hay không ?

// Đầu vào
// • Dòng đầu tiên là N và K

// • Dòng thứ 2 là N số trong mảng A[]

// Giới hạn
// • 1<=N<=1000

// • 1<=A[i],K<=10^9

// Đầu ra
// In ra YES nếu tồn tại, ngược lại in ra NO

// Ví dụ :
// Input 01
// Copy
// 6 28
// 3 6 7 9 1 6
// Output 01
// Copy
// YES

#include <bits/stdc++.h>

using namespace std;

bool find(int a[], int l, int r, int x){
    while(l < r){
        if(a[r]+a[l] > x){
            r--;
        } else if(a[r] + a[l] < x){
            l++;
        } else {
            return true;
        }
    }
    return false;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;

    sort(a, a+n);
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            int l = j+1, r = n-1;
            while(l < r){
                if(a[l]+a[r] == k-a[i]-a[j]){
                    cout << "YES";
                    return 0;
                } else if(a[r]+a[r] < k-a[i]-a[j]){
                    l++;
                } else{
                    r--;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}