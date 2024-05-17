// [Xâu Ký Tự Cơ Bản]. Bài 17. Sắp xếp các từ
// Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện sắp xếp các từ trong xâu theo thứ tự từ điển tăng dần và giảm dần.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// S chứa kí tự là chữ cái, chữ số và dấu cách.

// Đầu ra
// Dòng 1 in ra các từ theo thứ tự từ điển tăng dần.

// Dòng 2 in ra các từ theo thứ tự từ điển giảm dần.

// Ví dụ :
// Input 01
// Copy
// 8WNH8   ajw zzu ymlr krXih   Ts0K4 5Zd mcx9
// Output 01
// Copy
// 5Zd 8WNH8 Ts0K4 ajw krXih mcx9 ymlr zzu
// zzu ymlr mcx9 krXih ajw Ts0K4 8WNH8 5Zd

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);

    string word;

    set<string> sX;
    while(ss >> word){
        sX.insert(word);
    }

    for(string item: sX){
        cout << item << " ";
    }
    cout << endl;
    for(auto it = sX.rbegin(); it != sX.rend(); it++){
        cout << *it << " ";
    }

    return 0;
}