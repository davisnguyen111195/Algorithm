// [Xâu Ký Tự]. Bài 14. Từ xuất hiện nhiều nhất, ít nhất
// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách. Hãy tìm từ có số lần xuất hiện nhiều nhất và ít nhất trong xâu, nếu có nhiều từ có cùng số lần xuất hiện nhiều nhất hoặc ít nhất thì chọn từ có thứ tự từ điển lớn nhất làm kết quả.

// Đầu vào
// Dòng duy nhất chứa xâu S.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// Dòng đầu tiên in ra từ có số lần xuất hiện nhiều nhất.

// Dòng thứ 2 in ra từ có số lần xuất hiện ít nhất.

// Ví dụ :
// Input 01
// Copy
// aa bb cc aa bb aa aa cc 28tech tech28
// Output 01
// Copy
// aa 4
// tech28 1

#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.second != b.second){
        return a.second < b.second;
    } else {
        return a < b;
    }
}

bool cmp2(pair<string, int> a, pair<string, int> b){
    if(a.second != b.second) {
        return a.second > b.second;
    } else {
        return a < b;
    }
}
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mS;
    vector<pair<string, int>> vS;
    while(ss >> word){
        mS[word]++;
    }
    for(auto item: mS){
        pair<string, int> pX;
        pX.first = item.first;
        pX.second = item.second;
        vS.push_back(pX);
    }


    sort(vS.begin(), vS.end(), cmp);
    auto result1 = vS.back();
    cout << result1.first << " " << result1.second << endl;
    sort(vS.begin(), vS.end(), cmp2);
    auto result2 = vS.back();
    cout << result2.first << " " << result2.second << endl;
    return 0;
}
