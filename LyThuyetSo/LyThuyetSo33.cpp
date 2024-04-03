// [Hàm, Lý Thuyết Số]. Bài 33. Liệt kê chữ số nguyên tố
// Liệt kê số lần xuất hiện của chữ số nguyên tố của 1 số theo thứ tự từ nhỏ đến lớn

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^18

// Output Format

// Liệt kê các chữ số nguyên tố của n cùng số lần xuất hiện, theo thứ tự từ bé đến lớn. Sau đó cách ra 1 dòng và liệt kê các chữ số nguyên tố của n cùng số lần xuất hiện, nhưng theo thứ tự xuất hiện trong n. Xem thêm test case để rõ hơn.

// Sample Input 0

// 2273
// Sample Output 0

// 2 2
// 3 1
// 7 1

// 2 2
// 7 1
// 3 1

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
using ll = long long;

int d[10];
int _counter = 0;
void dem(ll n){
    while(n != 0){
        d[n%10]++;
        _counter++;
        n = n / 10;
    }
}

int main() {
    ll n; cin >> n;

    dem(n);    
    for(int i = 1; i < 10; i++){
        if(d[i]) 
        if((i == 2) || (i == 3) || (i == 5) || (i == 7)) {
            cout << i << " " << d[i] << endl;
        }
    }
    cout << endl;
    int cnt = _counter;
    ll check2 = -1;
    while(cnt--){
        ll check = n / (ll)pow(10, cnt);
        
        if(d[check]){
            if((check == 2) || (check == 3) || (check == 5) || (check ==7))

            cout << check << " " << d[check] << endl;
            //sau khi in check va d[check] cho d[check] = 0 tranh so trung lap.
            d[check] = 0;
        }
        n = n % (ll)(pow(10, cnt));
    }
    return 0;
}