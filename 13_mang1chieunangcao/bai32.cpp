// [Mảng 1 Chiều]. Bài 33. Minimum subarray
// Cho mảng A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là tìm mảng con liên tiếp ngắn nhất có tổng các phần tử bằng K. Ví dụ với mảng A[] = {1, 1, 3, 1, 2, 4, 1, 1, 2} và K = 6 thì mảng con ngắn nhất có tổng bằng 6 là 2.

// Input Format

// Dòng thứ nhất gồm N và K; Dòng thứ 2 gồm các phần tử trong mảng A[];

// Constraints

// 1<=K<=N<=10^6; -0<=A[i]<=10^6;

// Output Format

// In ra độ dài của mảng con ngắn nhất đó hoặc in ra -1 nếu không tồn tại mảng con có tổng bằng K

// Sample Input 0

// 6 4
// 1 1 1 3 2 4
// Sample Output 0

// 1

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int lastPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            res = mid;
            l = mid + 1;
        } else if(a[mid] < x){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n+1]; ll sum = 0; a[0] = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        sum = sum + x;
        a[i] = sum;
    }
    ll result = 1e6+4;
    for(int i = 0; i <= n; i++){
        int target = k + a[i];
        ll res = lastPos(a, i+1, n, target);
        if(res != -1){
            result = min(result, res-i);
        }
    }
    if(result != -1){
        cout << result;
        return 0;
    }
        
    cout << -1;
    return 0;
}