// [Xâu Ký Tự]. Bài 3. Tần suất ký tự
// Cho một xâu kí tự, hãy đếm tần suất xuất hiện của các kí tự trong xâu và in ra theo yêu cầu.

// Đầu vào
// Xâu kí tự S chỉ bao gồm chữ cái in hoa và in thường.

// Giới hạn
// 1≤len(S)≤100000.

// Đầu ra
// Đầu tiên in ra các ký tự và tần suất xuất hiện của các ký tự ở trong xâu theo thứ tự từ điển tăng dần, sau đó cách ra một dòng và in ra tần suất xuất hiện của các ký tự theo thứ tự xuất hiện trong xâu(chú ý mỗi kí tự chỉ in 1 lần)

// Ví dụ :
// Input 01
// Copy
// abcdabcdA
// Output 01
// Copy
// A 1
// a 2
// b 2
// c 2
// d 2

// a 2
// b 2
// c 2
// d 2
// A 1


#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    map<char, int> mS;
    vector<char> vS;
    for(int i = 0; i < s.size(); i++){
        if(mS[s[i]] == 0){
            vS.push_back(s[i]);
        }
        mS[s[i]]++;

    }
    for(auto item: mS){
        cout << item.first << " " << item.second << endl;
    }
    cout << endl;
    for(char item: vS){
        cout << item << " " << mS[item] << endl;
    }
    return 0;
}