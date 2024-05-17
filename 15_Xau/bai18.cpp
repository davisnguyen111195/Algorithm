// [Xâu Ký Tự Cơ Bản]. Bài 18. Sắp xếp từ theo chiều dài
// Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách.

// Thực hiện sắp xếp các từ trong xâu theo thứ tự chiều dài tăng dần, nếu 2 từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ được xếp trước.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// S chứa kí tự là chữ cái, chữ số và dấu cách.

// Đầu ra
// In ra các từ sau khi sắp xếp

// Ví dụ :
// Input 01
// Copy
// 28tech dev c
// Output 01
// Copy
// c dev 28tech

#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    int cnta = (int)a.size();
    int cntb = (int)b.size();
    return cnta < cntb;
}

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> vS;
    while(ss >> word){
        vS.push_back(word);
    }

    stable_sort(vS.begin(), vS.end(), cmp);
    for(string item: vS){
        cout << item << " ";
    }
    return 0;
}