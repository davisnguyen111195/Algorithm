// [Xâu Ký Tự Cơ Bản]. Bài 33. Tần suất của từ 2
// Cho xâu S gồm các từ các nhau 1 vài dấu cách, bạn hãy đếm xem mỗi từ xuất hiện bao nhiêu lần và liệt kê theo thứ xuất hiện trong xâu S?

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=100000

// S chứa kí tự là chữ cái và dấu cách

// Đầu ra
// In ra các từ khác nhau xuất hiện trong xâu kèm theo tần suất với thứ tự xuất hiện

// Ví dụ :
// Input 01
// Copy
// cpp elon 28tech 28tech 28tech fruit orange elon orange elon
// Output 01
// Copy
// cpp 1
// elon 3
// 28tech 3
// fruit 1
// orange 2

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mS;
    vector<string> vS;
    while(ss >> word){
        if(mS[word] == 0){
            vS.push_back(word);
        }
        mS[word]++;

    }
    for(string item: vS){
        cout << item << " " << mS[item] << endl;
    }

    return 0;
}