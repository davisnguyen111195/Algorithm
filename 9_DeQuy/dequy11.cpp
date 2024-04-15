// [Đệ Quy]. Bài 11. Chuyển hệ thập phân sang hệ nhị phân
// Cho một số nguyên không âm N, hãy in ra dạng biểu diễn nhị phân của số N.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// Biểu diễn nhị phân của số nguyên N.

// Sample Input 0

// 8
// Sample Output 0

// 1000

#include <iostream>
#define ll long long
using namespace std;

void convert(ll n){
    if(n < 2){
        cout << n;
    } else{ 
        convert(n/2);
        cout << n % 2;
    }
}

int main(){
    ll n; cin >> n;
    convert(n);
    return 0;
}