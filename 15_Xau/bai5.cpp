// [Xâu Ký Tự Cơ Bản]. Bài 5. Chèn dấu phẩy
// Khi viết 1 số nguyên dương quá lớn, người ta thường thêm các dấu phẩy vào giữa các chữ số cho dễ đọc

// Ví dụ : số N = 123456789 được viết thành 123,456,789, N = 12345 được viết thành 12,345. Nhiệm vụ của bạn là thêm dấu phẩy vào số N

// Gợi ý : Duyệt từ cuối của xâu N về và nối các kí tự của N vào xâu kết quả, dùng thêm biến đếm nếu cứ đếm được 3 kí tự thì nối thêm 1 dấu phẩy vào xâu kết quả.

// Đầu vào
// Dòng duy nhất chứa số nguyên dương N

// Giới hạn
// 1<=N<=10^18

// Đầu ra
// In ra N sau khi thêm dấu phẩy.

// Ví dụ :
// Input 01
// Copy
// 999970094
// Output 01
// Copy
// 999,970,094

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    int n = s.size();
    for(int i = n-1; i >= 0 ; i--){
        cnt++;
        if(cnt == 3 && i != 0){
            s.insert(s.begin() + i, ',');
            cnt = 0;
        }
        
    }

    cout << s;
    return 0;
}
