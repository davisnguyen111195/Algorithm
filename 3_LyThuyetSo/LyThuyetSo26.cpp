// [Hàm, Lý Thuyết Số]. Bài 26. Số Hoàn Hảo
// Số hoàn hảo là số có tổng các ước thực sự (Không tính chính nó) bằng chính số đó. 
// Cho một số nguyên dương n, kiểm tra xem n có phải là số hoàn hảo hay không.
// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤9*10^18

// Output Format

// In YES nếu N là số hoàn hảo, ngược lại in NO

// Sample Input 0

// 28
// Sample Output 0

// YES
#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

bool primeCheck(ll n){
    if(n < 2) {
        return false;
    }

    for(auto i = 2; i <= sqrt(n); i++){
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
bool perfectNumberCheck(ll n){
    
    for(int i = 1; i <= 33; i++){
        if(primeCheck(i)){
            ll check1 = pow(2, i) - 1;
            if(primeCheck(check1)){
                ll check2 = pow(2, i - 1);
                if(check1 * check2 == n){
                    return true;
                }
            }
        }
    }
    return false;
}


int main(){
    ll n; cin >> n;
    if(perfectNumberCheck(n)){
        cout << "YES";

    } else {
        cout << "NO";
    }
    return 0;
}