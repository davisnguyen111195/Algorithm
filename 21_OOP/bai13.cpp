// [OOP]. Bài 13. Lớp Phân Số
// Cho hai phân số A và B có tử số và mẫu số được nhập từ bàn phím.

// Viết chương trình thực hiện hai nhiệm vụ sau:

// Thực hiện phép tính C = (A + B)^2 và rút gọn kết quả.

// Thực hiện phép tính D = A x B x C và rút gọn kết quả.

// Đầu vào
// Dòng đầu tiên là số bộ test T

// T dòng tiếp theo, mỗi dòng gồm 4 số lần lượt là tử và mẫu số của phân số A và phân số B

// Giới hạn
// T <= 100

// Các phân số có tử số và mẫu số là số nguyên trị tuyệt đối <= 1000

// Dữ liệu đảm bảo mẫu số khác 0.

// Đầu ra
// Ghi ra kết quả của hai phép tính theo định dạng phân số, cách nhau một dấu cách.

// Ví dụ :
// Input 01
// Copy
// 6
// 1 2 3 4
// 2 3 4 5
// -23 -36 99 90
// 24 -1 99 60
// -40 -9 98 91
// 37 -31 61 92
// Output 01
// Copy
// 25/16 75/128
// 484/225 3872/3375
// 97969/32400 24786157/11664000
// 199809/400 19781091/-1000
// 417316/13689 233696960/1601613
// 2289169/8133904 5166654433/-23197894208

#include <bits/stdc++.h>

using namespace std;

class PhanSo{
private: 
    long long m_tu, m_mau;
public:
    PhanSo();
    PhanSo(long long tu, long long mau){
        m_tu = tu;
        m_mau = mau;
    }
    
    long long gcd(long long a, long long b){
        if(b == 0){
            return a;
        }
        return gcd(b, a % b);
    }

    PhanSo rutgon(){
        long long gcdP = gcd(m_tu, m_mau);
        PhanSo result(m_tu/gcdP, m_mau/gcdP);
        return result;
    }

    PhanSo congPhanSo(PhanSo b){
        long long tu = m_tu * b.m_mau + m_mau * b.m_tu;
        long long mau = m_mau * b.m_mau;
        PhanSo result(tu, mau);
        return result.rutgon();
    }

    PhanSo nhanPhanSo(PhanSo b){
        long long tu = m_tu * b.m_tu;
        long long mau = m_mau * b.m_mau;
        PhanSo result(tu, mau);
        return result.rutgon();
    }

    void showInfor(){
        cout << m_tu << "/" << m_mau;
    }
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int k = 4;
        vector<long long> vS;
        while(k--){
            long long x; cin >> x;
            vS.push_back(x);
        }
        PhanSo a(vS[0], vS[1]);
        PhanSo b(vS[2], vS[3]);
        a = a.rutgon();
        b = b.rutgon();
        PhanSo c = a.congPhanSo(b);
        c = c.nhanPhanSo(c);
        PhanSo d = a.nhanPhanSo(b);
        d = d.nhanPhanSo(c);
        c.showInfor();
        cout << " ";
        d.showInfor();
        cout << endl;
    }
    return 0;
}