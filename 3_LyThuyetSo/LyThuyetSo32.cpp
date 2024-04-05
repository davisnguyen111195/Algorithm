// [Hàm, Lý Thuyết Số]. Bài 32. Thừa số nguyên tố thứ K
// Đưa ra số nguyên tố thứ k trong phân tích thừa số nguyên tố của một số nguyên dương n. Ví dụ n=28, k=3 ta có kết quả là 7 vì 28=2x2x7.

// Input Format

// 2 số n,k

// Constraints

// 1 ≤n,k≤10^9

// Output Format

// In ra thừa số nguyên tố thứ k của n, nếu n không có thừa số nguyên tố thứ k thì in ra -1.

// Sample Input 0

// 28 3
// Sample Output 0

// 7
// Sample Input 1

// 8 5
// Sample Output 1

// -1

#include <iostream>

using namespace std;
using ll = long long;



int main(){

    ll n, k; cin >> n >> k;
    ll counter = 0;
    for(auto i = 2; i*i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                n = n / i;
                counter++;
                if(counter == k){
                    cout << i;
                    return 0;
                }
            }
        }
    }
    if (n > 1){
        counter++;
    } 

    if(counter == k){
        cout << n;
    } else {
        cout << -1;
    }


    return 0;
}