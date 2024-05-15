// [Xâu Ký Tự Cơ Bản]. Bài 7. In ra chữ số
// Cho xâu kí tự S bao gồm chữ cái và chữ số, thực hiện tách riêng chữ số và chữ cái của S.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// Đầu ra
// Dòng 1 in ra những chữ số xuất hiện trong S theo thứ tự xuất hiện.

// Dòng 2 in ra những chữ cái xuất hiện trong S theo thứ tự xuất hiện.

// Ví dụ :
// Input 01
// Copy
// 28tech2828techcpp
// Output 01
// Copy
// 282828
// techtechcpp

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector<char> vX;
    vector<char> vX2;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] >= 48 && s[i] <= 57){
            vX.push_back(s[i]);
        } else {
            vX2.push_back(s[i]);
        }
    }
    for(auto item: vX){
        cout << item;
    }
    cout << endl;
    for(auto item: vX2){
        cout << item;
    }
    return 0;
}