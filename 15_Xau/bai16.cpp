// [Xâu Ký Tự Cơ Bản]. Bài 16. Sắp xếp ký tự
// Cho xâu kí tự S, tiến hành sắp xếp kí tự trong xâu S theo thứ tự tăng dần, giảm dần theo thứ tự từ điển rồi in ra màn hình.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=1000

// S chỉ chứa kí tự là chữ cái hoặc chữ số.

// Đầu ra
// Dòng 1 in ra xâu S sau khi sắp tăng dần

// Dòng 2 in ra xâu S sau khi sắp giảm dần

// Ví dụ :
// Input 01
// Copy
// wFJvCFumWtOt7U
// Output 01
// Copy
// 7CFFJOUWmttuvw
// wvuttmWUOJFFC7

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    sort(s.begin(), s.end());
    cout << s << endl;

    sort(s.begin(), s.end(), greater<char>());
    cout << s;
    return 0;
}