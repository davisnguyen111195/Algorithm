// [Xâu Ký Tự]. Bài 9. Đếm số lượng từ trong xâu
// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy đếm số lượng từ xuất hiện trong xâu S.

// Gợi ý : Bạn có thể đọc cả dòng bằng getline rồi dùng stringstream để tách ra hoặc dùng cú pháp đọc hết các từ trong input :

// Copy
// string s;
// while(cin >> s){

// }
// Đầu vào
// Dòng duy nhất chứa xâu S.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// In ra số lượng từ xuất hiện trong xâu S.

// Ví dụ :
// Input 01
// Copy
// ngon ngu lap trinh java, python
// Output 01
// Copy
// 6

#include <bits/stdc++.h>


using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;
    while(ss >> word){
        cnt++;
    }
    cout << cnt;

    return 0;
}