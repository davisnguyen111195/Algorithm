// [Hàm, Lý Thuyết Số]. Bài 22. Số Chính Phương 3
// Đếm số lượng các số chính phương trong đoạn từ a tới b

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a≤b≤10^18

// Output Format

// Số lượng số chính phương trong đoạn [a, b]

// Sample Input 0

// 1 1000000000
// Sample Output 0

// 31622

#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main(){
    ll a, b; cin >> a >> b;
    ll counter = 0;
    for(ll i = sqrt(a); i*i <= b; i++){
        if(i*i >= a && i*i <= b){
            counter++;
        }
    }
    cout << counter;
    return 0;
}