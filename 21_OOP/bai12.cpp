// [OOP]. Bài 12. Tuyển sinh
// Trường Đại học XYZ tuyển sinh theo hình thức xét điểm thi ba môn Toán – Lý – Hóa. Để đơn giản, khu vực tuyển sinh được quy định luôn bởi ba chữ cái đầu tiên trong mã thí sinh. Về điểm ưu tiên thì KV1 : 0.5, KV2 : 1, KV3 : 2.5

// Biết điểm trúng tuyển là 24, bạn hãy in ra tình trạng trúng tuyển của từng bạn thí sinh

// Đầu vào
// 5 dòng lần lượt là: - Mã thí sinh - Họ tên - Điểm toán - Điểm lý - Điểm hóa

// Giới hạn
// Điểm là số thực trong khoảng [0, 10]

// Đầu ra
// Ghi ra các thông tin: - Mã thí sinh - Họ tên - Khu vực - Tổng điểm – có tính ưu tiên (có thể có 1 số phần thập phân), trong trường hợp điểm là số thực với phần thập phân bằng 0 thì không in ra phần thập phân. - Trạng thái: TRUNG TUYEN hoac TRUOT (sau khi đã tính cả điểm ưu tiên)

// Ví dụ :
// Input 01
// Copy
// KV2B
// Hoang Ngoc Long
// 3.4
// 9
// 0
// Output 01
// Copy
// KV2B Hoang Ngoc Long 2 13.4 TRUOT

#include <bits/stdc++.h>

using namespace std;

class ThiSinh{
private:
    string m_mts, m_hoten;
    double m_toan, m_ly, m_hoa;
public:
    ThiSinh();
    ThiSinh(string mts, string hoten, double toan, double ly, double hoa){
        m_mts = mts;
        m_hoten = hoten;
        m_toan = toan;
        m_ly = ly;
        m_hoa = hoa;
    }

    int getKhuVuc(){
        int khu = m_mts[2]-'0';
        return khu;
    }

    double getDiem(){
        double sum = m_hoa + m_ly + m_toan;
        int khu = getKhuVuc();
        switch (khu)
        {
        case 1:
            sum += 0.5;
            break;
        case 2:
            sum += 1;
            break;
        default:
            sum += 2.5;
            break;
        }
        return sum;
    }

    bool getStatus(){
        return (getDiem() >= 24) ? true : false;
    }

    void showInfor(){
        cout << m_mts << " " << m_hoten << " " << getKhuVuc() << " ";
        double diem = getDiem();
        if(diem == (int)diem){
            cout << (int)diem << " ";
        } else {
            cout << diem << " ";
        }
        bool flag = getStatus();
        if(flag){
            cout << "TRUNG TUYEN";
        } else {
            cout << "TRUOT";
        }
    }
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    vector<string> vS;
    while(getline(cin, s)){
        vS.push_back(s);
    }

    ThiSinh ts(vS[0], vS[1], stod(vS[2]), stod(vS[3]), stod(vS[4]));
    ts.showInfor();
    return 0;
}