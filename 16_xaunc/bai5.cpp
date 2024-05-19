// [Xâu Ký Tự]. Bài 5. Ký tự xuất hiện ở cả 2 xâu
// Cho 2 xâu kí tự S1 và S2, hãy in ra các kí tự xuất hiện ở cả 2 xâu theo thứ tự từ điển, chú ý mỗi kí tự chỉ liệt kê một lần. Sau đó tiếp tục liệt kê các kí tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển.

// Đầu vào
// Dòng đầu tiên là xâu S1. Dòng thứ 2 là xâu S2.

// Các ký tự trong 2 xâu chỉ bao gồm chữ cái in hoa hoặc in thường.

// Giới hạn
// 1≤len(S1)≤100000

// 1≤len(S2)≤100000.

// Đầu ra
// Dòng 1 in ra các ký tự xuất hiện ở cả 2 xâu theo thứ tự từ điển tăng dần.

// Dòng 2 in ra các ký tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển tăng dần.

// Ví dụ :
// Input 01
// Copy
// 28tech
// 29techdsa
// Output 01
// Copy
// 2ceht
// 289acdeht


#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);
    int cnt[256] = {0}, cnt2[256] = {0};
    for(char x : s){
        cnt[x] = 1;
    }
    for(char x : t){
        cnt2[x] = 1;
    }

    for(int i = 0; i < 256; i++){
        if(cnt[i] && cnt2[i]){
            cout << (char)i;
        }
    }

    cout << endl;
    for(int i = 0; i < 256; i++){
        if(cnt[i] || cnt2[i]){
            cout << (char)i;
        }
    }

    return 0;
}