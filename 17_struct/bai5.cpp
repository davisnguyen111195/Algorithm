// [Struct]. Bài 5. Sắp xếp sinh viên theo tên
// Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Thực hiện sắp xếp sinh viên theo thứ tự từ điển nếu có 2 sinh viên cùng tên thì bạn nào xếp trước trong danh sách được in ra trước.

// Đầu vào
// Dòng đầu là N : số lượng sinh viên.

// Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

// Giới hạn
// 1<=N<=1000

// Tên sinh viên có không quá 50 kí tự

// Địa chỉ không quá 20 kí tự; Gpa là số thực trong khoảng từ 0 tới 4

// Đầu ra
// In ra danh sách sinh viên sau khi sắp xếp. Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.

// Ví dụ :
// Input 01
// Copy
// 6
// Vu Mai Nhung
// 20/8/2004
// Bac Ninh
// 0.30
// Pham Hoai Vinh
// 1/8/2004
// Ninh Binh
// 3.20
// Nguyen Lam Nhung
// 16/9/2004
// Ninh Binh
// 1.50
// Pham Hoai Nhung
// 18/6/2004
// Hai Duong
// 3.70
// Do Mai Phuong
// 25/2/2004
// Bac Ninh
// 1.60
// Do Manh Nam
// 16/6/2004
// Bac Ninh
// 3.90
// Output 01
// Copy
// Do Mai Phuong 25/2/2004 Bac Ninh 1.60
// Do Manh Nam 16/6/2004 Bac Ninh 3.90
// Nguyen Lam Nhung 16/9/2004 Ninh Binh 1.50
// Pham Hoai Nhung 18/6/2004 Hai Duong 3.70
// Pham Hoai Vinh 1/8/2004 Ninh Binh 3.20
// Vu Mai Nhung 20/8/2004 Bac Ninh 0.30

#include <bits/stdc++.h>

using namespace std;
struct SinhVien{
    string ten;
    string ngaySinh;
    string diaChi;
    double gpa;
    void showInfor(){
        cout << ten << " " << ngaySinh;
        cout << " " << diaChi << " " << fixed << setprecision(2) << gpa;
    }
};

bool cmp(SinhVien a, SinhVien b){
    return a.ten < b.ten;
}
int main(){
    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].ten);
        getline(cin, a[i].ngaySinh);
        getline(cin, a[i].diaChi);
        cin >>  a[i].gpa;
    }

    stable_sort(a, a+n, cmp);
    for(SinhVien item: a){
        item.showInfor();
        cout << endl;
    }
    return 0;
}
