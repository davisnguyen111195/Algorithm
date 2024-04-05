// [Hàm bổ sung]. Bài 5. Tam giác pascal bản dễ
// Cho chiều cao của tam giác pascal, bạn hãy in ra tam giác pascal tương ứng. Ví dụ tam giác pascal có chiều cao là 4 :

// 1

// 1 1

// 1 2 1

// 1 3 3 1

// Các bạn có thể tính toán các phần tử trên tam giác pascal bằng tổ hợp. Ví dụ tam giác pascal có chiều cao là 4 :

// C(0, 0)

// C(0, 1) C(1, 1)

// C(0, 2) C(1, 2) C(2, 2)

// C(0, 3) C(1, 3) C(2, 3) C(3, 3)

// Trong đó C(i, j) là tổ hợp chập j của i

// Input Format

// Chiều cao của tam giác

// Constraints

// Chiều cao không quá 12.

// Output Format

// In ra tam giác pascal

// Sample Input 0

// 6
// Sample Output 0

// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1 

#include <iostream>
#include <cmath>

#define ll long long

using namespace std;
ll gt(int n){
    ll s = 1;
    for(int i = 1; i <= n; i++){
        s *= i;
    }
    return s;
}
//tinh to hop chap k cua n phan tu  = n! / [k! * (n-k)!]
ll C(int k, int n){
    return gt(n) / (gt(k) * gt(n-k));
}

int main(){
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << C(j, i) << " ";
        }
        cout << "\n";
    }
    return 0;
}