// [QHD Basic]. Bài 4. Prime 1
// Cho số nguyên dương N, hãy đếm xem trong đoạn từ 0 tới N có bao nhiêu số nguyên tố. Hướng dẫn :

// Bước 1 : Sàng số nguyên tố

// Bước 2 : Gọi F[i] là số lượng các số nguyên tố từ 0 tới i, xây dựng mảng F[i] sau khi sàng

// Input Format

// Dòng 1 là số bộ test T

// T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

// Constraints

// 1<=T<=10000

// 0<=N<=10^6

// Output Format

// Đưa ra kết quả của mỗi test trên 1 dòng

// Sample Input 0

// 5
// 39
// 68
// 26
// 87
// 6
// Sample Output 0

// 12
// 19
// 9
// 23
// 3
#include <bits/stdc++.h>

using namespace std;

bool f[1000002];
int fcnt[1000002];
void sang(){
    f[0] = false;
    f[1] = false;
    for(int i = 2; i <= 1000000; i++){
        f[i] = true;
    }
    for(int i = 2; i <= sqrt(1000000); i++){
        if(f[i] == true){
            for(int j = i*i; j <= 1000000; j+=i){
                f[j] = false;
            }
        }
    }
}


int main(){
    sang();

    
    for(int i = 2; i <= 1000000; i++){
        if(f[i]){
            int cnt = 0;
            for(int j = i; j <= 1000000; j++){
                if(f[j]){
                    cnt++;
                }
            }
            fcnt[i] = cnt;
        }
    }
    int t; cin >> t;

    while(t--){
        int x; cin >> x;

        cout << fcnt[x] << endl;
    }
    return 0;
}