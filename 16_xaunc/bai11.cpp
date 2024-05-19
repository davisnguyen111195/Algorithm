// [Xâu Ký Tự]. Bài 11. Sắp xếp từ 1
// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, đầu tiên hãy sắp xếp các từ trong xâu theo thứ tự từ điển tăng dần, sau đó sắp xếp các từ trong xâu theo thứ tự chiều dài tăng dần, trong trường hợp có nhiều từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ in ra trước.

// Đầu vào
// Dòng duy nhất chứa xâu S.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// Dòng đầu tiên in ra các từ trong xâu theo thứ tự từ điển tăng dần.

// Dòng thứ 2 in ra các từ trong xâu theo thứ tự chiều dài tăng dần, trong trường hợp có nhiều từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ in ra trước. Các từ được in cách nhau một dấu cách.

// Ví dụ :
// Input 01
// Copy
// hoc lap trinh php 28tech
// Output 01
// Copy
// 28tech hoc lap php trinh
// hoc lap php trinh 28tech

#include <bits/stdc++.h>

using namespace std;

bool cmp2(string a, string b){
    int as = a.size();
    int bs = b.size();
    if(as != bs){
        return as < bs;
    } else {
        return a < b;
    }
}
bool cmp1(string a, string b){
    return a < b;
}

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> vS;
    map<string, int> mS;
    while(ss >> word){
        vS.push_back(word);
        mS[word]++;
    }
    sort(vS.begin(), vS.end(), cmp1);
    for(string item: vS){
        cout << item << " "; 
    }
    cout << endl;

    sort(vS.begin(), vS.end(), cmp2);
    for(string item: vS){
        cout << item << " ";
    }
    return 0;
}