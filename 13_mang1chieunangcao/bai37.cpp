// [Mảng 1 Chiều]. Bài 38. Prime in range
// Cho Q truy vấn, mỗi truy vấn yêu cầu bạn in ra số lượng số nguyên tố từ L tới R. (Đừng duyệt từ L tới R rồi đếm nhé)

// Input Format

// Dòng đầu tiên là Q; Q dòng tiếp theo mỗi dòng là 2 số L, R

// Constraints

// 1<=Q<=10^4; 1<=L,R<=10^6;

// Output Format

// Với mỗi truy vấn in ra số lượng số nguyên tố trong đoạn [L, R]

// Sample Input 0

// 9
// 3 17
// 1 11
// 2 18
// 1 15
// 4 15
// 4 18
// 4 17
// 2 12
// 4 20
// Sample Output 0

// 6
// 5
// 7
// 6
// 4
// 5
// 5
// 5
// 6
#include <bits/stdc++.h>

using namespace std;
const int q = 1e7+7;
bool a[q];
int b[q];
void sang(void){
    a[0] = false;
    a[1] = false;
    for(int i = 2; i < q; i++){
        a[i] = true;
    }
    for(int i = 2; i*i < q; i++){
        if(a[i] == true){
            for(int j = i*i; j < q; j+=i){
                a[j] = false;
            }
            
        } 
        //cout << b[i] << endl;
    }
}
int main(){
    #ifndef K
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    sang();

    for(int i = 1; i <= q; i++){
        b[i] = b[i-1] + a[i];
    }
    int j; cin >> j;
    while(j--){
        int l, r; cin >> l >> r;
        int cnt = b[r] - b[l-1];

        cout << cnt << endl;
    }
    return 0;
}