// // [Xâu Ký Tự Cơ Bản]. Bài 12. Đếm từ in hoa
// Cho một xâu S bao gồm chữ cái và dấu cách, thực hiện đếm các từ là in hoa trong xâu S.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// Đầu ra
// In ra số lượng từ in hoa trong xâu.

// Ví dụ :
// Input 01
// Copy
// Tech Dev DSA CPP
// Output 01
// Copy
// 2

#include <bits/stdc++.h>

using namespace std;

bool isUpper(string b){
    int cnt = 0;
    for(int i = 0; i < (int)b.size(); i++){
        if(isupper(b[i] && b[i] != ' ')){
            cnt++;
        }
    }
    return cnt == (int)b.size();
}

int main(){
    string s;
    getline(cin, s);
    s.push_back(' ');
    vector<string> vsX;
    string b;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] != ' '){
            b.push_back(s[i]);
        } else {
            vsX.push_back(b);
            b.clear();
        }
    }
    
    int cnt = 0;
    for(auto it = vsX.begin(); it != vsX.end(); it++){
        string c = *it;
        for(int i = 0; i < (int)c.size(); i++){
            c[i] = toupper(c[i]);
        }
        
        if(*it == c && *it != ""){
            cnt++;
        }
    }



    cout << cnt;
    return 0;
}