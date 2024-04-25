// [Sắp xếp - Tìm Kiếm]. Bài 26. Tìm kiếm cặp số có hiệu bằng X
// Cho mảng A[] gồm N phần tử và số X. Nhiệm vụ của bạn là tìm cặp phần tử A[i] - A[j] = X. Nếu tồn tại A[i] - A[j] = X đưa ra 1, ngược lại đưa ra -1.

// Input Format

// Dòng thứ nhất là cặp số N, X; Dòng tiếp theo là N số A[i] là các phần tử của mảng A[].

// Constraints

// 1≤ N ≤10^5; 1≤ X, A[i] ≤10^5.

// Output Format

// In ra 1 nếu tìm thấy một cặp số có hiệu bằng X, ngược lại in ra -1.

// Sample Input 0

// 5 3
// 1 1 2 3 5
// Sample Output 0

// 1

#include <bits/stdc++.h>

using namespace std;
int firstEqualPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            res = mid;
            return res;
        } else if(a[mid] < x){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return res;
}
int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);

    for(int i = 0; i < n; i++){
        int target = x + a[i];
        if(firstEqualPos(a, i+1, n-1, target) != -1){
            cout << 1;
            return 0;
        } else {
            continue;
        }
    }

    cout << -1;
    return 0;

}