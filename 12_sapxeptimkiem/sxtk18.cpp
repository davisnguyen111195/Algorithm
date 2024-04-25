// [Sắp xếp - Tìm Kiếm]. Bài 18. Cặp số có tổng nhỏ hơn K
// Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng nhỏ hơn k.

// Input Format

// Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

// Constraints

// 2<=n<=10^6;

// 1<=k<=10^6;

// 0<=a[i]<=10^6;

// Output Format

// In ra số lượng cặp số có tổng nhỏ hơn k

// Sample Input 0

// 4 5
// 2 2 2 2
// Sample Output 0

// 6

#include <bits/stdc++.h>

using namespace std;
int lastEqualPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] < x){
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}
int firstEqualPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] < x){
            res = mid;
            r = mid - 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    long long cnt = 0;
    for(int i = 0; i < n-1; i++){
        int target;
        if(k > a[i]){
            target = k - a[i];
            int first = firstEqualPos(a, i+1, n-1, target);
            int last = lastEqualPos(a, i+1, n-1, target);
            if(first != -1 && last != -1){
                cnt += last - first + 1;
            }
            
        } else {
            continue;
        }
    }
    cout << cnt;
    return 0;
}