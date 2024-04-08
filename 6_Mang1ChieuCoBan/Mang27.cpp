// [Mảng 1 chiều cơ bản]. Bài 27. Mảng đánh dấu 2
// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự từ nhỏ đến lớn kèm theo tần suất của nó

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

// Constraints

// 1<=N<=1000; 0<=A[i]<=10^6;

// Output Format

// In ra nhiều dòng, mỗi dòng gồm giá trị và tần suất viết cách nhau một khoảng trắng

// Sample Input 0

// 6
// 6 6 4 6 0 8 
// Sample Output 0

// 0 1
// 4 1
// 6 3
// 8 1

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n; int a[n];
    int range = 1e6 + 7;
    int b[range] = {0};
    int maxA = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
        maxA = max(maxA, a[i]);
    }
    for(int k = 0; k <= maxA; k++){
        if(b[k] > 0){
            cout << k << " " << b[k] << endl;
        }
    }

    return 0;
}