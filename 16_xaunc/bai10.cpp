// [Xâu Ký Tự]. Bài 10. Liệt kê từ
// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy liệt kê các từ khác nhau trong xâu S, đầu tiên hãy liệt kê các từ khác nhau theo thứ tự từ điển tăng dần, sau đó liệt kê các từ theo thứ tự xuất hiện trong xâu.

// Đầu vào
// Dòng duy nhất chứa xâu S.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// Dòng đầu tiên in ra các trong xâu theo thứ tự từ điển.

// Dòng thứ hai in ra các từ theo thứ tự xuất hiện trong xâu.

// Ví dụ :
// Input 01
// Copy
// python java php php java python
// Output 01
// Copy
// java php python
// python java php

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mS;
    vector<string> vS;
    while(ss >> word){
        if(mS[word] == 0){
            vS.push_back(word);
        }
        mS[word]++;
    }
    for(auto item: mS){
        cout << item.first << " ";
    }
    cout << endl;
    for(string item: vS){
        cout << item << " ";
    }
    return 0;
}