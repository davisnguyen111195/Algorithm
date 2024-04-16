// [Đệ Quy]. Bài 12. Chuyển hệ thập phân sang hệ 16.
// Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// Biểu diễn hệ 16 của số nguyên N.

// Sample Input 0

// 995
// Sample Output 0

// 3E3

#include <iostream>
#define ll long long
using namespace std;

void convert(ll n){
    if(n < 16){
        if(n < 10){
            cout << n;
        } else {
            char c = 55 + n;
            cout << c;
        }
    } else {
        convert(n/16);
        int r = n % 16;
        if(r < 10){
            cout << r;
        } else {
            char d = 55 + r;
            cout << d;
        }
    }
}

int main(){
    ll n; cin >> n; 
    convert(n);
    return 0;
}