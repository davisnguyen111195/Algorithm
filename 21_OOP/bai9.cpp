// OOP]. Bài 9. Giáo viên
// Trường phổ thông XYZ tính lương giáo viên theo quy tắc sau:

// Mỗi giáo viên có mã ngạch gồm 4 ký tự trong đó. 2 ký tự đầu là chức vụ (HT: Giáo viên kiêm nhiệm Hiệu trưởng, HP: Giáo viên kiêm nhiệm Hiệu phó, GV: Giáo viên thường).

// 2 ký tự số cuối cùng cho biết hệ số bậc lương (không quá 20).

// Lương cơ bản của mỗi giáo viên cũng có thể khác nhau. Phụ cấp quy định như sau. HT: 2.000.000. HP: 900.000. GV: 500.000.

// Thu nhập được tính bằng lương cơ bản nhân với hệ số bậc lương cộng thêm phụ cấp. Hãy tính lương cho 1 giáo viên theo quy tắc trên.

// Đầu vào
// Có 3 dòng lần lượt là mã ngạch, họ tên và lương cơ bản.

// Giới hạn
// Lương cơ bản là số nguyên không quá 10^6

// Đầu ra
// In ra các thông tin: mã ngạch, họ tên, bậc lương, thu nhập, mỗi thông tin viết cách nhau 1 dấu cách

// Ví dụ :
// Input 01
// Copy
// HP05
// Nguyen Van Ha
// 1748000
// Output 01
// Copy
// HP05 Nguyen Van Ha 5 9640000

#include <bits/stdc++.h>

using namespace std;

class SoLon{
private: 
    string so;
public:
    SoLon(){
        
    }
    SoLon(string so){
        this->so = so;
    }
    string getSo(){
        return this->so;
    }

    void setSo(string so){
        this->so = so;
    }

    string csl(string a, string b)
    {
        int     du  = 0;
        int     mid = 0;
        string  res = "";
        a.insert(0, max(0, (int) (b.length() - a.length())), '0');
        b.insert(0, max(0, (int) (a.length() - b.length())), '0');
        for (int i = a.length()-1; i >= 0; --i)
        {
            mid = ((int) a[i] - 48) + ((int) b[i] - 48) + du;
            du  = mid / 10;
            res = (char) (mid % 10 + 48) + res;
        }
        if (du > 0) res = "1" + res;
        return res;
    }

    string nsb(string a, int b, int l)
    {
        string  res = "";
        int     mid = 0;
        int     du  = 0;
        for (int i = a.length() - 1; i >= 0; --i)
        {
            mid     = ((int) a[i] - 48) * b + du;
            du  = mid / 10;
            res = (char) (mid % 10 + 48) + res;
        }
        if (du > 0)
        {
            string  k = to_string(du);
            res = k + res;
        }
        res.insert(res.length(), l, '0');
        return res;
    }

    string nsl(string b){
        string a = this->so;
        string  res = "";
        for (int i = b.length() - 1; i >= 0; --i)
        {
            string  t = nsb(a, (int) b[i] - 48, b.length() - i - 1);
            res     = csl(res, t);
        }
        return res;
    }
};

class GV{
private:
    int heso;
    string maheso;
    string chucvu;
    string ten;
    string lcb;
    string luong;
public:
    GV(int heso, string maheso, string chucvu, string ten, string lcb){
        this->maheso = maheso;
        this->heso = heso;
        this->chucvu = chucvu;
        this->ten = ten;
        this->lcb = lcb;
    }

    void setLuong(string luong){
        this->luong = luong;
    }

    int getHeSo(){
        return this->heso;
    }

    string getlcb(){
        return this->lcb;
    }

    string getChucVu(){
        return this->chucvu;
    }

    void showInfor(){
        cout << maheso << " ";
        cout << ten << " " << heso << " " << luong; 
    }
};


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<string> vS;
    int k = 3;
    while(k--){
        string s; getline(cin, s);
        vS.push_back(s);
    }
    string chucvu;
    for(int i = 0; i <= 1; i++){
        chucvu.push_back(vS[0][i]);
    }


    int heso = (vS[0][2] - '0')*10 + (vS[0][3]-'0');
    GV gv(heso, vS[0], chucvu, vS[1], vS[2]);
    SoLon solon(gv.getlcb());
    string luong = solon.nsl(to_string(gv.getHeSo()));
    solon.setSo(luong);
    if(gv.getChucVu() == "HP"){
        luong = solon.csl(solon.getSo(), "900000");
    } else if(gv.getChucVu() == "HT"){
        luong = solon.csl(solon.getSo(), "2000000");
    } else {
        luong = solon.csl(solon.getSo(), "500000");
    }
    
    gv.setLuong(luong);
    gv.showInfor();
    return 0;
}
