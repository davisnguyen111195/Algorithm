// [Struct]. Bài 1. Cấu trúc phân số
// Xây dựng cấu trúc phân số với 2 thành phần là tử và mẫu. Tiến hành nhập 2 phân số từ bàn phím và in ra phân số ở dạng tối giản.

// Tính tổng, hiệu của 2 phân số và in ra ở dạng tối giản. Chú ý trong trường hợp mẫu số âm thì đưa dấu âm lên trên tử

// Đầu vào
// Dòng đầu tiên là tử và mẫu của phân số thứ 1.

// Dòng thứ 2 là tử và mẫu của phân số thứ 2.

// Giới hạn
// Tử và mẫu là các số nguyên nằm nằm trong đoạn [1, 1000]

// Đầu ra
// Dòng 1 in ra phân số thứ nhất ở dạng tối giản.

// Dòng 2 in ra phân số thứ 2 ở dạng tối giản.

// Dòng 3 in ra tổng của 2 phân số ở dạng tối giản.

// Dòng 4 in ra hiệu của 2 phân số ở dạng tối giản.

// Ví dụ :
// Input 01
// Copy
// 145 639
// 911 93
// Output 01
// Copy
// 145/639
// 911/93
// 198538/19809
// -189548/19809

#include <bits/stdc++.h>

using namespace std;

struct PhanSo{
    int dau;
    int t, m;
    int gcd2So;
    
    void showInfor(){
        cout << dau*abs(t) << "/" << abs(m);
    }

    void showToiGian(){
        cout << dau*abs(t)/gcd2So << "/" << abs(m)/gcd2So;
    }

    void setDau(int t, int m){
        if(t > 0 && m > 0){
            dau = 1;
        } else if(t < 0 && m < 0){
            dau = 1;
        } else {
            dau = -1;
        }
    }
};

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int main(){
    PhanSo a[2];
    for(int i = 0; i < 2; i++){
        cin >> a[i].t >> a[i].m;
        a[i].setDau(a[i].t, a[i].m);
        a[i].gcd2So = gcd(abs(a[i].t), abs(a[i].m));
    }

    a[0].showToiGian();
    cout << endl;
    a[1].showToiGian();
    cout << endl;
    PhanSo tong;
    tong.t = a[0].t*a[1].m + a[1].t*a[0].m;
    tong.m = a[0].m*a[1].m;
    tong.setDau(tong.t, tong.m);
    tong.gcd2So = gcd(abs(tong.t), abs(tong.m));
    tong.showToiGian();

    cout << endl;
    PhanSo hieu;
    hieu.t = a[0].t*a[1].m - a[1].t*a[0].m;
    hieu.m = a[0].m*a[1].m;
    hieu.setDau(hieu.t, hieu.m);
    hieu.gcd2So = gcd(abs(hieu.t), abs(hieu.m));
    hieu.showToiGian();
    return 0;
}
