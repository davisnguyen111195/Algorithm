// [Hàm, Lý Thuyết Số]. Bài 28. Số Lộc Phát
// Một số được gọi là “lộc phát” nếu chỉ có các chữ số 0,6,8. Nhập vào một số nguyên hãy kiểm tra xem đó có phải số lộc phát hay không. Nếu đúng in ra 1, sai in ra 0.

// bool locphat(long long n){
    
// }

// int main(){
//     long long n; cin >> n;
//     if(locphat(n)){
//         cout << 1 << endl;
//     }
//     else{
//         cout << 0 << endl;
//     }
// }
// Input Format

// Số nguyên n

// Constraints

// 0≤n≤10^18

// Output Format

// In ra 1 nếu n là số lộc phát, ngược lại in 0

// Sample Input 0

// 60806
// Sample Output 0

// 1

#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

bool locPhatChecker(ll n){
    while(n != 0){
        int check = n % 10;
        if(check != 0 && check != 6 && check != 8){
            return false;
            break;
        }
        n = n /10;
    }
    return true;
}

int main() {
    ll n; cin >> n;
    if(locPhatChecker(n)){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}