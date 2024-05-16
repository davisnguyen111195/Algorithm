// [Xâu Ký Tự Cơ Bản]. Bài 11. Ngày sinh
// Cho ngày sinh của một người theo dạng ngày/tháng/năm. Bạn hãy chuẩn hóa ngày sinh này về dạng dd/mm/yyyy.

// Ví dụ : nếu ngày sinh là 1/10/2002 thì được chuẩn hóa thành 01/10/2002, hoặc 5/2/2002 thì được chuẩn hóa thành 05/02/2002.

// Đầu vào
// Dòng duy nhất chứa 1 xâu mô tả ngày sinh

// Giới hạn
// Các phần ngày, tháng, năm được phân cách nhau bởi dấu /, năm là số có 4 chữ số.

// Đầu ra
// In ra ngày sinh sau khi chuẩn hóa

// Ví dụ :
// Input 01
// Copy
// 30/7/1991
// Output 01
// Copy
// 30/07/1991

#include <bits/stdc++.h>

using namespace std;

void inYc(int n){
    if(n < 10){
        cout << 0 << n << "/";
    } else {
        cout << n << "/";
    }
}

int main(){
    string s;
    getline(cin, s);
    s.push_back('/');
    vector<int> viX;
    int sum = 0;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] != '/'){
            int x = s[i] - '0';
            sum = sum*10 + x;
            
        } else {
            viX.push_back(sum);
            sum = 0;
        }
    }

    if(viX[0] < 10){
        cout << 0 << viX[0];
    } else {
        cout << viX[0];
    }
    cout << "/";
    if(viX[1] < 10){
        cout << 0 << viX[1];
    } else {
        cout << viX[1];
    }
    cout << "/";
    cout << viX[2];
    return 0;
    
}