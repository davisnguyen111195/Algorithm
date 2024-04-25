// [Sắp xếp - Tìm Kiếm]. Bài 19. Cặp số có tổng lớn hơn k
// Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng lớn hơn k.

// Gợi ý : Sử dụng binary_search, đối với mỗi phần tử a[i] đếm số lượng phần tử trong mảng (đã sắp xếp) > k - a[i] bằng cách tìm vị trí đầu tiên của phần tử > k - a[i], từ vị trí này tới cuối dãy sẽ đều là các phần tử > k - a[i]

// Input Format

// Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

// Constraints

// 2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

// Output Format

// In ra số lượng cặp số có tổng lớn hơn k

// Sample Input 0

// 4 5
// 2 3 4 5
// Sample Output 0

// 5

#include <bits/stdc++.h>

using namespace std;
int firstGreaterPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] > x){
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
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
        int target = k - a[i];
        int first = firstGreaterPos(a, i+1, n-1, target);
            
        if(first != -1){
            cnt += n - first;
        }
    }
    cout << cnt;
    return 0;
}