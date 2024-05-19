// [Xâu Ký Tự Cơ Bản]. Bài 32. Tần suất của từ
// Cho xâu S gồm các từ các nhau 1 vài dấu cách, bạn hãy đếm xem mỗi từ xuất hiện bao nhiêu lần và liệt kê theo thứ tự từ điển tăng dần ?

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=100000

// S chứa kí tự là chữ cái và dấu cách

// Đầu ra
// In ra các từ khác nhau xuất hiện trong xâu kèm theo tần suất với thứ tự tăng dần về từ điển.

// Ví dụ :
// Input 01
// Copy
// cpp elon 28tech 28tech 28tech fruit orange elon orange elon
// Output 01
// Copy
// 28tech 3
// cpp 1
// elon 3
// fruit 1
// orange 2

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    map<string, int> mS;
    stringstream ss(s);
    string word;
    while(ss >> word){
        mS[word]++;
    }

    for(auto item: mS){
        cout << item.first << " " << item.second << endl;
    }
    return 0;
}