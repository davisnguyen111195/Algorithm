// [OOP]. Bài 7. Lớp point
// Cho lớp Point mô tả 1 điểm trong hệ tọa độ Oxy, bạn hãy tính khoảng cách giữa 2 điểm trong hệ tọa độ Oxy và in ra màn hình.

// Gợi ý :

// Copy
// class Point{
// private:
//     double x, y;
// public:
//     Point(double, double);
//     double getDistance(Point);
// }
// Đầu vào
// Dòng 1 là T : số bộ test

// T dòng tiếp theo mỗi dòng là 4 số x1, y1, x2, y2 tương ứng với tọa độ của 2 điểm

// Giới hạn
// 1<=T<=1000

// -10^6<=x1,y1,x2,x2<=10^6

// Đầu ra
// Với mỗi test in ra kết quả trên 1 dòng, lấy 4 chữ số sau dấu phẩy thập phân

// Ví dụ :
// Input 01
// Copy
// 5
// -88 1 6 -34
// 7 61 67 61
// -50 60 54 -49
// 62 76 81 75
// -12 27 45 -90
// Output 01
// Copy
// 100.3045
// 60.0000
// 150.6552
// 19.0263
// 130.1461

#include <bits/stdc++.h>

using namespace std;

class Point{
private: 
    double x, y;
public:
    Point(double x, double y){
        this->x = x;
        this->y = y;
    }

    double getDistance(Point b){
        double xa = abs(this->x-b.x);
        double yb = abs(this->y-b.y);
        return sqrt(xa*xa + yb*yb);
    }
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    
    while(t--){
        vector<double> vS;
        int k = 4;
        while(k--){
            double x; cin >> x;
            vS.push_back(x);
        }
        Point p1(vS[0], vS[1]);
        Point p2(vS[2], vS[3]);
        cout << fixed << setprecision(4) << p1.getDistance(p2) << endl;
    }
    return 0;
}