// [Xâu Ký Tự]. Bài 49. Số may mắn
// Theo quan niệm của người Việt, số 7 là một số không may mắn, vì thế bạn được yêu cầu xóa cụm 111 trong xâu nhị phân ban đầu, cụm 111 chính là biểu diễn ở dạng nhị phân của số 7.

// Đầu vào
// Xâu nhị phân chỉ bao gồm số 0 và 1.

// Giới hạn
// N có không quá 1000 bit.

// Đầu ra
// In ra xâu sau khi xóa cụm 111, chú ý khi bạn xóa 1 cụm 111 khỏi xâu ban đầu, các kí tự ở bên trái và bên phải cụm 111 này lại trở thành các kí tự liền kề nhau. Nếu sau khi xóa xâu trở thành rỗng thì in ra "EMPTY"

// Ví dụ :
// Input 01
// Copy
// 1000111
// Output 01
// Copy
// 1000

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    string s;
    cin >> s;
    while(s.find("111") != string::npos){
        s.erase(s.find("111"), 3);
    }
    if(s.size() == 0){
        cout << "EMPTY";
    } else {
        cout << s;
    }
    return 0;
}