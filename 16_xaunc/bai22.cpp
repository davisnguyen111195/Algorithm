// [Xâu Ký Tự]. Bài 22. Tập từ riêng của 2 xâu
// Cho 2 xâu kí tự S và T. Hãy liệt kê các từ xuất hiện ở xâu S và không xuất hiện ở xâu T mà không phân biệt hoa thường, mỗi từ được liệt kê một lần theo thứ tự từ điển tăng dần.

// Đầu vào
// Dòng đầu tiên chứa xâu S.

// Dòng thứ hai chứa xâu T.

// Giới hạn
// 1≤len(S)≤10000; 1≤len(T)≤10000

// Xâu S và T chỉ bao gồm chữ cái và dấu cách.

// Đầu ra
// In ra các từ theo thứ tự từ điển, các từ cách nhau một dấu cách và in theo thứ tự từ điển tăng dần.

// Ví dụ :
// Input 01
// Copy
// aa AA abc abcd zzaA 28TEch
// ABc ABCd uuzka aka opl
// Output 01
// Copy
// 28tech aa zzaa

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s, t;
    getline(cin, s);
    stringstream ss(s);
    string w;
    
    set<string> sS;
    while(ss >> w){
        for(int i = 0; i < w.size(); i++){
            if(w[i] >= 65 && w[i] <= 90){
                w[i] += 32;
            }
        }
        sS.insert(w);
    }

    getline(cin, t);
    stringstream tt(t);
    set<string> sS2;
    while(tt >> w){
        for(int i = 0; i < w.size(); i++){
            if(w[i] >= 65 && w[i] <= 90){
                w[i] += 32;
            }
        }
        sS2.insert(w);
    }

    for(string item: sS){
        if(sS2.find(item) == sS2.end()){
            cout << item << " ";
        }
    }
    return 0;
}