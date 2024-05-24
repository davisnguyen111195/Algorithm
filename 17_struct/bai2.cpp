// [Struct]. Bài 2. Cấu trúc số phức
// Xây dựng cấu trúc số phức gồm phần thực, phần ảo. Tiến hành nhập 2 số phức và tính tổng, hiệu, tích của 2 số phức này và in ra màn hình.

// Đầu vào
// Dòng 1 là phần thực và ảo của số phức thứ 1.

// Dòng 2 là phần thực và ảo của số phức thứ 2.

// Giới hạn
// Phần thực, ảo của số phức là các số nguyên nằm trong đoạn từ [-1000, 1000]

// Đầu ra
// Lần lượt in ra tổng, hiệu, tích của 2 số phức trên từng dòng.

// Ví dụ :
// Input 01
// Copy
// 972 646
// 787 474
// Output 01
// Copy
// 1759 1120
// 185 172
// 458760 969130

#include <bits/stdc++.h>

using namespace std;

struct SoPhuc{
    int thuc;
    int ao;
    void showInfor(){
        cout << thuc << " " << ao;
    }
};

int main(){
    int t = 2;
    SoPhuc a[2];
    SoPhuc tong = {0, 0};
    SoPhuc hieu = {0, 0};
    SoPhuc tich = {1, 1};
    for(int i = 0; i < 2; i++){
        cin >> a[i].thuc >> a[i].ao;
        tong.thuc += a[i].thuc;
        tong.ao += a[i].ao;
    }
    hieu.thuc = a[0].thuc - a[1].thuc;
    hieu.ao = a[0].ao - a[1].ao;
    tong.showInfor();
    cout << endl;
    hieu.showInfor();
    cout << endl;
    tich.thuc = a[0].thuc * a[1].thuc - a[0].ao * a[1].ao;
    tich.ao = a[0].thuc * a[1].ao + a[0].ao * a[1].thuc;
    tich.showInfor();
    return 0;
}
