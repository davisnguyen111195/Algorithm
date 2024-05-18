// [Xâu Ký Tự Cơ Bản]. Bài 27. Kiểm tra email
// Một địa chỉ email hợp lệ nếu :

// • Bắt buộc kết thúc bằng 1 trong các đuôi : @gmail.com, @28tech.com.vn, @yahoo.com, @hotmail.com

// • Không được chứa các ký tự đặc biệt và dấu cách mà chỉ được chứ các kí tự là chữ số và chữ cái, ngoại trừ @, dấu chấm và dấu gạch dưới

// • Không được chứa nhiều hơn 1 ký tự @

// Bạn được cung cấp 1 loạt các email, bạn hãy xác định xem email này có hợp lệ hay không, nếu hợp lệ in ra YES, ngược lại in ra NO

// Đầu vào
// • Dòng 1 là T : số lượng email

// • T dòng tiếp theo chứa các email

// Giới hạn
// • 1<=T<=1000

// • Email là xâu ký tự có độ dài không quá 100

// Đầu ra
// In ra đáp án từng test trên mỗi dòng

// Ví dụ :
// Input 01
// Copy
// 10
// 1b2ac2adcd@mail.com
// 2d2414d4eedb@gmail.com
// c3ec3214dd14de3a4@teche@.com
// 13c12b4ae4@28tech.com.vn
// de12ad131ca242221@yahoo.com
// de132241c12bbb414e@yahoo.com
// 2b1121cb1144@apple.com
// 312dc324144ceab4@mail.com
// e22cac1b144acdcd34@hotmail.com
// e4d3e2c4b3b421442c@xyz.com
// Output 01
// Copy
// NO
// YES
// NO
// YES
// YES
// YES
// NO
// NO
// YES
// NO

#include <bits/stdc++.h>

using namespace std;
bool check(string s){
    regex pattern("[a-zA-Z0-9_\.]+@(gmail|28tech|yahoo|hotmail)+\.(com)+(\.(vn)+)*");
    if(regex_match(s, pattern)){
        return true;
    } 
    return false;
}

bool check2(string s){
    string a = "@gmail.com",
		   b = "@28tech.com.vn",
		   c = "@yahoo.com",
		   d = "@hotmail.com";
    if(s.find(a) == string::npos && s.find(b) == string::npos && s.find(c) == string::npos && s.find(d) == string::npos){
        return false;
    } 
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '@'){
            cnt++;
        }
        if(isdigit(s[i]) != 0 && isalpha(s[i]) != 0 && s[i] != '.' && s[i] != '_'){
            return false;
        }
    }
    return cnt == 1;

}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        if(check2(s)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}