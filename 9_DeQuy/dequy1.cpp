// [Đệ Quy]. Bài 1. Tính tổng 1.
// Tính tổng hàm S(n) = 1 + 2 + 3 + 4 + .. + n bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = n * (n + 1) / 2

// Input Format

// Số nguyên dương n.

// Constraints

// 0≤n≤1000; Chú ý các bạn phải code bằng đệ quy nhé.

// Output Format

// In ra S(n).

// Sample Input 0

// 773
// Sample Output 0

// 299151

#include <iostream>
#include <stdio.h>

using namespace std;

int s(int n){
    if(n == 1){
        return 1;
    } else {
        return n + s(n-1);
    }
}


int main(){
    int n; cin >> n; 
    cout << s(n);
    return 0;
}