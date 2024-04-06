// [Mảng 1 chiều cơ bản]. Bài 2. Trung bình cộng nguyên tố
// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là tính trung bình cộng của các số là số nguyên tố trong dãy. Dữ liệu đảm bảo có ít nhất 1 phần tử là số nguyên tố trong dãy.

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

// Constraints

// 1<=N<=1000; -10^3<=A[i]<=10^3;

// Output Format

// In ra đáp án của bài toán lấy 3 số sau dấu phẩy.

// Sample Input 0

// 5
// -911 234 151 347 231 
// Sample Output 0

// 249.000
// Sample Input 1

// 3 
// 1 2 5
// Sample Output 1

// 3.500
#include <iostream>
#include <iomanip>
using namespace std;
bool primeChecker(int n){
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int n; cin >> n;
    int t[n];
    int counter = 0;
    int tbc = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        t[i] = x;
        if(primeChecker(t[i])){
            counter++;
            tbc += t[i];
        }
    }
    cout << fixed << setprecision(3) << (float)tbc/counter;
    return 0;
}