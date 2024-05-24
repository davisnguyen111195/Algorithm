// [Struct]. Bài 7. Đuổi học sinh viên
// Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Dựa vào kết quả GPA những sinh viên nào có điểm gpa < 1.0 sẽ bị đuổi học, nhiệm vụ của bạn là xóa những sinh viên có gpa < 1.0 sau đó in ra danh sách sinh viên còn lại.

// Đầu vào
// Dòng đầu là N : số lượng sinh viên. Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

// Giới hạn
// 1<=N<=1000

// Tên sinh viên có không quá 50 kí tự; Địa chỉ không quá 20 kí tự; Gpa là số thực trong khoảng từ 0 tới 4

// Đầu ra
// In ra danh sách sinh viên sau khi xóa. Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.

// Ví dụ :
// Input 01
// Copy
// 5
// Do Lam Phuong
// 9/7/2004
// Nam Dinh
// 2.50
// Pham Lam Vinh
// 22/11/2004
// Nghe An
// 0.60
// Nguyen Mai Vinh
// 21/10/2004
// Nam Dinh
// 3.80
// Nguyen Mai Phuong
// 24/3/2004
// Nam Dinh
// 4.00
// Vu Lam Vinh
// 24/6/2004
// Nam Dinh
// 1.90
// Output 01
// Copy
// Do Lam Phuong 9/7/2004 Nam Dinh 2.50
// Nguyen Mai Vinh 21/10/2004 Nam Dinh 3.80
// Nguyen Mai Phuong 24/3/2004 Nam Dinh 4.00
// Vu Lam Vinh 24/6/2004 Nam Dinh 1.90

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
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    vector<SinhVien> vSV;
    while(n--){
        string tenSV, ngaySinhSV, diaChiSV;
        double gpaSV;
        cin.ignore();
        getline(cin, tenSV);
        getline(cin, ngaySinhSV);
        getline(cin, diaChiSV);
        cin >> gpaSV;
        SinhVien sv1(tenSV, ngaySinhSV, diaChiSV, gpaSV);
        vSV.push_back(sv1);
    }
    vector<int> xoa;
    for(int i = 0; i < vSV.size(); i++){
        if(vSV[i].gpa < 1.0){
            xoa.push_back(i);
        }
    }

    while(xoa.size() != 0){
        auto it = vSV.begin() + xoa.back();
        vSV.erase(it);
        xoa.pop_back();
    }

    for(auto item: vSV){
        item.showInfor();
    }
    
    return 0;
}