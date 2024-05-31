// [OOP]. Bài 8. Chu vi và diện tích
// Cho lớp Point mô tả điểm trong hệ tọa độ Oxy, viết chương trình nhập vào tọa độ 3 điểm và tính chu vi, diện tích của tam giác được tạo bởi 3 điểm này.

// Đầu vào
// Dòng 1 là số bộ test T

// T dòng tiếp theo lần lượt là hoành độ, tung độ của 3 điểm

// Giới hạn
// 1<=T<=1000

// Tọa độ các điểm là số nguyên dương không vượt quá 10^6

// Đầu ra
// Nếu tam giác không hợp lệ in ra INVALID, nếu hợp lệ thì in ra chu vi và diện tích lấy 3 chữ số sau dấu phẩy

// Ví dụ :
// Input 01
// Copy
// 6
// -28 82 5 -32 211 950
// 91 30 16 50 464 367
// -12 37 92 -57 797 98
// 66 0 95 58 645 80
// -49 68 19 -76 404 817
// 35 40 91 82 336 412
// Output 01
// Copy
// 2022.357 27945.000
// 1129.122 16367.500
// 1673.320 41195.000
// 1199.786 15631.000
// 2007.040 58082.000
// 959.529 4095.000

#include <bits/stdc++.h>

using namespace std;

class Point{
private:
    int x, y;
public:
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }

    double hesogoc(Point b){
        return 1.0*(b.y-this->y) / (b.x - this->x);
    }

    double getDistance(Point b){
        int xa = abs(b.x-this->x);
        int ya = abs(b.y-this->y);
        return sqrt(xa*xa + ya*ya);
    }
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int k = 6;
        vector<int> vS;
        while(k--){
            int x; cin >> x;
            vS.push_back(x);
        }

        Point a(vS[0], vS[1]);
        Point b(vS[2], vS[3]);
        Point c(vS[4], vS[5]);
        bool check = (a.hesogoc(b) == c.hesogoc(a)) ? true : false;
        if(!check){
            double c1 = a.getDistance(b);
            double c2 = a.getDistance(c);
            double c3 = b.getDistance(c);
            double p = c1+c2+c3;
            cout << fixed << setprecision(3) << p << " ";
            double halfP = p/2;
            double s = sqrt(halfP*(halfP-c1)*(halfP-c2)*(halfP-c3));
            cout << fixed << setprecision(3) << s << endl;
        } else {
            cout << "INVALID" << endl;
        }
    }
    return 0;
}