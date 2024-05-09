// [Mảng 1 chiều]. Bài 39. Longest Zero Sum Subarray
// Cho mảng A[] gồm N phần tử, bạn hãy tìm ra dãy con liên tiếp dài nhất có tổng bằng 0, nếu có nhiều dãy con thỏa mãn hãy in ra dãy con đầu tiên, nếu không tồn tại dãy con có tổng bằng 0 thì in ra NOT FOUND.

// Input Format

// Dòng 1 là N

// Dòng 2 gồm N phần tử trong mảng A[]

// Constraints

// 1<=N<=10^6

// 0<=abs(A[i])<=10^6

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 15
// -4 1 2 -1 2 -3 -8 2 1 -2 -8 7 -5 2 8 
// Sample Output 0

// -4 1 2 -1 2 
// Sample Input 1

// 18
// -9 5 7 -6 7 0 -9 5 4 -9 -5 2 -3 8 6 -3 7 6 
// Sample Output 1

// -9 5 7 -6 7 0 -9 5 4 -9 -5 2 -3 8 6 -3 


#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    #ifndef K
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n+1]; int cnt = -1;
    a[0] = 0;
    map<ll, int> mX;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        a[i] = x;
    }
    int start = 0;
    ll sum = 0;
    for(int i = 0; i <= n; i++){
        sum += a[i];
        if(mX.count(sum)){
            int len = i - mX[sum];
            if(len > cnt){
                start = mX[sum]+1;
                cnt = len;
            }
        }
        if(mX.count(sum) == 0){
            mX[sum] = i;
        }
    }
    if(cnt == -1){
        cout << "NOT FOUND";
    } else {
        for(int i = start; i < start + cnt; i++){
            cout << a[i] << " ";
        }
    }
    
    
    return 0;
}