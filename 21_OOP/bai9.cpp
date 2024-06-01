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
class GV{
private:
    string ma;
    string ten;
    string hsl;
public:
    GV(string ma, string ten, string hsl){
        this->ma = ma;
        this->ten = ten;
        this->hsl = hsl;
    }
};

class SoLon{
private: 
    string so;
public:
    SoLon(string so){
        this->so = so;
    }
    string csl(string b){
        string a = this->so;
        int du = 0;
        int mid = 0;
        string res = "";
        a.insert(0, max(0, (int)(b.length() - a.length())), '0');
        b.insert(0, max(0, (int)(a.length() - b.length())), '0');
        for(int i = a.length()-1; i >= 0; i--){
            mid = (int)(a[i]-48) + (int)(b[i]-48) + du;
            du = mid / 10;
            res += (char)(mid%10 + 48);
        }
        if(du > 0){
            res = "1" + res;
        }
        return res;
    }

    string nsb(int b, int l){
        string a = this->so;
        string res = "";
        int mid = 0;
        int du = 0;
        for(int i = a.length()-1; i >= 0; i--){
            mid = ((int) a[i] - 48) * b + du;
            du = mid / 10;
            res = (char) (mid % 10 + 48) + res;
        }

        if(du > 0){
            res = to_string(du) + res;
        }
        res.insert(res.length(), l, '0');
        return res;
    }

    string nsl(string b){
        string a = this->so;
        string res = "";
        for(int i = b.length()-1; i >= 0; i--){
            string t = nsb(a, b[i]-48, b.length()-i-1);
            res = csl(res, t);
        }
        return res;
    }
};

int main(){
    

    return 0;
}