// [Hàm, Lý Thuyết Số]. Bài 31. Phi hàm Euler
// Đếm số lượng các số nguyên tố cùng nhau với n không vượt quá n.

// Input Format

// Số nguyên duy nhất n

// Constraints

// 1≤n≤10^12

// Output Format

// Số lượng các số nằm trong đoạn từ 1 tới n mà nguyên tố cùng nhau với n.

// Sample Input 0

// 55
// Sample Output 0

// 40
// Sample Input 1

// 59
// Sample Output 1

// 58

#include <iostream>

using namespace std;
int phi(int n) {
    int res = n;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            res -= res / i;
        }
    }
    if (n != 1) {
        res -= res / n;
    }
    return res;
}

int eulerPhi(int n) { // = n (1-1/p1) ... (1-1/pn)
    if (n == 0) return 0;
    int ans = n;
    for (int x = 2; x*x <= n; ++x) {
        if (n % x == 0) {
            ans -= ans / x;
            while (n % x == 0) n /= x;
        }
    }
    if (n > 1) ans -= ans / n;
    return ans;
}

int main() {
    int n; cin >> n;

    cout << eulerPhi(n);
    return 0;
}