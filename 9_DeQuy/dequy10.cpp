// [Đệ Quy]. Bài 10. Tính tổng 5
// Tính tổng S(n) = 1/1 + 1/2 + 1/3 + ... + 1/n bằng đệ quy.

// Input Format

// Số nguyên dương n.

// Constraints

// 1≤n≤1000;

// Output Format

// In ra S(n) lấy 3 số sau dấu phẩy.

// Sample Input 0

// 18
// Sample Output 0

// 3.495

#include <iostream>
#include <iomanip>
using namespace std;

double s(int n){
    if(n == 1){
        return 1;
    } else {
        return (double)(1.0/n) + s(n-1);
    }
}

int main(){
    int n; cin >> n;
    cout << fixed << setprecision(3) << s(n);
    return 0;
}