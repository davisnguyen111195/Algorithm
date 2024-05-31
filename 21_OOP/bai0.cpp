#include <bits/stdc++.h>


using namespace std;


class SinhVien{
    private: 
        string ten, dc, ns;
    public:
        SinhVien(){
            cout << "Sinh vien duoc khoi tao\n"; 
        }
        SinhVien(string t, string d, string n){
            ten = t;
            dc = d;
            ns = n;
        }

        void in(){
            cout << ten << " " << dc << " " << ns << endl;
        }
        string getTen(){
            return ten;
        }

        void setTen(string tenmoi){
            ten = tenmoi;
        }

        void xinchao(){
            cout << "SINHVIEN xinchao! \n";
        }
};

int main(){
    SinhVien s;
    SinhVien t("Te", "haodong", "22/11/2222");
    s.setTen("TEO");
    t.in();
    cout << s.getTen() << endl;
    return 0;
}