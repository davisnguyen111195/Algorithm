// [Mảng 1 chiều cơ bản]. Bài 38. Tổng dãy số
// Cho mảng A[] gồm N phần tử, bạn hãy tính tổng của 2 số liên tiếp, 3 số liên tiếp, 4 số liên tiếp trong mảng.

// Input Format

// Dòng 1 là N : số phần tử trong mảng

// Dòng 2 là N số trong mảng viết cách nhau 1 dấu cách

// Constraints

// 4<=N<=1000

// 0<=A[i]<=1000

// Output Format

// Dòng 1 in ra tổng 2 số liên tiếp trong mảng

// Dòng 2 in ra tổng 3 số liên tiếp trong mảng

// Dòng 3 in ra tổng 4 số liên tiếp trong mảng

// Sample Input 0

// 8
// 5 17 4 17 2 13 7 14 
// Sample Output 0

// 22 21 21 19 15 20 21 
// 26 38 23 32 22 34 
// 43 40 36 39 36 


#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int b[n];
    for(int i = 0; i < n-1; i++){
        b[i] = a[i] + a[i+1];
        cout << b[i] << " ";
    }
    cout << endl;

    int c[n-2];
    for(int i = 0; i < n-2; i++){
        c[i] = a[i] + a[i+1] + a[i+2];
        cout << c[i] << " ";
    }
    cout << endl;
    int d[n-3];
    for(int i = 0; i < n-3; i++){
        d[i] = a[i] + a[i+1] + a[i+2] + a[i+3];
        cout << d[i] << " ";
    }

    

    return 0;
}