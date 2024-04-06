// [Mảng 1 chiều cơ bản]. Bài 11. Liệt kê và đếm số fibonacci.
// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^6; 0<=A[i]<=10^18

// Output Format

// In ra các số là số Fibonacci trong dãy theo thứ tự xuất hiện. Nếu trong mảng không tồn tại số Fibonacci nào thì in ra "NONE".

// Sample Input 0

// 6
// 1597 25358 7318 5878 0 2634 
// Sample Output 0

// 1597 0 

#include <iostream>

#define ll long long

using namespace  std;

int main() {

    ll fibo[100];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 92; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    int n; cin >> n; 
    while(n--){
        ll x; cin >> x;
        if(x == 0 || x == 1) {
            cout << x << " ";
            continue;
        }
        for(int j = 2; j <= 92; j++){
            if(x == fibo[j]){
                cout << x << " ";
                continue;
            }
        }
    }
    

    return 0;
}