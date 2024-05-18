// [Xâu Ký Tự Cơ Bản]. Bài 19. Đếm số lượng tự khác nhau
// Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện đếm số lượng các từ khác nhau trong xâu mà không phân biệt hoa thường, ví dụ "28TecH" được coi là giống với từ "28teCH".

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// S chứa kí tự là chữ cái, chữ số và dấu cách.

// Đầu ra
// In ra số lượng từ khác nhau trong xâu

// Ví dụ :
// Input 01
// Copy
// 28tech 28TECH 28tECH dev
// Output 01
// Copy
// 2

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(65 <= s[i] && s[i] <= 90){
            s[i] += 32;
        }
    }

    stringstream ss(s);
    set<string> vX;
    string word;
    while(ss >> word){
        vX.insert(word);
    }

   
    cout << vX.size();
    return 0;
}
