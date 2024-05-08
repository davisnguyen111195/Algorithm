// [Mảng 1 Chiều]. Bài 36. Mảng con tổng bằng 0
// Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là kiểm tra xem có tồn tại mảng con có tổng bằng 0 hay không, nếu tồn tại mảng con như vậy bạn in ra 1. Nếu không tồn tại dãy con có tổng bằng 0 thì in ra -1.

// Input Format

// Dòng thứ nhất gồm N; Dòng thứ 2 gồm các phần tử trong mảng A[];

// Constraints

// 1<=K<=N<=10^6; -10^6<=A[i]<=10^6;

// Output Format

// In ra đáp án của bài toán.

// Sample Input 0

// 12
// -2 0 3 -3 4 3 -2 1 1 0 3 4 
// Sample Output 0

// 1

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n+1]; a[0] = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        a[i] = a[i-1] + x;
        if(a[i] == 0){
            cout << 1;
            return 0;
        }
    }
    map<int, int> mX;
    for(int i = 0; i <= n; i++){
        
        if(mX.count(a[i])){
            cout << 1;
            return 0;
        }
        
        if(mX.count(a[i]) == 0){
            mX[a[i]]++;
        }
    } 
    cout << -1;
    return 0;
}