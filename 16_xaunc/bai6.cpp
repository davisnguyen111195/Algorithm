// [Xâu Ký Tự]. Bài 6. Ký tự xuất hiện ở cả 2 xâu
// Cho 2 xâu kí tự S1 và S2 chỉ bao gồm chữ cái in hoa và in thường, hãy tìm các kí tự xuất hiện trong xâu S1 mà không xuất hiện trong xâu S2, và các kí tự chỉ xuất hiện trong xâu S2 mà không xuất hiện trong xâu S1.

// Các ký tự được in ra theo thứ tự từ điển và chỉ liệt kê mỗi ký tự một lần.

// Đầu vào
// Dòng đầu tiên là xâu S1.

// Dòng thứ 2 là xâu S2.

// Giới hạn
// 1≤len(S1)≤100000

// 1≤len(S2)≤100000.

// Đầu ra
// Dòng đầu tiên in ra các ký tự chỉ xuất hiện trong S1 mà không xuất hiện trong S2.

// Dòng thứ 2 in ra các ký tự chỉ xuất hiện trong S2 mà không xuất hiện trong S1.

// Ví dụ :
// Input 01
// Copy
// fAOxTUeAIs
// aVUkULeRYw
// Output 01
// Copy
// AIOTfsx
// LRVYakw

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    string t; 
    getline(cin, t);
    int cnt1[256] = {0}, cnt2[256] = {0};
    for(char x: s){
        cnt1[x] = 1;
    }
    for(char x: t){
        cnt2[x] = 1;
    }

    for(int i = 0; i < 256; i++){
        if(cnt1[i] == 1 && cnt2[i] == 0){
            cout << (char)i;
        }
    }
    cout << endl;
    for(int i = 0; i < 256; i++){
        if(cnt1[i] == 0 && cnt2[i] == 1){
            cout << (char)i;
        }
    }
    return 0;
}