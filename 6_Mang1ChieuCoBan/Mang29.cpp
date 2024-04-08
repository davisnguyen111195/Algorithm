// [Mảng 1 chiều cơ bản]. Bài 29. Mảng đánh dấu 4
// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy số có giá trị nhỏ nhất

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

// Constraints

// 1<=N<=1000; 0<=A[i]<=10^6;

// Output Format

// In ra giá trị có số lần xuất hiện nhiều nhất kèm theo tần suất của nó

// Sample Input 0

// 5
// 9 4 0 4 5 
// Sample Output 0

// 4 2
// Sample Input 1

// 5
// 1 3 7 7 5 
// Sample Output 1

// 7 2
// Sample Input 2

// 5
// 1 2 3 4 5
// Sample Output 2

// 1 1

#include <iostream>

using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    int b[1000007] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
    }

    int maxA = -1;
    for(int k = 0; k < n; k++){
        maxA = max(maxA, b[a[k]]);
    }
    int minN = 1e6+7;
    for(int m = 0; m < n; m++){
        if(b[a[m]] == maxA){
            minN = min(minN, a[m]);
        }
    }

    cout << minN << " " << b[minN];
    return 0;
}