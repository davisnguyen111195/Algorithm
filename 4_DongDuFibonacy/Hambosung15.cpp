// [Hàm, Lý Thuyết Số]. Fibonacci 5
// Kiểm tra một số có phải là số Fibonacci hay không, bạn phải trả lời nhiều trường hợp trong bài toán này.

// Input Format

// Dòng đầu tiên là số lượng bộ test T; T dòng tiếp theo mỗi dòng là một số nguyên dương N;

// Constraints

// 1<=T<=100; 1<=N<=10^18

// Output Format

// Đối với mỗi test case in kết quả trên một dòng, nếu là số Fibonacci in YES, ngược lại in NO.

// Sample Input 0

// 5
// 89
// 754
// 399
// 34
// 661
// Sample Output 0

// YES
// NO
// NO
// YES
// NO

#include <iostream>
#define ll long long
using namespace std;

ll f[100];

void fiboGen(void){
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 92; i++){
        f[i] = f[i-1] + f[i-2];
        //cout << f[i] << " ";
    }
}

int main() {

    fiboGen();
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        for(int i = 0; i <= 92; i++){
            if(f[i] == n){
                cout << "YES" << endl;
                break;
            }
            if(f[i] > n){
                cout << "NO" << endl;
                break;
            }
        }
        
    }
    return 0;
}