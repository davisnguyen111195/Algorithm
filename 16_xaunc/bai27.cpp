// [Xâu Ký Tự]. Bài 27. Xâu con liên tiếp 2
// Cho một xâu kí tự S chỉ bao gồm các chữ cái in thường, hãy tìm xâu con liên tiếp sao cho không có 2 kí tự nào liền kề giống nhau có độ dài lớn nhất, nếu có nhiều xâu con thỏa mãn thì chọn xâu con có thứ tự từ điển lớn nhất.

// Đầu vào
// Một dòng duy nhất chứa xâu S.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// In ra xâu con là kết quả của bài toán

// Ví dụ :
// Input 01
// Copy
// zzaabcc28tech
// Output 01
// Copy
// c28tech

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.second != b.second){
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);

    int a[s.size()] = {0};
    for(int i = 1; i < s.size(); i++){
        
        if(s[i] != s[i-1]){
            a[i] = a[i-1]+1;
            a[i-1] = 0;
        } 
    }
    vector<pair<string, int>> vS;
    for(int i = 0; i < s.size(); i++){
        if(a[i] > 0){
            string c;
            for(int j = i - a[i]; j <= i; j++){
                c.push_back(s[j]);
            }
            vS.push_back({c, a[i]+1});
        }
    }
    if(vS.size() == 0){
        cout << s[0];
    } else {
        sort(vS.begin(), vS.end(), cmp);
        auto it = vS.back();
        cout << it.first;
        return 0;
    }
    
}