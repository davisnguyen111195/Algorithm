// [Struct]. Bài 9. Địa chỉ sinh viên
// Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Bạn hãy tìm ra tỉnh thành có nhiều sinh viên nhất, nếu có nhiều tỉnh thành có cùng số lượng sinh viên thì in ra hết theo thứ tự từ điển.

// Đầu vào
// Dòng đầu là N : số lượng sinh viên. Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

// Giới hạn
// 1<=N<=1000

// Tên sinh viên có không quá 50 kí tự

// Địa chỉ không quá 20 kí tự; Gpa là số thực trong khoảng từ 0 tới 4

// Đầu ra
// In ra các tỉnh thành thỏa mãn, mỗi tỉnh thành trên 1 dòng.

// Ví dụ :
// Input 01
// Copy
// 6
// Tran Phuong Phuong
// 15/7/2004
// Hai Duong
// 0.20
// Nguyen Phuong Phuong
// 5/7/2004
// Ninh Binh
// 0.70
// Tran Mai Vinh
// 19/12/2004
// Bac Ninh
// 2.50
// Nguyen Phuong Phuong
// 4/12/2004
// Bac Ninh
// 3.90
// Do Hoai Nam
// 18/8/2004
// Nam Dinh
// 2.30
// Tran Manh Nam
// 24/3/2004
// Nghe An
// 1.20
// Output 01
// Copy
// Bac Ninh


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
    vector<SinhVien> a;
    map<string, int> mS;
    int maxDia = -1;
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
        mS[diaChiSV]++;
        maxDia = max(maxDia, mS[diaChiSV]);
    }
    for(auto item: mS){
        if(item.second == maxDia){
            cout << item.first << endl;
        }
    }

    return 0;
}