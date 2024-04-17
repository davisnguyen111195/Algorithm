// [QHD Basic]. Bài 5. Prime 2
// Cho 2 số nguyên L, R, hãy đếm xem trong đoạn từ L tới R có bao nhiêu số nguyên tố.

// Gợi ý :

// Bước 1 : Sàng số nguyên tố

// Bước 2 : Gọi F[i] là số các nguyên tố từ 0 tới i, khi đó số các số nguyên tố từ L tới R là F[R] - F[L - 1]

// Input Format

// Dòng 1 là số bộ test T

// T dòng tiếp theo mỗi dòng là 2 số nguyên không âm L, R

// Constraints

// 1<=T<=10000

// 0<=L<=R<=10^6

// Output Format

// Đưa ra kết quả của mỗi test trên 1 dòng

// Sample Input 0

// 5
// 3 19
// 4 65
// 4 44
// 1 17
// 1 7
// Sample Output 0

// 7
// 16
// 12
// 7
// 4

#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool f[1000006];
int fcnt[1000006];
void sang(void){
    f[0] = false;
    f[1] = false;
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
    fcnt[0] = 0;
    fcnt[1] = 0;
    for(int i = 2; i <= 1e6; i++){
        if(f[i]){
            fcnt[i] = fcnt[i-1] + 1;
        } else {
            fcnt[i] = fcnt[i-1];
        }
    }

    int t; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        cout << fcnt[r] - fcnt[l-1] << endl;
    }
    return 0;
}