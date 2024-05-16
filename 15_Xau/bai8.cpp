// [Xâu Ký Tự Cơ Bản]. Bài 8. 28tech vào Tèo
// Tèo là một người ghét 28tech vì cho rằng 28tech cho quá nhiều bài tập khó làm anh ta phải đau đầu.

// Vì thế anh ta ghét tất cả những chữ cái xuất hiện trong từ "28tech", Tèo muốn nhờ bạn xóa hết những kí tự xuất hiện trong từ "28tech" khỏi xâu kí tự S, bạn hãy giúp Tèo nhé.

// Nếu xâu S sau khi xóa không còn kí tự nào bạn phải in ra EMPTY

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// Đầu ra
// In ra xâu S sau khi xóa hoặc in ra EMPTY nếu xâu S trở thành rỗng.

// Ví dụ :
// Input 01
// Copy
// 28techcppdsa288
// Output 01
// Copy
// ppdsa


#include <bits/stdc++.h>

using namespace std;

bool check(char s){
    char x[] = {'2', '8', 't', 'e', 'c', 'h'};
    for(int i = 0; i < 6; i++){
        if(s == x[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    getline(cin, s);
    string b;
    for(int i = 0; i < (int)s.size(); i++){
        if(check(s[i])){
            b.push_back(s[i]);
        }
    }
    if(b.size() == 0){
        cout << "EMPTY";
    } else {
        cout << b;
    }
    return 0;
}
