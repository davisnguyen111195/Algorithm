// [Struct]. Bài 6. Sinh viên khá
// Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Lọc ra những sinh viên quê ở Nam Định có GPA >= 2.5

// Đầu vào
// Dòng đầu là N : số lượng sinh viên. Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

// Giới hạn
// 1<=N<=1000

// Tên sinh viên có không quá 50 kí tự

// Địa chỉ không quá 20 kí tự; Gpa là số thực trong khoảng từ 0 tới 4

// Đầu ra
// In ra danh sách sinh viên thỏa mãn điều kiện tìm kiếm. Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.

// Ví dụ :
// Input 01
// Copy
// 7
// Nguyen Mai Vinh
// 15/5/2004
// Nam Dinh
// 1.80
// Pham Manh Vinh
// 25/5/2004
// Ninh Binh
// 0.70
// Vu Mai Phuong
// 8/5/2004
// Ninh Binh
// 0.60
// Nguyen Mai Vinh
// 7/4/2004
// Hai Duong
// 1.20
// Pham Phuong Tuan
// 8/2/2004
// Bac Ninh
// 2.00
// Do Manh Nhung
// 27/10/2004
// Nam Dinh
// 3.90
// Vu Mai Vinh
// 28/8/2004
// Nghe An
// 2.00
// Output 01
// Copy
// Do Manh Nhung 27/10/2004 Nam Dinh 3.90

#include <bits/stdc++.h>

using namespace std;
struct SinhVien{
    string ten;
    string ngaySinh;
    string que;
    double gpa;
    void showInfor(){
        cout << ten << " " << ngaySinh << " " << que << " " << fixed << setprecision(2) << gpa;
    }
};


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

    for(auto item: a){
        if(item.que == "Nam Dinh" && item.gpa >= 2.5){
            item.showInfor();
            cout << endl;
        }
    }
    return 0;
}
