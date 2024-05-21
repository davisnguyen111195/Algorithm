// [Xâu Ký Tự]. Bài 34. Số đẹp 3
// Một số được coi là số đẹp nếu nó có các chữ số không giảm từ trái qua phải hoặc không tăng từ trái quá phải, ví dụ số 1233333345 là số không giảm, số 5555555543 là số không tăng.

// Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

// Đầu vào
// Số nguyên dương N.

// Giới hạn
// N có không quá 1000 chữ số.

// Đầu ra
// In ra YES nếu N là số đẹp ngược lại lại ra NO.

// Ví dụ :
// Input 01
// Copy
// 12377788888888888888888888888888888888888888888889
// Output 01
// Copy
// YES

#include <bits/stdc++.h>

using namespace std;
bool checkTang(string s){
    bool checker = true;
    for(int i = 1; i < s.size(); i++){
        int check1 = s[i-1] - '0';
        int check2 = s[i] - '0';
        if(check1 <= check2){
            checker = checker && true;
        } else {
            checker = checker && false;
        }
    }
    return checker;
}
int main(){
    string s;
    cin >> s;
    bool checker = true;
    string b;
    for(int i = s.size() - 1; i >= 0; i--){
        b.push_back(s[i]);
    }
    if(checkTang(s) || checkTang(b)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
