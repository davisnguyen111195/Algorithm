// [Xâu Ký Tự Cơ Bản]. Bài 10. Ký tự lặp đầu tiên
// Cho xâu kí tự S, bạn hãy tìm kí tự được lặp lại đầu tiên trong xâu S.

// Nếu xâu S không có kí tự bị lặp lại thì in ra NONE

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// Đầu ra
// In ra kí tự lặp lại đầu tiên hoặc NONE

// Ví dụ :
// Input 01
// Copy
// 5nLQokt1QgU7nnn5
// Output 01
// Copy
// Q

#include <bits/stdc++.h>


using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> mX;
    for(int i = 0; i < (int)s.size(); i++){
        if(mX[s[i]] == 0){
            mX[s[i]]++;
        } else {
            cout << s[i];
            return 0;
        }
    }
    cout << "NONE";
    return 0;
}
