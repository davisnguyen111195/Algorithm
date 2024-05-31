// [OOP]. Bài 2. Class Học Sinh
// Xây dựng lớp Học Sinh gồm các thuộc tính :

// Họ tên

// Ngày sinh

// Điểm 3 môn toán, lý, hóa

// Tiến hành nhập thông tin 1 học sinh từ bàn phím và in ra thông tin về họ tên, ngày sinh, tổng điểm 3 môn lấy 1 số đằng sau dấu phẩy.

// Gợi ý xây dựng lớp Học Sinh :

// Copy
// class HocSinh{
// private:
//     string ten, ngaysinh;
//     double toan, ly, hoa;
// public:
//     HocSinh();
//     HocSinh(string, string, double, double, double);
//     void hienthi();
// }
// Đầu vào
// Dòng 1 là họ tên

// Dòng 2 là ngày sinh

// Dòng 3, 4, 5 là điểm toán, lý, hóa

// Giới hạn
// Họ tên và ngày sinh là chuỗi không quá 100 ký tự

// Điểm 3 môn toán, lý, hóa là số thực hệ số 10

// Đầu ra
// In ra thông tin của học sinh, mỗi thông tin viết cách nhau 1 dấu cách

// Ví dụ :
// Input 01
// Copy
// Le Thi Hong Nhung
// 30/07/1999
// 3
// 4
// 5
// Output 01
// Copy
// Le Thi Hong Nhung 30/07/1999 12.0

#include <bits/stdc++.h>

using namespace std;

class HocSinh{
private:
    string ten, ns;
    double toan, ly, hoa;
    double tong;
public:
    HocSinh();
    HocSinh(string ten, string ns, double toan, double ly, double hoa){
        this->ten = ten;
        this->ns = ns;
        this->toan = toan;
        this->ly = ly;
        this->hoa = hoa;
        this->tong = this->toan + this->ly + this->hoa;
    }


    void hienThi(){
        cout << ten << " " << ns << " " << fixed << setprecision(1) << tong << endl;
    }
};


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    vector<string> ss;
    for(int i = 0; i < 5; i++){
        string s;
        getline(cin, s);
        ss.push_back(s);
    }

    HocSinh hs(ss[0], ss[1], stod(ss[2]), stod(ss[3]), stod(ss[4]));
    hs.hienThi();

    return 0;
}