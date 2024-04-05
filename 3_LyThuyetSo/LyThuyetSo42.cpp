// [Hàm, Lý Thuyết Số]. Bài 42. Hai con mã
// Đếm số cách đặt 2 con mã trên bàn cờ vua cỡ k × k với k = 1, 2, 3, .. n sao cho chúng không ăn nhau, 2 con mã này được coi là giống nhau.

// Input Format

// Số nguyên dương n duy nhất

// Constraints

// 1≤n≤10000

// Output Format

// Gồm n dòng, mỗi dòng là đáp án của bài toán.

// Sample Input 0

// 7
// Sample Output 0

// 0
// 6
// 28
// 96
// 252
// 550
// 1056
// Explanation 0

// Giải thích : với bàn cờ cỡ 1 x 1, không có cách nào. Với bàn cờ cỡ 2x2 có 6 cách đặt 2 con mã sao cho chúng không ăn nhau. Tương tự với các cỡ từ 3 tới 7.

#include <iostream>
using namespace std;

int chinhhop(int k, int n){
    return n * (n - 1) / k;
}

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        long long k = i;
        long long x = (k-1) * (k-2) * 2 * 2;
        cout << (k*k)*(k*k-1)/2 - x << "\n";
    }
}