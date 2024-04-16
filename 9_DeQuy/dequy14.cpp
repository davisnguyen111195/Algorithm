// [Đệ Quy]. Bài 14. Đếm số lượng chữ số của N sử dụng đệ quy.
// Cho một số nguyên không âm N, hãy đếm số lượng chữ số của N.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// Số lượng chữ số của N.

// Sample Input 0

// 123452
// Sample Output 0

// 6

#include <iostream>

typedef long long ll;

using namespace std;

int countNum(ll n){
    if(n <= 9){
        return 1;
    } else {
        if(n == 0){
            return 0;
        } else {
            return 1 + countNum(n / 10);
        }
    }
}

int main(){
    ll n; cin >> n;
    cout << countNum(n);
}
