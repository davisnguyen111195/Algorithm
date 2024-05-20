// [Xâu Ký Tự]. Bài 21. Tập từ chung của 2 xâu
// Cho 2 xâu kí tự S và T. Hãy liệt kê các từ xuất hiện ở cả 2 xâu mà không phân biệt hoa thường, mỗi từ được liệt kê một lần theo thứ tự từ điển tăng dần.

// Gơi ý : Dùng 2 set lưu các từ trong xâu S, T. Duyệt 1 trong 2 set và tìm kiếm sự xuất hiện của từ hiện tại trong set còn lại, nếu tìm thấy thì in ra.

// Đầu vào
// Dòng đầu tiên chứa xâu S.

// Dòng thứ hai chứa xâu T.

// Giới hạn
// 1≤len(S)≤10000; 1≤len(T)≤10000

// Xâu S và T chỉ bao gồm chữ cái và dấu cách.

// Đầu ra
// In ra các từ xuất hiện ở cả 2 xâu theo thứ tự từ điển tăng dần, mỗi từ được liệt kê 1 lần và in ra ở dạng chữ in thường.

// Ví dụ :
// Input 01
// Copy
// abc abc abcd abcd AB 28TeCH
// abC CD ZAH abd ABcD 28tech
// Output 01
// Copy
// 28tech abc abcd

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
        if(sS2.find(item) != sS2.end()){
            cout << item << " ";
        }
    }
    return 0;
}