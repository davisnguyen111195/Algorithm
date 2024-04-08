// [Mảng 1 chiều cơ bản]. Bài 30. Mảng đánh dấu 5
// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy giá trị xuất hiện trước theo thứ tự trong mảng

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

// Constraints

// 1<=N<=1000; 0<=A[i]<=10^6;

// Output Format

// In ra giá trị có số lần xuất hiện nhiều nhất kèm theo tần suất của nó

// Sample Input 0

// 6
// 7 2 0 3 9 5 
// Sample Output 0

// 7 1
// Sample Input 1

// 4
// 1 2 2 1
// Sample Output 1

// 1 2

#include <iostream>

using namespace std;

int main(){
    int n; cin >> n; int a[n];
    int b[1000006] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
    }
    int maxXH = -1;
    for(int j = 0; j < n; j++){
        maxXH = max(maxXH, b[a[j]]);
    }
    for(int k = 0; k < n; k++){
        if(maxXH == b[a[k]]){
            cout << a[k] << " " << maxXH;
            return 0;
        }
    }
    return 0;
}