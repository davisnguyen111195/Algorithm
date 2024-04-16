// [Đệ Quy]. Bài 17. In ra số nguyên
// Cho một số nguyên không âm N, hãy in ra N theo thứ tự các chữ số từ trái qua phải và từ phải qua trái. Chú ý phải sử dụng hàm đệ quy cho cả 2 yêu cầu.

// Input Format

// Số nguyên không âm N.

// Constraints

// 0≤n≤10^18

// Output Format

// Dòng đầu tiên in ra các chữ số của n theo thứ tự từ trái qua phải. Dòng thứ hai in ra các chữ số của n theo thứ tự từ phải qua trái. Các chữ số được viết cách nhau một dấu cách.

// Sample Input 0

// 21218
// Sample Output 0

// 2 1 2 1 8 
// 8 1 2 1 2 

#include <iostream>
#define ll long long
using namespace std;

void printRTL(ll n){
    if(n <= 9){
        cout << n << " ";
    }  else {
        cout << n % 10 << " ";
        printRTL(n/10);
    }
}

void printLTR(ll n){
    if(n <= 9){
        cout << n << " ";
    } else {
        printLTR(n / 10);
        cout << n % 10 << " ";
    }
}

int main(){

    ll n; cin >> n;
    printLTR(n);
    cout << endl;
    printRTL(n);
    return 0;
}
