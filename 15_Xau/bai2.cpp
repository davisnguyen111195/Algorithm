// [Xâu Ký Tự Cơ Bản]. Bài 2. Lật ngược, in hoa, in thường
// Cho xâu kí tự S có không quá 10000 kí tự, S bao gồm kí tự in hoa, in thường, chữ số và kí tự đặc biệt.

// Hãy tự viết 3 hàm lật ngược xâu, viết hoa và viết thường xâu kí tự

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// Đầu ra
// Dòng 1 in ra xâu S lật ngược.

// Dòng 2 in ra xâu S ở dạng in thường.

// Dòng 3 in ra xâu S ở dạng in hoa.

// Ví dụ :
// Input 01
// Copy
// hjweXafgbDeGxEa
// Output 01
// Copy
// aExGeDbgfaXewjh
// hjwexafgbdegxea
// HJWEXAFGBDEGXEA


#include <bits/stdc++.h>

using namespace std;

string latnguoc(string &s){
    string b = s;
    int j = 0; int i = s.size()-1;
    while(j < s.size()){
        b[j] = s[i];
        j++; i--;
    }
    return b;
}

void inHoa(string &s){
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] >= 97 && s[i] <= 122){
            s[i] -= 32;
        }
    }
}

void inThuong(string &s){
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32;
        }
    }
}

int main(){
    string s;
    cin >> s;
    string b = latnguoc(s);
    cout << b << endl;
    

    inThuong(s);
    cout << s << endl;


    inHoa(s);
    cout << s;
    
    return 0;
}