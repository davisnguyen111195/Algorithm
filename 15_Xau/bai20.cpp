// Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách.

// Hãy tách ra các từ thuận nghịch trong xâu và sắp xếp theo thứ tự từ điển tăng dần.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// S chứa kí tự là chữ cái, chữ số và dấu cách.

// Đầu ra
// In ra các từ thuận nghịch sau khi sắp xếp

// Ví dụ :
// Input 01
// Copy
// IAzbbzAI   ocoS iIA ccAAAAAAcc izzbb   aoI iIiAWWAiIi
// Output 01
// Copy
// IAzbbzAI ccAAAAAAcc iIiAWWAiIi

#include <bits/stdc++.h>

using namespace std;
bool checkTN(string s){
    string b;
    for(int i = s.size()-1; i >= 0; i--){
        b.push_back(s[i]);
    }
    return b == s;
}
int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    multimap<string, int> mX;
    while(ss >> word){
        if(checkTN(word)){
            mX.insert({word, 0});
        }
    }

    for(auto item: mX){
        cout << item.first << " ";
    }
    return 0;
}
