// [Xâu Ký Tự]. Bài 4. Ký tự xuất hiện nhiều nhất
// Cho một xâu kí tự, hãy tìm kí tự có số lần xuất hiện ít nhất trong xâu và kí tự có số lần xuất hiện nhiều nhất ở trong xâu.

// Trong trường hợp có nhiều kí tự có cùng số lần xuất hiện lớn nhất hoặc nhỏ nhất thì in ra kí tự có thứ tự từ điển lớn nhất.

// Đầu vào
// Xâu kí tự S chỉ bao gồm chữ cái in hoa và in thường.

// Giới hạn
// 1≤len(S)≤100000.

// Đầu ra
// Dòng đầu tiên in ra kí tự có số lần xuất hiện nhiều nhất, trong trường hợp có nhiều kí tự có cùng số lần xuất hiện nhiều nhất thì chọn kí tự có thứ tự từ điển lớn nhất.

// Dòng thứ 2 in ra kí tự có số lần xuất hiện nhỏ nhất nhất, trong trường hợp có nhiều kí tự có cùng số lần xuất hiện nhỏ nhất thì chọn kí tự có thứ tự từ điển lớn nhất.

// Ví dụ :
// Input 01
// Copy
// 28tech28techtech
// Output 01
// Copy
// t 3
// 8 2

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b){
    if(a.second != b.second){
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

bool cmp2(pair<char, int> a, pair<char, int> b){
    if(a.second != b.second){
        return a.second > b.second;
    } else {
        return a.first < b.first;
    }
}
int main(){
    string s;
    getline(cin, s);
    map<char, int> mS;
    vector<pair<char, int>> vS;
    for(int i = 0; i < s.size(); i++){
        mS[s[i]]++;
    }

    for(auto item: mS){
        pair<char, int> pS;
        pS.first = item.first;
        pS.second = item.second;
        vS.push_back(pS);
    }
    sort(vS.begin(), vS.end(), cmp);
    auto result1 = vS.back();
    cout << result1.first << " " << result1.second << endl;
    sort(vS.begin(), vS.end(), cmp2);
    auto result2 = vS.back();
    cout << result2.first << " " << result2.second << endl;
    return 0;
}