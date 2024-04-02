// [Hàm, Lý Thuyết Số]. Bài 20. Số Chính Phương
// Kiểm tra một số nguyên có phải là số chính phương hay không? 
// Input Format

// Một số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// In ra YES nếu N là số chính phương, ngược lại in NO

// Sample Input 0

// 169
// Sample Output 0

// YES

#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

bool checkSquareNumber(ll n){
    ll check = sqrt(n);
    if(check * check == n){
        return false;
    }
    return true;
}
int main() {
    ll n; cin >> n;
    if(checkSquareNumber(n)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}