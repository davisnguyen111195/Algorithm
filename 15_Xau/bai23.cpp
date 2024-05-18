// [Xâu Ký Tự Cơ Bản]. Bài 23. Kiểm tra xâu đối xứng
// Cho xâu ký tự S, bạn hãy kiểm tra xem xâu có đối xứng hay ko? Xây dựng chương trình theo khuôn mẫu sau

// Copy
// bool palindrome(string s){

// }

// int main(){
//     string s; cin >> s;
//     cout << boolalpha << palindrome(s) << endl;
// }
// Đầu vào
// Dòng duy nhất chứa xâu S chỉ bao gồm kí tự là chữ cái

// Giới hạn
// 1<=len(S)<=100000

// S chứa kí tự là chữ cái, chữ số và dấu cách.

// Đầu ra
// In ra true nếu xâu S là xâu đối xứng, ngược lại in ra false.

// Ví dụ :
// Input 01
// Copy
// 28techhcet82
// Output 01
// Copy
// true
#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s){
    int n = s.size();
    string b(n, '*');
    int j = 0;
    for(int i = n-1; i >= 0; i--){
        b[j] = s[i];
        j++;
    }

    return b == s;
}

int main(){
    string s; cin >> s;
    cout << boolalpha << palindrome(s) << endl;
}
