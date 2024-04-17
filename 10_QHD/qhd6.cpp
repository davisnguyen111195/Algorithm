// [QHD Basic]. Bài 6. Prime 3
// Cho số nguyên dương N, hãy tính tích các số nguyên tố trong đoạn từ 0 đến N. Khi N = 0 hoặc 1 thì đáp án là 0.

// Input Format

// Dòng 1 là số bộ test T

// T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

// Constraints

// 1<=T<=10000

// 0<=N<=10^6

// Output Format

// Đưa ra kết quả của mỗi test trên 1 dòng, vì kết quả quá lớn nên hãy chia dư cho 10^9 + 7.

// Sample Input 0

// 5
// 20
// 16
// 10
// 22
// 29
// Sample Output 0

// 9699690
// 30030
// 210
// 9699690
// 469693188

#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool f[1000006];
ll fx[1000006];
const ll mod = 1e9+7;
void sang(void){
    f[0] = 0;
    f[1] = 0;
    for(int i = 2; i <= 1e6; i++){
        f[i] = true;
    }

    for(int i = 2; i <= 1e3; i++){
        if(f[i]){
            for(int j = i*i; j <= 1e6; j+=i){
                f[j] = false;
            }
        }
    }
    
}

int main(){
    sang();
    fx[0] = 0;
    fx[1] = 0;
    fx[2] = 2;
    for(int i = 3; i <= 1e6; i++){
        if(f[i]){
            fx[i] = (fx[i-1]%mod * i%mod) % mod;
        } else {
            fx[i] = fx[i-1];
        }
    }

    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        cout << fx[x] << endl;
    }
    return 0;
}