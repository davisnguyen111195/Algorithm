// [Sắp xếp - Tìm Kiếm]. Bài 17. Cặp số có tổng bằng K
// Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng bằng k.

// Gợi ý : Sắp xếp mảng tăng dần sau đó với mỗi phần tử a[i] trong mảng tìm xem trong đoạn [i + 1, n - 1] có bao nhiêu phần tử có giá trị là k - a[i], bằng cách tìm vị trí đầu tiên và vị trí cuối cùng của phần tử có giá trị là k - a[i] => Số lượng

// Input Format

// Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

// Constraints

// 2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

// Output Format

// In ra số lượng cặp số có tổng bằng k

// Sample Input 0

// 4 4
// 2 2 2 2
// Sample Output 0

// 6

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int firstPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            res = mid;
            r = mid - 1;
        } else if(a[mid] > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int lastPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            res = mid;
            l = mid + 1;
        } else if(a[mid] > x){
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
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        if(k >= a[i]){
            int target = k - a[i];
            int first = firstPos(a, i+1, n-1, target);
            int last = lastPos(a, i+1, n-1, target);
            if(first != -1 && last != -1){
                cnt += (last - first + 1);
            }
        }
        
    }
    cout << cnt;
    return 0;
}