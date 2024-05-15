// [Xâu Ký Tự Cơ Bản]. Bài 3. Tổng chữ số
// Cho một xâu kí tự S chỉ bao gồm chữ số và chữ cái, hãy tính tổng chữ số xuất hiện trong xâu.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// Đầu ra
// In ra tổng chữ số xuất hiện trong xâu

// Ví dụ :
// Input 01
// Copy
// 28tech28techtechdsacpp
// Output 01
// Copy
// 20


#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 48 && s[i] <= 57){
            sum += s[i] - '0';
        }
    }
    cout << sum;
    return 0;
}
