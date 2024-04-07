// [Mảng 1 chiều cơ bản]. Bài 16. Liệt kê
// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm số lượng các phần tử thỏa mãn các yêu cầu sau

// Số lượng số nguyên tố trong dãy
// Số lượng số thuận nghịch trong dãy
// Số lượng số chính phương trong dãy
// Số lượng số có tổng chữ số của nó là số nguyên tố.
// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=100; 0<=A[i]<=10000;

// Output Format

// In ra 4 dòng số lượng số tương ứng với 4 yêu cầu trên

// Sample Input 0

// 6
// 4 1682 5972 6331 9872 3956 
// Sample Output 0

// 0
// 1
// 1
// 4


#include <iostream>
#include <cmath>
using namespace std;
bool primeChecker(int n){
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

bool tnChecker(int n) {
    int sum = 0;
    int tmp = n;
    while(n != 0){
        sum = sum*10 + n%10; 
        n /= 10;
    }
    if(tmp == sum){
        return true;
    } else {
        return false;
    }
}
bool cpChecker(int n){
    int sqrtN = sqrt(n);
    if(sqrtN * sqrtN == n){
        return true;
    } else {
        return false;
    }
}

int sumNumber(int n){
    int sum = 0;
    while(n != 0){
        sum = sum + n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n; cin >> n; int t[n];
    int sNT = 0;
    int sTN = 0;
    int sCP = 0;
    int sTNT = 0;
    for(int i = 0; i < n; i++){
        cin >> t[i];
        if(primeChecker(t[i])){
            sNT++;
        }
        if(tnChecker(t[i])){
            sTN++;
        }
        if(cpChecker(t[i])){
            sCP++;
        }
        int sumNumberT = sumNumber(t[i]);
        if(primeChecker(sumNumberT)){
            sTNT++;
        }

    }

    cout << sNT << endl << sTN << endl << sCP << endl << sTNT;

    return 0;
}