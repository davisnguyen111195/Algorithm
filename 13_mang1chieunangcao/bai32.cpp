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

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = 0; ll sum = 0; int cnt = 1e6+4;
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(sum >= k){
            if(sum == k){
                cnt = min(cnt, r - l + 1);
            }

            sum -= a[l];
            l++;
        }

        
    }
    if(cnt != 1e6+4){
        cout << cnt;
        return 0;
    }

    cout << -1;
    return 0;
}