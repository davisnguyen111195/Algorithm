// [Xâu Ký Tự]. Bài 18. Tạo email & mật khẩu
// Hiện tại trường đại học XYZ tổ chức cấp email cho sinh viên mới nhập học. Email và mật khẩu sẽ được cấp dựa trên tên của sinh viên và ngày sinh của sinh viên đó. Bạn hãy viết chương trình để cấp tài khoản theo yêu cầu như sau, tên email được tạo bằng cách lấy tên của sinh viên và ghép với các chữ cái đầu tiên của họ và tên đệm, tất các ký tự trong email đều ở dạng in thường

// Ví dụ : sinh viên có tên "Nguyen Van Long" sẽ được cấp email "longnv@xyz.edu.vn".

// Mật khẩu sẽ dựa trên ngày sinh của sinh viên đó, bằng cách ghép ngày tháng năm lại với nhau

// Ví dụ : sinh viên sinh ngày 27/04/2002 sẽ có mật khẩu là 2742002.

// Đầu vào
// Dòng đầu tiên là số lượng sinh viên cần cấp email N.

// N dòng tiếp theo, mỗi dòng gồm 2 phần là họ tên và ngày sinh, ngày sinh của sinh viên đã ở dạng chuẩn dd/mm/yyyy.

// Giữa các từ có thể có nhiều dấu cách, từ cuối cùng trong dòng là thông tin ngày sinh của sinh viên(xâu kí tự không có dấu cách chuẩn dd/mm/yyyy).

// Giới hạn
// 1≤N≤5000

// Dòng thông tin của sinh viên không quá 1000 kí tự, dữ liệu đảm bảo thông tin cuối cùng trong dòng là ngày sinh của sinh viên.

// Đầu ra
// Đối với mỗi sinh viên in ra thông tin trên 2 dòng, dòng thứ 1 là tên email, dòng thứ 2 là mật khẩu.

// Ví dụ :
// Input 01
// Copy
// 2
// nguyen   van   nam 20/07/1993
// le   thi   HONG nHUNG 30/07/1991
// Output 01
// Copy
// namnv@xyz.edu.vn
// 2071993
// nhunglth@xyz.edu.vn
// 3071991


#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string w;
        vector<string> vS;
        while(ss >> w){
            vS.push_back(w);
        }
        int vSS = vS.size();

        string name = vS[vSS-2];
        for(int i = 0; i < name.size(); i++){
            if(name[i] >= 65 && name[i] <= 90){
                name[i] += 32;
            }
        }
        cout << name;
        for(int i = 0; i < vSS-2; i++){
            if(vS[i][0] >= 65 && vS[i][0] <= 90){
                vS[i][0] += 32;
            }
            cout << vS[i][0];
        }
        cout << "@xyz.edu.vn";
        cout << endl;
        string pass = vS.back();
        vector<string> vPass;
        pass.push_back('/');
        string tmp;
        for(int i = 0; i < pass.size(); i++){
            if(pass[i] != '/'){
                tmp.push_back(pass[i]);
            } else {
                if(tmp[0] == '0'){
                    tmp.erase(0, 1);
                    cout << tmp;
                    tmp.clear();
                } else {
                    cout << tmp;
                    tmp.clear();
                }
            }
            
        }
        cout << endl;
    }
    return 0;
}
