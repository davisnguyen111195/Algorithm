// [Đệ Quy]. Bài 7. Tính tổ hợp chập K của N
// Cho 2 số nguyên dương N và K. Hãy tính tổ hợp chập K của N. Tiện thể các bạn ôn lại một vài tính chất của tổ hợp chập K của N nhé.

// image

// Input Format

// 2 số nguyên dương N và K.

// Constraints

// 0≤k≤n≤10.

// Output Format

// Kết quả của tổ hợp chập K của N.

// Sample Input 0

// 10 2
// Sample Output 0

// 45

#include <iostream>

#define ll long long

using namespace std;

ll giaiThua(int n){
    if(n <= 1){
        return 1;
    } else {
        return n*giaiThua(n-1);
    }
}


ll C(int k, int n){
    if(k == 0 || k == n){
        return 1;
    } else if(k == 1){
        return n;
    } else {
        return C(k-1, n-1) + C(k, n-1);
    }
}

int main(){
    int n, k; cin >> n >> k;
    cout << C(k, n);
    return 0;
}