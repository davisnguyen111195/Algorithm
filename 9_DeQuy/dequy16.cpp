// [Đệ Quy]. Bài 16. Chữ số lớn nhất và nhỏ nhất
// Cho một số nguyên không âm N, hãy in ra chữ số lớn nhất và chữ số nhỏ nhất của N. Viết 2 hàm đệ quy

// Input Format

// Số nguyên dương N

// Constraints

// 10≤n≤10^18

// Output Format

// Chữ số lớn nhất và nhỏ nhất của N.

// Sample Input 0

// 1256782
// Sample Output 0

// 8 1

#include <iostream>

typedef long long ll;

using namespace std;

ll maxInside(ll n){
    if(n == 0){
        return -1;
    } else {
        return max((n%10), maxInside(n/10));
    }
}
ll minInside(ll n){
    if(n == 0){
        return 10;
    } else {
        return min((n%10), minInside(n/10));
    }
}

int main(){
    ll n; cin >> n;
    cout << maxInside(n) << " " << minInside(n);
    return 0;
}