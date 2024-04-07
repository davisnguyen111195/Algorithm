// [Mảng 1 chiều cơ bản]. Bài 14. Tìm gcd của mọi phần tử trong mảng
// Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất mà mọi số trong mảng đều chia hết cho số đó.

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^6; 0<=A[i]<=10^6

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 12
// 994626 994448 996097 995790 999692 993222 991401 999038 997163 990016 993004 990549 
// Sample Output 0

// 1

#include <iostream>
using namespace std;
int gcd(int a, int b){
    while(b){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main(){
    int n; cin >> n; int t[n];
    int gcdX = 1e6;
    for(int i = 0; i < n; i++){
        cin >> t[i];
        gcdX = gcd(gcdX, t[i]);
    }

    cout << gcdX;
    return 0;
}