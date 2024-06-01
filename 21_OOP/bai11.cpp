// [OOP]. Bài 11. Tính lương NV
// Thông tin về nhân viên bao gồm: Mã nhân viên (tự động tăng theo thứ tự nhập, tính từ NV01, nếu chỉ có 1 nhân viên thì mã là NV01) - Họ và tên - Lương cơ bản mỗi ngày công - Số ngày công - Chức vụ Tiền lương được tính bằng lương cơ bản nhân với số ngày công. Giả sử quy tắc tính tiền thưởng như sau:

// • Số ngày công từ 25 trở lên thì thưởng 20% tiền lương

// • Số ngày công từ 22 đến dưới 25 thì thưởng 10% tiền lương

// • Dưới 22 ngày công thì không có thưởng. Mỗi nhân viên có thể có thêm phụ cấp chức vụ:

// • GD: 250000

// • PGD: 200000

// • TP: 180000

// • NV: 150000

// Hãy nhập thông tin 1 nhân viên và tính toán thu nhập theo quy tắc trên.

// Đầu vào
// Gồm 4 dòng lần lượt ghi Họ tên, lương cơ bản, số ngày công và chức vụ

// Số ngày công là số nguyên không âm không vượt quá 31

// Giới hạn
// Lương cơ bản là số nguyên dương không quá 10^7

// Đầu ra
// Ghi ra một dòng gồm: mã nhân viên, tên nhân viên, lương tháng, thưởng, phụ cấp và thu nhập. Mỗi thông tin cách nhau một khoảng trống.

// Ví dụ :
// Input 01
// Copy
// Nguyen Van Teo
// 26000
// 21
// PGD
// Output 01
// Copy
// NV01 Nguyen Van Teo 546000 0 200000 746000

#include <bits/stdc++.h>

using namespace std;

class NhanVien{
private:
    string ten;
    long long lcb;
    int ngaycong;
    string chucvu;

public:
    NhanVien();
    NhanVien(string ten, long long lcb, int ngaycong, string chucvu){
        this->ten = ten;
        this->lcb = lcb;
        this->ngaycong = ngaycong;
        this->chucvu = chucvu;
    }
    long long getPhucapChucVu(string chucVu){
        long long phucap = 0;
        if(chucvu == "GD"){
            phucap = 250000;
        } else if(chucvu == "PGD"){
            phucap = 200000;
        } else if(chucvu == "TP"){
            phucap = 180000;
        } else {
            phucap = 150000;
        }
        return phucap;
    }

    double getThuong(int ngaycong){
        double thuong = 0;
        if(ngaycong >= 25){
            thuong = 0.2;
        } else if(22 <= ngaycong && ngaycong < 25){
            thuong = 0.1;
        } else {
            thuong = 0;   
        }

        return thuong;
    }

    long long getThuNhap(){
        long long luongcb = this->lcb * this->ngaycong;
        return luongcb + luongcb * getThuong(this->ngaycong) + getPhucapChucVu(this->chucvu);
    }

    void showInfor(){
        cout << this-> ten << " " << this->lcb * this->ngaycong << " ";
        cout << getThuong(this->ngaycong) * this->lcb * this->ngaycong << " " << getPhucapChucVu(this->chucvu) << " " << getThuNhap();
    }
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    vector<string> vS;
    while(getline(cin, s)){
        vS.push_back(s);
    }

    long long lcb = stoll(vS[1]);
    int ngaycong = stoi(vS[2]);
    NhanVien nv(vS[0], lcb, ngaycong, vS[3]);
    cout << "NV01 ";
    nv.showInfor();
    return 0;
}