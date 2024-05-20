// [Xâu Ký Tự]. Bài 19. Tạo email và mật khẩu 2
// • Trường đại học ABC tổ chức cấp email cho sinh viên mới nhập học. Email và mật khẩu sẽ được cấp dựa trên tên của sinh viên và ngày sinh của sinh viên đó. Bạn hãy viết chương trình để cấp tài khoản theo yêu cầu như sau, tên email được tạo bằng cách lấy tên của sinh viên và ghép với các chữ cái đầu tiên của họ và tên đệm tất các ký tự trong email đều ở dạng in thường, ví dụ sinh viên có tên "Nguyen Van Long" sẽ được cấp email "longnv@xyz.edu.vn".

// • Mật khẩu sẽ dựa trên ngày sinh của sinh viên đó, bằng cách ghép ngày tháng năm lại với nhau, ví dụ sinh viên sinh ngày 27/04/2002 sẽ có mật khẩu là 2742002. Ngoài ra sẽ có những trường hợp sinh viên bị trùng tên email, ví dụ, sinh viên "Nguyen Van Long" sẽ được cấp email "longnv@xyz.edu.vn", sinh viên tên "Ngo Van Long" cũng sẽ được cấp email "longnv@xyz.edu.vn", vì thế nhà trường quy định, theo thứ tự tên trong danh sách, nếu email được cấp của sinh viên hiện tại đã được cấp cho một sinh viên trước đó thì thêm số thứ tự vào tên email.

// Đầu vào
// • Dòng đầu tiên là số lượng sinh viên cần cấp email N.

// • N dòng tiếp theo, mỗi dòng gồm 2 phần là họ tên và ngày sinh, ngày sinh của sinh viên đã ở dạng chuẩn dd/mm/yyyy. Giữa các từ có thể có nhiều dấu cách, từ cuối cùng trong dòng là thông tin ngày sinh của sinh viên(xâu kí tự không có dấu cách chuẩn dd/mm/yyyy).

// Giới hạn
// • 1≤N≤5000

// • Dòng thông tin của sinh viên không quá 1000 kí tự, dữ liệu đảm bảo thông tin cuối cùng trong dòng là ngày sinh của sinh viên.

// Đầu ra
// In ra ra email và mật khẩu được cấp của mỗi sinh viên trên 2 dòng.

// Chú ý các sinh viên email bị trùng tên sẽ được thêm số thứ tự vào sau.

// Ví dụ :
// Input 01
// Copy
// 5
// nguyen   van LONg 20/10/2002
// ngo Vang Long 20/12/2002
// Nguyen  Vu Long 22/12/2003
// ho van  nam 17/09/2002
// nguyen   vo LONG 20/10/1999
// Output 01
// Copy
// longnv@xyz.edu.vn
// 20102002
// longnv2@xyz.edu.vn
// 20122002
// longnv3@xyz.edu.vn
// 22122003
// namhv@xyz.edu.vn
// 1792002
// longnv4@xyz.edu.vn
// 20101999

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    map<string, int> db;
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string w;
        string email;
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
        email += name;
        //cout << name;
        for(int i = 0; i < vSS-2; i++){
            if(vS[i][0] >= 65 && vS[i][0] <= 90){
                vS[i][0] += 32;
            }
            //cout << vS[i][0];
            email.push_back(vS[i][0]);
        }

        //cout << "@xyz.edu.vn";
        
        if(db[email] == 0){
            db[email]++;
        } else {
            int stt = db[email] + 1;
            db[email]++;
            string sttString = to_string(stt);
            email.insert(email.size(), sttString);
            
        }
        email += "@xyz.edu.vn";
        cout << email;
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
