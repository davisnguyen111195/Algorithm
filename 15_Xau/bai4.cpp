// [Xâu Ký Tự Cơ Bản]. Bài 4. Số đẹp
// Cho số nguyên dương N có ít nhất 2 chữ số, một số được coi là số đẹp nếu 2 chữ số liền kề của nó chỉ lệch nhau đúng 1 đơn vị, ví dụ về số đẹp : 12345, 121212, 78987.

// Hãy kiểm tra xem N có phải là số đẹp hay không?

// Đầu vào
// Dòng duy nhất chứa số nguyên dương N

// Giới hạn
// 10<=N<=10^18

// Đầu ra
// In ra YES nếu N là số đẹp, ngược lại in ra NO

// Ví dụ :
// Input 01
// Copy
// 244
// Output 01
// Copy
// NO
// Input 02
// Copy
// 1232
// Output 02
// Copy
// YES


#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 1; i < (int)s.size(); i++){
        int pre = s[i-1] - '0';
        int now = s[i] - '0';
        if(abs(now-pre) == 1){
            cnt++;
        }
    }

    if(cnt == (int)s.size()-1){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
