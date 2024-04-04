// Bài 1. Số ước nguyên tố
// Bạn hãy đếm xem số N có bao nhiêu ước là số nguyên tố khác nhau. Gợi ý : Hãy đếm N có bao nhiêu thừa số nguyên tố khác nhau.

// Input Format

// Dòng duy nhất chứa số nguyên dương N

// Constraints

// 1<=N<=10^12

// Output Format

// In ra số lượng ước là số nguyên tố của N

// Sample Input 0

// 96
// Sample Output 0

// 2

#include <iostream>

#define ll long long
using namespace std;

int checkTSNT(ll n) {
    int counter = 0;
    ll tmp = n;
    for(ll i = 2; i*i <= n; i++){
        if(tmp % i == 0){
            while(tmp % i == 0){

                tmp /= i;
            }
            counter++;
        }
    }
    if(tmp > 1){
        counter++;
    }
    return counter;
}

int main(){
    ll n; cin >> n;
    cout << checkTSNT(n);
    return 0;
}