// [Xâu Ký Tự]. Bài 40. Số nhị phân chia hết cho 5
// Cho số nhị phân N, hãy kiểm tra xem N có chia hết cho 5 hay không.

// Gợi ý : Chuyển số N thành dạng thập phân nhưng trong quá trình chuyển cần áp dụng đồng dư để lấy số dư của số thập phân vs 5.

// Đầu vào
// Số N ở dạng nhị phân

// Giới hạn
// N có không quá 1000 bit.

// Đầu ra
// In ra YES nếu N chia hết cho 5, ngược lại in ra NO.

// Ví dụ :
// Input 01
// Copy
// 1010
// Output 01
// Copy
// YES

#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin >> n;
    int mod = 0;
    int j = n.size() - 1;
    for(int i = 0; i < n.size(); i++){
        mod = (2 * mod + n[i] - '0') % 5;
        
    }

    if(mod == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
}