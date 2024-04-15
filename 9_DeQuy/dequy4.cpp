// [Đệ Quy]. Bài 4. Tính tổng 4
// Tính tổng hàm S(n) = -1 + 2 -3 + 4 - 5 + 6 + ... + (-1)^n * n bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức Nếu N chẵn thì S(n) = n / 2, còn nếu N lẻ thì S(n) = (n - 1) / 2 - n

// Input Format

// Số nguyên dương n.

// Constraints

// 1≤n≤10^3; Chú ý các bạn phải code bằng đệ quy nhé.

// Output Format

// In ra kết quả của S(n)

// Sample Input 0

// 919
// Sample Output 0

// -460


#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
ll s(int n){
    if(n == 1){
        return -1;
    } else {
        return (pow((-1), n) * n) + s(n-1);
    }
}
int main(){
    int n; cin >> n;
    cout << s(n);

    return 0;
}