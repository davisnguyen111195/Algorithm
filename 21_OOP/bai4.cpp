// [OOP]. Bài 4. Lớp Nhân Viên 1
// Một nhân viên làm việc trong công ty được lưu lại các thông tin sau:

// Mã nhân viên: được gán giá trị là 00001

// Họ tên: Xâu ký tự không quá 50 chữ cái.

// Giới tính: Nam hoặc Nu
// Ngày sinh: đúng theo chuẩn dd/mm/yyyy

// Địa chỉ: Xâu ký tự không quá 100 chữ cái

// Mã số thuế: Dãy số có đúng 10 chữ số

// Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy

// Viết chương trình nhập một nhân viên (không nhập mã) in ra màn hình thông tin của nhân viên đó.

// Đầu vào
// Gồm 6 dòng tương ứng với 6 thông tin từ 2 tới 7, mã được gán là 00001

// Giới hạn
// N/A

// Đầu ra
// In ra thông tin của nhân viên, mỗi thông tin viết cách nhau 1 dấu cách

// Ví dụ :
// Input 01
// Copy
// Nguyen Thi Nhung
// Nu
// 28/09/1999
// Ha Nam
// 8850288467
// 13/07/2021
// Output 01
// Copy
// 00001 Nguyen Thi Nhung Nu 28/09/1999 Ha Nam 8850288467 13/07/2021

#include <bits/stdc++.h>

using namespace std;

class NhanVien{
private:
    string ma;
    string ten;
    string sex;
    string ns;
    string diachi;
    string masothue;
    string ngayhd;
public:
    NhanVien();
    NhanVien(string ma, string ten, string sex, string ns, 
            string diachi, string masothue, string ngayhd){
        this->ma = ma;
        this->ten = ten;
        this->sex = sex;
        this->ns = ns;
        this->diachi = diachi;
        this->masothue = masothue;
        this->ngayhd = ngayhd;
    }
    void in(){
        cout << ma << " " << ten << " ";
        cout << sex << " " << ns << " ";
        cout << diachi << " " << masothue << " ";
        cout << ngayhd << endl;
    }
};

int main(){
    int t = 6;
    string s;
    vector<string> vS;
    while(getline(cin, s)){
        vS.push_back(s);
    }
    NhanVien nv("00001", vS[0], vS[1], vS[2], vS[3], vS[4], vS[5]);
    nv.in();
    return 0;
}
