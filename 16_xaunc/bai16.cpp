// [Xâu Ký Tự]. Bài 16. Chuẩn hóa tên 1
// Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người bằng cách viết hoa chữ cái đầu tiên của từng từ và viết thường các chữ cái còn lại.

// Xâu tiếp theo là ngày sinh của người này, bao gồm ngày tháng năm phân cách nhau bằng dấu '/', hãy chuẩn hóa ngày sinh của người này về đúng dạng dd/mm/yyyy.

// Đầu vào
// Dòng đầu tiên là tên người

// Dòng thứ 2 là ngày sinh

// Giới hạn
// Xâu kí tự tên người có không quá 2000 kí tự

// Xâu ngày sinh có không quá 10 kí tự. Dữ liệu đảm bảo có dấu '/' giữa ngày, tháng, năm.

// Đầu ra
// Dòng đầu tiên in ra tên người sau khi chuẩn hóa.

// Dòng thứ 2 in ra ngày sinh sau khi đưa về dạng chuẩn dd/mm/yyyy.

// Ví dụ :
// Input 01
// Copy
// Le tHI  hoNG   NHunG
// 30/7/1991
// Output 01
// Copy
// Le Thi Hong Nhung
// 30/07/1991

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string w;
    string b;
    while(ss >> w){
        if(w[0] >= 97 && w[0] <= 122){
            w[0] -= 32;
        }
        for(int i = 1; i < w.size(); i++){
            if(w[i] >= 65 && w[i] <= 90){
                w[i] += 32;
            }
        }
        b += w + " ";
    }
    string t;
    getline(cin, t);
    t.push_back('/');
    string c; 
    string result;
    for(int i = 0; i < t.size(); i++){
        if(t[i] != '/'){
            c.push_back(t[i]);
        } else {
            if(c.size() == 1){
                c.insert(0, "0");
                result += c + '/';
                c.clear();
                
            } else {
                result += c + '/';
                c.clear();
            }
            
        }
    }
    
    result.erase(result.size()-1, 1);
    cout << b << endl;
    cout << result;
    return 0;
}
