// [OOP]. Bài 6. Lớp Hình Chữ Nhật
// Cho HCN với các thuộc tính : Chiều rộng, chiều cao, màu sắc

// Viết chương trình nhập vào độ dài chiều rộng, cao, màu sắc của HCN sau đó in ra thông tin về chu vi, diện tích, màu sắc. Nếu cả 2 cạnh rộng và cao của HCN đều dương thì in ra thông tin về chu vi, diện tích, màu sắc với chữ cái đầu viết hoa, các chữ cái còn lại viết thường. Ngược lại in ra INVALID nếu 2 cạnh của HCN không hợp lệ.

// Gợi ý :

// Copy
// class HinhChuNhat{
// private:
//     int rong, cao;
//     string mausac;
// public:
//     HinhChuNhat();
//     HinhChuNhat(int, int, string);
//     int dienTich();
//     int chuVi();
//     void inThongTin();
// }
// Đầu vào
// Gồm 2 số nguyên a, b là độ dài 2 cạnh hình chữ nhật và màu sắc là xâu không có dấu cách.

// Giới hạn
// -10^6<=a,b<=10^6

// Đầu ra
// In ra thông tin về chu vi, diện tích, màu sắc của HCN

// Ví dụ :
// Input 01
// Copy
// 5 2 ReD
// Output 01
// Copy
// 14 10 Red

#include <bits/stdc++.h>

using namespace std;
class HinhChuNhat{
private:
    int rong, dai;
    string mausac;
public: 
    HinhChuNhat();
    HinhChuNhat(int rong, int dai, string mausac){
        this->rong = rong;
        this->dai = dai;
        this->mausac = mausac;
    }
    int dienTich(){
        return this->rong * this->dai;
    }

    int chuVi(){
        return 2*(this->dai + this->rong);
    }

    void showInfor(){
        if(this->dai > 0 && this->rong > 0){
            cout << chuVi() << " " << dienTich() << " " << mausac << endl;
        } else {
            cout << "INVALID";
        }
        
    }

    void chuanHoa(){
        string mau = this->mausac;
        mau[0] = toupper(mau[0]);
        for(int i = 1; i < mau.size(); i++){
            mau[i] = tolower(mau[i]);
        }
        this->mausac = mau;
    }
};
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string w;
    vector<string> vS;
    while(ss >> w){
        vS.push_back(w);
    }

    HinhChuNhat hcn(stoi(vS[1]), stoi(vS[0]), vS[2]);
    hcn.chuanHoa();
    hcn.showInfor();
    return 0;
}