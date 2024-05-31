// [OOP]. Bài 5. Lớp nhân viên 2
// Một nhân viên làm việc trong công ty được lưu lại các thông tin sau:

// Mã nhân viên: được gán giá trị là 00001.
// Họ tên: Xâu ký tự không quá 50 chữ cái.

// Giới tính: Nam hoặc Nu.

// Ngày sinh, có thể chưa chuẩn nhưng đủ 3 phần và phân cách bởi dấu /.

// Địa chỉ: Xâu ký tự không quá 100 chữ cái.

// Mã số thuế: Dãy số có đúng 10 chữ số.

// Ngày ký hợp đồng, có thể chưa chuẩn nhưng đủ 3 phần và phân cách bởi dấu /.

// Viết chương trình nhập một nhân viên (không nhập mã) in ra màn hình thông tin của nhân viên đó. Tên nhân viên được chuẩn hóa về dạng viết hoa chữ cái đầu của từng từ, ngày sinh và ngày ký hợp đồng về đúng dạng chuẩn dd/mm/yyyy

// Đầu vào
// Gồm 6 dòng thông tin từ mục 2 tới mục 7

// Giới hạn
// N/A

// Đầu ra
// In ra thông tin của nhân viên sau khi chuẩn hóa tên, ngày sinh và ngày ký hợp đồng

// Ví dụ :
// Input 01
// Copy
// Hoang Dinh NAM
// Nam
// 9/9/1998
// Bac Ninh
// 8743766435
// 10/2/2021
// Output 01
// Copy
// 00001 Hoang Dinh Nam Nam 09/09/1998 Bac Ninh 8743766435 10/02/2021

#include <bits/stdc++.h>

using namespace std;
class NhanVien{
private:
    string ma;
    string ten;
    string sex;
    string ns;
    string dc;
    string masothue;
    string ngayhd;
public:
    NhanVien();
    NhanVien(string ma, string ten, string sex, string ns, string dc, string masothue, string ngayhd){
        this->ma = ma;
        this->ten = ten;
        this->sex = sex;
        this->ns = ns;
        this->dc = dc;
        this->masothue = masothue;
        this->ngayhd = ngayhd;
    }

    void setns(string ns){
        this->ns = ns;
    }
    void setngayhd(string ngayhd){
        this->ngayhd = ngayhd;
    }
    void chuanHoaten(){
        string result;
        string name = this->ten;
        stringstream ss(name);
        string w;
        while(ss >> w){
            w[0] = toupper(w[0]);
            for(int i = 1; i < w.size(); i++){
                w[i] = tolower(w[i]);
            }
            result += w + " ";
        }
        this->ten = result;
    }

    string chuanHoangay(string n){
        n += "/";
        string b;
        vector<string> vS;
        for(int i = 0; i < n.size(); i++){
            if(n[i] != '/'){
                b.push_back(n[i]);
            } else {
                vS.push_back(b);
                b.clear();
            }
        }

        if(stoi(vS[0]) <= 9){
            vS[0] = "0" + vS[0];
        }

        if(stoi(vS[1]) <= 9){
            vS[1] = "0" + vS[1];
        }
        return vS[0] + "/" + vS[1] + "/" + vS[2];
    }
    void in(){
        cout << ma << " " << ten << " ";
        cout << sex << " " << ns << " ";
        cout << dc << " " << masothue << " ";
        cout << ngayhd << endl;
    }
};
int main(){
    string w;
    vector<string> vS;
    while(getline(cin, w)){
        vS.push_back(w);
    }
    NhanVien nv("00001", vS[0], vS[1], vS[2], vS[3], vS[4], vS[5]);
    nv.chuanHoaten();
    string ngaySinh = nv.chuanHoangay(vS[2]);
    nv.setns(ngaySinh);
    nv.setngayhd(nv.chuanHoangay(vS[5]));
    nv.in();
    return 0;
}
