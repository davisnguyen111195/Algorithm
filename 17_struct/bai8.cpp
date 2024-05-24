// [Struct]. Bài 8. Sắp xếp sinh viên theo địa chỉ
// Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Thực hiện sắp xếp sinh viên theo địa chỉ tăng dần về thứ tự từ điển, nếu 2 sinh viên cùng địa chỉ thì sinh viên nào có gpa cao hơn sẽ xếp trước.

// Đầu vào
// Dòng đầu là N : số lượng sinh viên. Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

// Giới hạn
// 1<=N<=1000

// Tên sinh viên có không quá 50 kí tự

// Địa chỉ không quá 20 kí tự; Gpa là số thực trong khoảng từ 0 tới 4

// Đầu ra
// In ra danh sách sinh viên sau khi sắp xếp. Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.

// Ví dụ :
// Input 01
// Copy
// 5
// Do Manh Tuan
// 9/7/2004
// Bac Ninh
// 2.00
// Vu Phuong Vinh
// 15/8/2004
// Hai Duong
// 0.70
// Vu Mai Tuan
// 26/10/2004
// Nghe An
// 1.90
// Nguyen Lam Vinh
// 17/9/2004
// Nghe An
// 0.20
// Nguyen Phuong Nhung
// 20/5/2004
// Ninh Binh
// 3.20
// Output 01
// Copy
// Do Manh Tuan 9/7/2004 Bac Ninh 2.00
// Vu Phuong Vinh 15/8/2004 Hai Duong 0.70
// Vu Mai Tuan 26/10/2004 Nghe An 1.90
// Nguyen Lam Vinh 17/9/2004 Nghe An 0.20
// Nguyen Phuong Nhung 20/5/2004 Ninh Binh 3.20


#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string ten;
    string ngaySinh;
    string diaChi;
    double gpa;

    SinhVien(string _ten, string _ngaySinh, string _diaChi, double _gpa){
        ten = _ten;
        ngaySinh = _ngaySinh;
        diaChi = _diaChi;
        gpa = _gpa;
    }

    void showInfor(){
        cout << ten << " " << ngaySinh;
        cout << " " << diaChi << " " << fixed << setprecision(2) << gpa << endl;
    }
};
bool cmp(SinhVien a, SinhVien b){
    if(a.diaChi != b.diaChi){
        return a.diaChi < b.diaChi;
    } else {
        return a.gpa > b.gpa;
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    vector<SinhVien> a;
    for(int i = 0; i < n; i++){
        string tenSV, ngaySinhSV, diaChiSV;
        double gpaSV;
        cin.ignore();
        getline(cin, tenSV);
        getline(cin, ngaySinhSV);
        getline(cin, diaChiSV);
        cin >> gpaSV;
        SinhVien sv1(tenSV, ngaySinhSV, diaChiSV, gpaSV);
        a.push_back(sv1);
    }

    sort(a.begin(), a.end(), cmp);
    for(SinhVien item: a){
        item.showInfor();
    }
    return 0;
}