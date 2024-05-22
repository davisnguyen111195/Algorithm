// [Xâu Ký Tự]. Bài 47. UCLN
// Cho ba số a, x, y.

// Nhiệm vụ của bạn là tìm ước số chung lớn nhất của hai số P và Q, trong đó P lặp lại x lần số a và Q lặp lại y lần số a.

// Ví dụ : a = 2, x = 3, y = 2 thì P=222, Q=22. Khi đó UCLN(P, Q) = 2

// Đầu vào
// Dòng đầu tiên là số a.

// Dòng số 2 là số x.

// Dòng số 3 là số y.

// Giới hạn
// 1<=a,x,y<=10^18

// Đầu ra
// In ra đáp án của bài toán

// Ví dụ :
// Input 01
// Copy
// 4
// 10
// 8
// Output 01
// Copy
// 44
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int main(){
    long long a, x, y;
    cin >> a >> x >> y;
    long long gcdXY = gcd(x, y);
    while(gcdXY--){
        cout << a;
    }
    return 0;
}
