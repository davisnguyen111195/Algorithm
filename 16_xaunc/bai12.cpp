// [Xâu Ký Tự]. Bài 12. Sắp xếp từ 2
// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy sắp xếp các từ thuận nghịch khác nhau trong xâu theo thứ tự từ chiều dài tăng dần, nếu 2 từ thuận nghịch có cùng chiều dài thì từ nào xuất hiện trước sẽ được in ra trước.

// Đầu vào
// Dòng duy nhất chứa xâu S.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// In ra các từ theo thứ tự sắp xếp yêu cầu, các từ được in cách nhau một dấu cách.

// Ví dụ :
// Input 01
// Copy
// php aba aaaa nguyen huu hoc pop
// Output 01
// Copy
// php aba pop aaaa

#include <bits/stdc++.h>
using namespace std;
bool checkTN(string s){
    string b;
    for(int i = s.size() - 1; i >= 0; i--){
        b.push_back(s[i]);
    }
    return s == b;
}

bool cmp(string a, string b){
    int as = a.size();
    int bs = b.size();
    return as < bs;
}
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> vS;
    map<string, int> mS;
    while(ss >> word){
        if(checkTN(word)){
            if(mS[word] == 0){
                vS.push_back(word);
            }
            mS[word]++;
        }
    }

    stable_sort(vS.begin(), vS.end(), cmp);
    for(string item: vS){
        cout << item << " ";
    }

    return 0;
}