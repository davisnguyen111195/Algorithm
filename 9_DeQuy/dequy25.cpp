// [Đệ Quy]. Bài 25. Binary search
// Cho một mảng số nguyên A gồm N phần tử đã được sắp xếp giảm dần, hãy viết hàm tìm kiếm nhị phân bằng đệ quy để kiểm tra xem phần tử X có nằm trong mảng hay không.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách. Dòng thứ 3 là số nguyên dương X.

// Constraints

// 1≤n≤1000; 1≤X,A[i]≤10^6

// Output Format

// In ra 1 nếu X xuất hiện trong mảng, ngược lại in ra 0.

// Sample Input 0

// 5
// 5 5 3 2 1
// 3
// Sample Output 0

// 1

#include <iostream>
#include <algorithm>
using namespace std;

bool findX(int a[], int l, int r, int x){
    if(r >= l){
        int k = l + (r - l) / 2;
        if(a[k] == x){
            return true;
        }

        if(a[k] > x){
            return findX(a, l, k - 1, x);
        } else {
            return findX(a, k + 1, r, x);
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int x; cin >> x;
    cout << findX(a, 0, n-1, x);
    return 0;
}