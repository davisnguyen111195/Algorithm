// [OOP]. Bài 14. Lớp Tam Giác
// Khai báo lớp Point (điểm trong không gian hai chiều) với hai thuộc tính là tọa độ x và tọa độ y (số thực).

// Khai báo lớp Triangle (tam giác) với thuộc tính là 3 điểm. Viết các phương thức phù hợp để tính chu vi tam giác và diện tích tam giác

// Đầu vào
// • Dòng đầu ghi số bộ test

// • Mỗi bộ test ghi trên 1 dòng 6 số thực có giá trị tuyệt đối không quá 1000 lần lượt là tọa độ của 3 điểm.

// Giới hạn
// N/A

// Đầu ra
// • Nếu 3 điểm không thể tạo thành tam giác thì in ra INVALID

// • Nếu 3 điểm tạo thành 1 tam giác thì in ra chu vi và diện tích của tam giác đó, làm tròn đến 3 chữ số phần thập phân.

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
    double m_x, m_y;
public:
    Point();
    Point(double x, double y){
        m_x = x;
        m_y = y;
    }
    double hsg(Point b){
        return 1.0*(m_y-b.m_y) / (m_x - b.m_y);
    }
    double getDistance(Point b){
        double ax = abs(m_x - b.m_x);
        double ay = abs(m_y - b.m_y);
        return sqrt(ax*ax + ay*ay); 
    }

};

class Triangle{
private:
    Point m_a;
    Point m_b;
    Point m_c;
public:
    Triangle();
    Triangle(Point a, Point b, Point c){
        m_a = a;
        m_b = b;
        m_c = c;
    }
    void setA(Point a){
        m_a = a;
    }
    void setB(Point b){
        m_b = b;
    }
    void setC(Point c){
        m_c = c;
    }
    void checkTamGiac(){
        if(m_a.hsg(m_b) == m_c.hsg(m_a)){
            cout << "INVALID" << endl;
        } else{
            double a = m_a.getDistance(m_b);
            double b = m_b.getDistance(m_c);
            double c = m_c.getDistance(m_a);
            double p = a + b + c;
            cout << fixed << setprecision(3) << p << " ";
            cout << fixed << setprecision(3) << sqrt(p/2*(p/2+a)*(p/2+b)*(p/2+c));
        }
    }
};

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int k = 6;
        vector<double> vS;
        while(k--){
            double x; cin >> x;
            vS.push_back(x);
        }

        Point a(vS[0], vS[1]);
        Point b(vS[2], vS[3]);
        Point c(vS[4], vS[5]);
        Triangle tri(a, b, c);
        //tamgiac.checkTamGiac();
    }   cout << endl;

    return 0;
}