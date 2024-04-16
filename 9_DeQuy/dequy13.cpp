// [Đệ Quy]. Bài 13. Tính tổng chữ số sử dụng đệ quy
// Cho một số nguyên không âm N, hãy tính tổng chữ số của N sử dụng kỹ thuật đệ quy.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// Tổng các chữ số của N

// Sample Input 0

// 123456789
// Sample Output 0

// 45

#include <iostream>
using ll = long long;
using namespace std;

int sumNum(ll n){
    if(n == 0){
        return 0;
    } else {
        return (n%10) + sumNum(n/10);
    }
}

int main(){
    ll n; cin >> n;
    cout << sumNum(n);
    return 0;
}