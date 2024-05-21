// [Xâu Ký Tự]. Bài 26. Xâu con liên tiếp 1
// Cho một xâu kí tự S chỉ bao gồm các chữ cái in thường, hãy tìm xâu con liên tiếp chứa các kí tự giống nhau dài nhất, nếu có nhiều xâu con thỏa mãn thì chọn xâu con có thứ tự từ điển lớn nhất.

// Đầu vào
// Một dòng duy nhất chứa xâu S.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// In ra xâu con tìm được.

// Ví dụ :
// Input 01
// Copy
// zzaabc
// Output 01
// Copy
// zz
// Input 02
// Copy
// zzaabcccccc
// Output 02
// Copy
// cccccc
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b){
    if(a.second != b.second){
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main(){
    string s;
    getline(cin, s);
    int a[s.size()] = {0};
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            a[i] = a[i-1] + 1;
            a[i-1] = 0;
        }
    }
    vector<pair<char, int>> vS;
    set<char> sS;
    for(int i = 0; i < s.size(); i++){
        if(a[i] > 0){
            pair<char, int> pC;
            pC.first = s[i];
            pC.second = a[i] + 1;
            vS.push_back(pC);
        }
        sS.insert(s[i]);
    }
    if(vS.size() == 0){
        auto it = --sS.end();
        cout << *it;
    } else {
        sort(vS.begin(), vS.end(), cmp);
        auto result = vS.back();
        for(int i = 0; i < result.second; i++){
            cout << result.first;
        }
    }
    
    return 0;
}
