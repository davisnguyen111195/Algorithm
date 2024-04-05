// [Hàm bổ sung]. Bài 2. Thừa số nguyên tố số mũ lớn nhất
// Bạn hãy tìm thừa số nguyên tố có số mũ lớn nhất của số nguyên N, nếu có nhiều thừa số nguyên tố có cùng số mũ lớn nhất hãy chọn số nhỏ hơn. Ví dụ N = 60 = 2^2 * 3^1 * 5^1 thì đáp án sẽ là 2.

// Input Format

// Dòng duy nhất chứa số nguyên dương N
// Constraints

// 2<=N<=10^12

// Output Format

// In ra thừa số nguyên tố kèm với số mũ

// Sample Input 0

// 88
// Sample Output 0

// 2 3
#include <iostream>
#include <cmath>

#define ll long long

using namespace std;


int ptsnt(ll n){
    int counter2 = 0;
    int counter = 0;
    for(ll i = 2; i * i <= n; i++){
        counter = 0;
        while(n % i == 0){
            counter++;
            n /= i;
        }
        counter2 = max(counter, counter2);
    }
    return counter2;
}

int main() {
    ll n; cin >> n;
    int maxU = ptsnt(n);
    int counter;
    for(ll i = 2; i*i <= n; i++){
        counter = 0;
        if(n % i == 0){
            while(n % i == 0){
                counter++;
                n /= i;
            }
            if(counter == maxU){
                cout << i << " " << maxU;
                return 0;
            } else {
                continue;
            }
        }
    }
    return 0;
}