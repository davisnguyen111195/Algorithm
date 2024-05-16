// [Xâu Ký Tự Cơ Bản]. Bài 9. Chèn
// Cho xâu kí tự S và số nguyên K, bạn được yêu cầu chèn dòng chữ "28tech" vào chỉ số K của xâu S

// Đầu vào
// Dòng 1 chứa xâu S. Dòng 2 chứa số nguyên K.

// Giới hạn
// 1<=len(S)<=10000

// 0<=K < len(S)

// Đầu ra
// In ra xâu S sau khi chèn

// Ví dụ :
// Input 01
// Copy
// ClhiSYBOSg5Re
// 10
// Output 01
// Copy
// ClhiSYBOSg28tech5Re

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; int k;
    cin >> s;
    cin.ignore();
    cin >> k;
    s.insert(k, "28tech");
    cout << s;
    return 0;
}
