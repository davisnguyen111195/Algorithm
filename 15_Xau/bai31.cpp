// [Xâu Ký Tự Cơ Bản]. Bài 31. Tần suất ký tự
// Cho xâu ký tự S chỉ bao gồm kí tự in thường và chữ số, bạn hãy in ra số lần xuất hiện của từng ký tự ở trong xâu. Bạn có thể dùng mảng đánh dấu hoặc dùng map.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// Đầu ra
// In ra các ký tự trong xâu kèm tần suất theo thứ tự từ điển tăng dần

// Ví dụ :
// Input 01
// Copy
// 28tech22
// Output 01
// Copy
// 2 3
// 8 1
// c 1
// e 1
// h 1
// t 1

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    map<char, int> mS;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            mS[s[i]]++;
        }
    }

    for(auto item: mS){
        cout << item.first << " " << item.second << endl;
    }

    return 0;
}