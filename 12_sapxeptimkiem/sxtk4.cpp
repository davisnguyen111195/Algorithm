// [Sắp xếp - Tìm Kiếm]. Bài 4. Khoảng cách nhỏ nhất
// Cho mảng số nguyên A[] có N phần tử, tìm độ chênh lệch nhỏ nhất giữa 2 phần tử A[i] và A[j] trong mảng(i và j khác nhau).

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^6; 0<=A[i]<=10^9

// Output Format

// In ra độ lệch nhỏ nhất của 2 phần tử trong mảng

// Sample Input 0

// 5
// 1 2 7 9 0
// Sample Output 0

// 1
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int minX = 1e9+1;
    for(int i = 1; i < n; i++){
        minX = min(minX, abs(a[i] - a[i-1]));
    }

    cout << minX;
    return 0;
}