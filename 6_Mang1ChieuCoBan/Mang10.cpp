// [Mảng 1 chiều cơ bản]. Bài 10. Cân bằng nguyên tố
// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các chỉ số i trong mảng thỏa mãn : Tổng các phần tử bên trái i và tổng các phần tử bên phải i là các số nguyên tố

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;

// Constraints

// 1<=N<=1000; 0<=A[i], X<=10^3;

// Output Format

// In ra các chỉ số thỏa mãn trên một dòng, các số cách nhau một khoảng trắng

// Sample Input 0

// 5
// 53 5 69 47 19 
// Sample Output 0

// 3 

#include <iostream>

using namespace std;
bool primeChecker(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {

    int n; cin >> n;
    int t[n];
    for(int i = 0; i < n; i++){
        cin >>  t[i];
    }

    for(int j = 1; j < n; j++){
        int sumLeft = 0;
        int sumRight = 0;
        for(int k = 0; k < j; k++){
            sumLeft += t[k];
        }

        for(int l = j+1; l < n; l++){
            sumRight += t[l];
        }

        if(primeChecker(sumLeft) && primeChecker(sumRight)){
            cout << j << " ";
        }
    }
    return 0;
}