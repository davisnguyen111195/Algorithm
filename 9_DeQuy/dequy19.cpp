// [Đệ Quy]. Bài 19. Kiểm tra chữ số chẵn.
// Cho số nguyên không âm N, hãy kiểm tra xem tất cả các chữ số của N có phải đều là số chẵn hay không?

// Input Format

// Số nguyên không âm N.

// Constraints

// 0≤n≤10^18

// Output Format

// In ra YES nếu n toàn chữ số chẵn, ngược lại in ra NO.

// Sample Input 0

// 2280820
// Sample Output 0

// YES

#include <iostream>
#define ll long long

using namespace std;

bool checkEven(ll n){
    if(n <= 9){
        if(n % 2 == 0){
            return true;
        } else {
            return false;
        }
    } else {
        return checkEven(n%10) * checkEven(n/10);
    }
}


int main(){
    ll n; cin >> n;
    if(checkEven(n)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}