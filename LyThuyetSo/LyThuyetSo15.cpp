//[Hàm, Lý Thuyết Số]. Bài 15. Số Sphenic
// Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau. Ví dụ N=30 là số Sphenic vì 30 = 2×3×5; N = 60 không phải số Sphenic vì 60 = 2×2×3×5. Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Sphenic hay không?

// Input Format

// Một số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// Đưa ra 1 hoặc 0 tương ứng với N là số Sphenic hoặc không.

// Sample Input 0

// 999923001838986077
// Sample Output 0

// 1
// Sample Input 1

// 30
// Sample Output 1

// 1
#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

bool checkSphenic(ll n){
    int count = 0;

    for(ll i = 2; i <= sqrt(n); i++) {
        if(n % i == 0){
            count++;
            n = n / i;
            //neu sau khi chia cho i, neu n tiep tuc chia het cho i thi tra ve false luon vi so 
            //so sphenic la tich cua 3 so co bac bang 1.
            if(n % i == 0) {
                return false;
            }
        }
    }
    //neu n > 1 tuc la van con so nguyen to cuoi cung.
    if(n > 1) {
        count++;
    }

    if(count == 3){
        return true;
    } else {
        return false;
    }
}


int main(){
    ll n; cin >> n;
    cout << checkSphenic(n);
    return 0;
}