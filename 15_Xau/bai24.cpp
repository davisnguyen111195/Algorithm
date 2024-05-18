// [Xâu Ký Tự Cơ Bản]. Bài 24. Loại bỏ dấu cách thừa
// Cho xâu ký tự S, bạn hãy loại bỏ các dấu cách thừa ở đầu và cuối xâu cũng như giữa các từ.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10^5

// S chứa kí tự là chữ cái, chữ số và dấu cách.

// Đầu ra
// In ra xâu s sau khi chuẩn hóa

// Ví dụ :
// Input 01
// Copy
//    28tech    di hoc   lap trinh
// Output 01
// Copy
// 28tech di hoc lap trinh

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    s.clear();
    while(ss >> word){
        s += word + " ";
    }
   
    cout << s;
    return 0;
}