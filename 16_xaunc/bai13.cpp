// [Xâu Ký Tự]. Bài 13. Tần suất từ
// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy đếm xem mỗi từ trong xâu xuất hiện bao nhiêu lần, đầu tiên hãy liệt kê các từ trong xâu kèm theo tần suất của mỗi từ theo thứ tự từ điển, sau đó liệt kê các từ trong xâu theo thứ tự xuất hiện.

// Đầu vào
// Dòng duy nhất chứa xâu S.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// Đầu tiên in ra các từ trong xâu và tần suất của nó theo thứ tự từ điển.

// Sau đó bỏ trống 1 dòng và in ra các từ trong xâu và tần suất của nó theo thứ tự xuất hiện trong xâu.

// Ví dụ :
// Input 01
// Copy
// bb aa bb cc aa bb cc 28tech
// Output 01
// Copy
// 28tech 1
// aa 2
// bb 3
// cc 2

// bb 3
// aa 2
// cc 2
// 28tech 1

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
        cout << item.first << " " << item.second << endl;
    }

    cout << endl;

    for(string item: vS){
        cout << item << " " << mS[item] << endl;
    }
    return 0;
}