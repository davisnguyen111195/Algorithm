// [Mảng 1 chiều cơ bản]. Bài 43. Tổng của mọi dãy con
// Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là tính tổng của mọi dãy con trong mảng, ví dụ mảng A[] = {1, 2, 3, 4} bạn phải tính tổng của các dãy con : {1}, {1, 2}, {1, 2, 3}, {1, 2, 3, 4}, {2}, {2, 3}, {2, 3, 4}, {3}, {3, 4}, {4}

// Input Format

// Dòng 1 là N : số phần tử trong mảngg

// Dòng 2 là N phần tử cách nhau 1 khoảng trắng

// Constraints

// 1<=N<=1000

// 0<=A[i]<=1000

// Output Format

// In ra tổng của các dãy con trong mảng

// Sample Input 0

// 6
// 6 0 3 7 9 5 
// Sample Output 0

// 6 6 9 16 25 30 0 3 10 19 24 3 10 19 24 7 16 21 9 14 5 

#include <iostream>

using namespace std;
int sumRange(int a[], int b, int c){
    int sum = 0;
    for(int i = b; i <= c; i++){
        sum += a[i];
    }
    return sum;
}
int main(){
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = sumRange(a, i, j);
            cout << sum << " ";
        }
    }
    return 0;
}