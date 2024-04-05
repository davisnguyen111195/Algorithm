// [Hàm, Lý Thuyết Số]. Bài 25. Số có số lượng ước là số lẻ
// Kiểm tra xem một số có số lượng ước số của nó là số lẻ

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// In ra YES nếu N là số có số ước là số lẻ, ngược lại in NO.

// Sample Input 0

// 100
// Sample Output 0

// YES
// Explanation 0

// Số 100 có các ước 1, 2, 4, 5, 10, 20, 25, 50, 100. Vậy 100 có 9 ước là số lẻ, nên đáp án là YES.

//Chinh la dac diem cua so chinh phuong co tong cac uoc la so le
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool checkSquareNumber(ll n){
    int check = sqrt(n);
    if(1ll*check*check == n){
        return true;
    }
    return false;
}
int main(){
    ll n; cin >> n;
    if(checkSquareNumber(n)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}