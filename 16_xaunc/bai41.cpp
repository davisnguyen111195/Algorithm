// [Xâu Ký Tự]. Bài 41. Số nhị phân chia hết cho 2^K
// Cho số nguyên dương N được biểu diễn được dạng số nhị phân, hãy kiểm tra xem N có chia hết cho 2^K hay không

// Ví dụ : N = 11000 (24 hệ thập phân) chia hết cho 2^3.

// Gợi ý : Tính chia hết của N cho 2^K phụ thuộc vào K bit cuối cùng, còn những bit từ thứ K + 1 trở về trước nó đầu là bội của 2^K rồi.

// Đầu vào
// Dòng đầu tiên là số N có không quá 1000 bit.

// Dòng thứ 2 là số nguyên dương K.

// Giới hạn
// N có không quá 1000 bit.

// 1<=K<=1000.

// Đầu ra
// In ra YES nếu N chia hết cho 2^K, ngược lại in ra NO.

// Ví dụ :
// Input 01
// Copy
// 101010010000
// 3
// Output 01
// Copy
// **YES**

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int k;
    cin >> s >> k;
    reverse(s.begin(), s.end());
    for(int i = 0; i < k; i++){
        if(s[i] == '1'){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}