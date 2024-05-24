// [Struct]. Bài 10. Sinh viên tháng 4
// Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Bạn hãy liệt kê các sinh viên sinh vào tháng 4.

// Đầu vào
// Dòng đầu là N : số lượng sinh viên. Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

// Giới hạn
// 1<=N<=1000

// Tên sinh viên có không quá 50 kí tự

// Địa chỉ không quá 20 kí tự

// Gpa là số thực trong khoảng từ 0 tới 4

// Đầu ra
// In ra danh sách sinh viên thỏa mãn. Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.

// Ví dụ :
// Input 01
// Copy
// 6
// Do Mai Nam
// 13/8/2004
// Nam Dinh
// 0.50
// Do Manh Nam
// 19/7/2004
// Ninh Binh
// 2.20
// Do Phuong Vinh
// 25/1/2004
// Hai Duong
// 3.90
// Tran Manh Nhung
// 12/8/2004
// Bac Ninh
// 3.90
// Nguyen Phuong Vinh
// 6/3/2004
// Nghe An
// 0.30
// Tran Hoai Phuong
// 23/4/2004
// Nghe An
// 3.30
// Output 01
// Copy
// Tran Hoai Phuong 23/4/2004 Nghe An 3.30

#include <bits/stdc++.h>

using namespace std;
struct SinhVien{
    string ten;
    string ngaySinh;
    int thangSinh;
    string diaChi;
    
    double gpa;

    SinhVien(string _ten, string _ngaySinh, string _diaChi, double _gpa, int _thang){
        ten = _ten;
        ngaySinh = _ngaySinh;
        diaChi = _diaChi;
        gpa = _gpa;
        thangSinh = _thang;
    }

    void showInfor(){
        cout << ten << " " << ngaySinh;
        cout << " " << diaChi << " " << fixed << setprecision(2) << gpa << endl;
    }
};
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    vector<SinhVien> a;
    int maxDia = -1;
    for(int i = 0; i < n; i++){
        string tenSV, ngaySinhSV, diaChiSV;
        double gpaSV;
        cin.ignore();
        getline(cin, tenSV);
        getline(cin, ngaySinhSV);
        getline(cin, diaChiSV);
        cin >> gpaSV;
        string tmp = ngaySinhSV;
        tmp += "/";
        vector<string> vSThang;
        string b;
        for(int i = 0; i < tmp.size(); i++){
            
            if(tmp[i] != '/'){
                b.push_back(tmp[i]);
            } else {
                vSThang.push_back(b);
                b.clear();
            }
        }
        
        int thangSinhSV = stoi(vSThang[1]);

        SinhVien sv1(tenSV, ngaySinhSV, diaChiSV, gpaSV, thangSinhSV);
        a.push_back(sv1);
    }

    for(auto item: a){
        if(item.thangSinh == 4){
            item.showInfor();
        }
    }
    return 0;
}