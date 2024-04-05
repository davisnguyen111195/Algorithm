// [Hàm bổ sung]. Bài 8. Giai thừa
// Hãy tính giai thừa các số từ 1 tới N và chia dư cho 10^9 + 7

// Input Format

// Dòng duy nhất chưa số nguyên dương N

// Constraints

// 1<=N<=10^6

// Output Format

// In ra N dòng tương ứng với giai thừa các số từ 1 tới N sau khi chia dư

// Sample Input 0

// 5
// Sample Output 0

// 1
// 2
// 6
// 24
// 120

#include <iostream>

#define ll long long

using namespace std;

const ll _MOD = 1e9+7;

int tichChiaDu(int a, int b, ll _mod){
    return ((a%_mod)*(b%_mod))%_mod;
}

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int mul = 1;
        for(int j = 1; j <= i; j++){
            mul = tichChiaDu(mul, j, _MOD);
        }   
        cout << mul << endl;
        
    }
    return 0;
}