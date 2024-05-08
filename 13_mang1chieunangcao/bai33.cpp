// Cho mảng A[] gồm N phần tử và số nguyên dương K, nhiệm vụ của bạn là tìm khoảng cách lớn nhất giữa 2 chỉ số i, j sao cho trị tuyệt đối của hiệu A[i] - A[j] bằng K.

// Input Format

// Dòng thứ nhất gồm N và K; Dòng thứ 2 gồm các phần tử trong mảng A[];

// Constraints

// 1<=K<=N<=10^6; -10^6<=A[i]<=10^6;

// Output Format

// In ra khoảng cách lớn nhất giữa i và j hoặc in ra -1 nếu không tồn tại cặp số như vậy.

// Sample Input 0

// 14 2
// 0 1 3 0 4 0 0 3 3 -4 1 0 -4 3 
// Sample Output 0

// 12
// Sample Input 1

// 14 10
// -2 3 1 -4 0 0 0 1 0 -4 3 3 -1 3 
// Sample Output 1

// -1

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n]; int cnt = -1;
    map<int, int> mX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        int x = a[i] - k; int y = a[i] + k;
        if(mX.count(x)){
            cnt = max(cnt, i - mX[x]);
        }
        if(mX.count(y)){
            cnt = max(cnt, i - mX[y]);
        }
        if(mX.count(a[i]) == 0){
            mX[a[i]] = i;
        }
    }

    

   
     
    cout << cnt;
    return 0;

}