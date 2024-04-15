// [Đệ Quy]. Bài 6. Số fibonacci
// Dãy số fibonacci là dãy số thỏa mãn : F1=0, F2=1, Fn=Fn-1+Fn-2. Hãy tìm số Fibonacci thứ n sử dụng đệ quy. Độ phức tạp của code đệ quy là O(1.618^n) không thể áp dụng được với n lớn.

// Input Format

// Số nguyên dương n.

// Constraints

// 1≤n≤15;

// Output Format

// In ra số Fibonacci thứ n.

// Sample Input 0

// 1
// Sample Output 0

// 0

#include <iostream>

#define ll long long

using namespace std;

ll fibo(int n){
    if(n == 1){
        return 0;
    } else if(n == 2){
        return 1;
        
    } else {
        return fibo(n-1) + fibo(n-2);
    }
}

int main(){
    int n; cin >> n;
    cout << fibo(n);
    return 0;
}