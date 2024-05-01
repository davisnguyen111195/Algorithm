// [Mảng 1 Chiều]. Bài 24. Vị trí đầu tiên và cuối cùng
// Cho dãy số A[] gồm có N phần tử và số nguyên X, hãy in ra vị trí xuất hiện đầu tiên và vị trí xuất hiện cuối cùng của X trong mảng, trong trường hợp X không xuất hiện trong mảng thi in ra -1.

// Input Format

// Dòng đầu tiên là số nguyên N và X. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 10^6; 1 ≤ A[i], X ≤ 10^9;

// Output Format

// In ra kết quả của bài toán.

// Sample Input 0

// 10 5
// 1 2 3 4 5 6 7 5 2 8
// Sample Output 0

// 5 8
// Sample Input 1

// 10 9
// 1 2 3 5 6 7 8 2 1 21
// Sample Output 1

// -1 -1

#include <bits/stdc++.h>

using namespace std;
int firstPos(int a[], int l, int r, int x){
    int res = -1; 
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            res = mid;
            r = mid - 1;
        } else if(a[mid] > x){
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}
int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n, x; cin >> n >> x;
    int a[n];
    map<int, int> mX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << firstPos(a, 0, n-1, x);

    return 0;
}