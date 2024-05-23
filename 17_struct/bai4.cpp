// [Struct]. Bài 4. Sắp xếp sinh viên theo GPA
// Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Thực hiện sắp xếp sinh viên theo gpa giảm dần, nếu 2 sinh viên có cùng điểm thì sinh viên nào xếp trước trong danh sách sẽ được in ra trước.

// Đầu vào
// Dòng đầu là N : số lượng sinh viên.

// Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

// Giới hạn
// 1<=N<=1000

// Tên sinh viên có không quá 50 kí tự

// Địa chỉ không quá 20 kí tự

// Gpa là số thực trong khoảng từ 0 tới 4

// Đầu ra
// In ra danh sách sinh viên sau khi sắp xếp.

// Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.

// Ví dụ :
// Input 01
// Copy
// 6
// Do Hoai Nam
// 14/6/2004
// Bac Ninh
// 3.80
// Vu Hoai Tuan
// 28/7/2004
// Nam Dinh
// 3.90
// Pham Hoai Nhung
// 24/3/2004
// Bac Ninh
// 3.80
// Tran Hoai Phuong
// 17/1/2004
// Nghe An
// 2.20
// Do Phuong Vinh
// 12/11/2004
// Nam Dinh
// 1.30
// Do Manh Nam
// 20/12/2004
// Ninh Binh
// 2.90
// Output 01
// Copy
// Vu Hoai Tuan 28/7/2004 Nam Dinh 3.90
// Do Hoai Nam 14/6/2004 Bac Ninh 3.80
// Pham Hoai Nhung 24/3/2004 Bac Ninh 3.80
// Do Manh Nam 20/12/2004 Ninh Binh 2.90
// Tran Hoai Phuong 17/1/2004 Nghe An 2.20
// Do Phuong Vinh 12/11/2004 Nam Dinh 1.30

#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string ten;
    string ngaySinh;
    string que;
    double gpa;
    void showInfor(){
        cout << ten << " " << ngaySinh << " " << que << " " <<  fixed << setprecision(2) << gpa << endl; 
    }
};

bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].ten);
        getline(cin, a[i].ngaySinh);
        getline(cin, a[i].que);
        cin >> a[i].gpa;
    }

    stable_sort(a, a+n, cmp);

    for(int i = 0; i < n; i++){
        a[i].showInfor();
    }
    
    return 0;
}