// [OOP]. Bài 3. Lớp sinh viên 2
// Viết chương trình khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Lớp, Ngày sinh và Điểm GPA (dạng số thực double).

// Hàm khởi tạo không có tham số, gán các giá trị thuộc tính chuỗi ở dạng xâu rỗng, số bằng 0.

// Đọc thông tin 1 sinh viên từ bàn phím và in ra màn hình. Mã SV được gán là SV001 và ngày sinh được chuẩn hóa về dạng chuẩn dd/mm/yyyy

// Gợi ý :

// Copy
// class SinhVien{
// private:
//     string ma, ten, lop, ngaySinh;
//     double gpa;
// public:
//     SinhVien();
//     SinhVien(string, string, string, string, double);
//     void chuanHoa(); // chuan hoa ngay sinh
//     void hienThi(); // in thong tin
// }
// Đầu vào
// Gồm 4 dòng lần lượt là tên, lớp, ngày sinh và điểm

// Giới hạn
// N/A

// Đầu ra
// In ra thông tin của sinh viên cách nhau 1 dấu cách, điểm gpa lấy 1 số sau dấu phẩy

// Ví dụ :
// Input 01
// Copy
// Nguyen Ngoc Long
// CNTT1
// 16/8/2001
// 2.8
// Output 01
// Copy
// SV001 Nguyen Ngoc Long CNTT1 16/08/2001 2.8

#include <bits/stdc++.h>


using namespace std;

class SinhVien{
private:
    string ma, ten, lop, ns;
    double gpa;
public:
    SinhVien();
    SinhVien(string ma, string ten, string lop, string ns, double gpa){
        this->ma = ma;
        this->ten = ten;
        this->lop = lop;
        this->ns = ns;
        this->gpa = gpa;
    }

    void chuanHoa(string ns){
        string tmp = ns;
        vector<string> ss;
        tmp += "/";
        string w;
        for(int i = 0; i < (int)tmp.size(); i++){
            if(tmp[i] != '/'){
                w.push_back(tmp[i]);
            } else {
                ss.push_back(w);
                w.clear();
            }
        }
        if(stoi(ss[0]) <= 9){
            ss[0] = "0" + ss[0];
        }
        if(stoi(ss[1]) <= 9){
            ss[1] = "0" + ss[1];
        }
        tmp = ss[0] + "/" + ss[1] + "/" + ss[2];
        this->ns = tmp;
    }

    void in(){
        cout << "SV001" << " " << ten << " " << lop << " " << ns << " " << fixed << setprecision(1) << gpa;
    }
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<string> ss;
    string s;
    while(getline(cin, s)){
        ss.push_back(s);
    }

    SinhVien sv("SV001", ss[0], ss[1], ss[2], stod(ss[3]));

    sv.chuanHoa(ss[2]);
    sv.in();

    return 0;
}