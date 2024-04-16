// [Đệ Quy]. Bài 22. In mảng.
// Cho một mảng số nguyên A gồm N phần tử, hãy in ra mảng theo thứ tự từ trái qua phải và từ phải qua trái bằng đệ quy.

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

// Constraints

// 1≤n≤1000; 1≤A[i]≤10^6

// Output Format

// Dòng đầu tiên in ra các phần tử trong mảng theo chiều từ trái qua phải. Dòng thứ 2 in ra các phần tử trong mảng theo chiều từ phải qua trái.

// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// 1 2 3 4 5
// 5 4 3 2 1

#include <iostream>
using namespace std;

void ltr(int a[], int l, int r){
    if(l == r){
        cout << a[l] << " ";
    } else {
       cout << a[r] << " ";
       ltr(a, 0, r-1);
    }
}

void rtl(int a[], int l, int r){
    if(l == r){
        cout << a[l] << " ";
    } else {
        rtl(a, 0, r-1);
        cout << a[r] << " ";

    }
}


int main(){
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    rtl(a, 0, n-1);
    cout << endl;
    ltr(a, 0, n-1);
    return 0;
}