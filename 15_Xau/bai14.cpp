// [Xâu Ký Tự Cơ Bản]. Bài 14. Tí và 28tech
// Mặc dù là 2 người bạn thân nhưng Tí và Tèo lại rất khác nhau khi nói đến 28tech, Tí thì lại là người rất thích 28tech.

// Vì thế Tí nhờ bạn đếm các từ 28tech xuất hiện trong một xâu S cho trước.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// Đầu ra
// In ra số lượng từ 28tech xuất hiện trong xâu S không phân biệt hoa thường, tức là những từ như 28TEch, hay 28TecH... đều được chấp nhận.

// Ví dụ :
// Input 01
// Copy
// zzA 28TecH AAAa AAW Dobc czo 28tECH zIo bic
// Output 01
// Copy


#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;
    while(ss >> word){
        for(int i = 0; i < (int)word.size(); i++){
            word[i] = tolower(word[i]);
        }
        if(word == "28tech"){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}