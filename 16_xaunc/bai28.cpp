// [Xâu Ký Tự]. Bài 28. Số lớn nhất trong xâu
// Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy tìm số lớn nhất xuất hiện trong xâu.

// Ví dụ : S = "abc123bba567ajsj50kkf099" thì số lớn nhất xuất hiện trong xâu là số 567, chú ý trong trường hợp một số có các số 0 đứng trước thì ta loại bỏ các số 0 ở đầu, trong ví dụ số 099 ta tính là số 99, 000 ta tính là số 0.

// Chú ý : Số xuất hiện trong xâu có thể có 1000 chữ số

// Đầu vào
// Một dòng duy nhất chứa xâu S.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// In ra số lớn nhất xuất hiện trong xâu, dữ liệu đảm bảo có ít nhất 1 số xuất hiện trong xâu.

// Ví dụ :
// Input 01
// Copy
// abc123bba567ajsj50kkf099x28tech
// Output 01
// Copy
// 567

#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.second != b.second){
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}
void chuanhoa(string& s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            cnt++;
        } else {
            break;
        }
    }
    if(s[0] == '0'){
        s.erase(0, cnt);
    }
    if(s == ""){
        s = "0";
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);
    vector<pair<string, int>> vS;
    for(int i = 0; i < s.size(); i++){
        string b;
        if(isalpha(s[i])){
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    string w;
    while(ss >> w){
        chuanhoa(w);
        vS.push_back({w, w.size()});
    }

    sort(vS.begin(), vS.end(), cmp);
    auto it = vS.back();
    cout << it.first;

    return 0;
}