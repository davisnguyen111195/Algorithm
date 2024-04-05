// [Hàm, Lý Thuyết Số]. Fibonacci 3
// Nhiệm vụ của bạn là hãy tìm số thuộc dãy số Fibonacci nhỏ nhất lớn hơn hoặc bằng số N đã cho. Biết một số đầu tiên trong dãy Fibonacci là : 1, 1, 2, 3, 5, 8, 13....

// Input Format

// Dòng duy nhất chứa số nguyên dương N

// Constraints

// 1<=N<=10^18

// Output Format

// In ra số Fibonacci nhỏ nhất lớn hơn hoặc bằng N

// Sample Input 0

// 12
// Sample Output 0

// 13

#include <iostream>

#define ll long long
using namespace std;
ll f[100];

void fiboGenerator(void){
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 92; i++){
        f[i] = f[i-1] + f[i-2];
    }
}


int main() {
    ll n; cin >> n;
    fiboGenerator();
    for(int i = 0; i <= 92; i++){
        if(f[i] >= n){
            cout << f[i];
            return 0;
        }
    }

    return 0;

}