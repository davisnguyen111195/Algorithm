// [OOP]. Bài 10. Diện tích hình tròn ngoại tiếp tam giác
// Xây dựng lớp Point. Nhập 3 điểm p1, p2, p3. Hãy tính diện tích hình tròn ngoại tiếp tam giác tạo bởi 3 điểm trên. Công thức tính bán kính hình tròn ngoại tiếp tam giác có 3 cạnh a, b, c là : R = (a* b * c)/(4 * S). Lấy PI = 3.14. Nếu kết quả bị sai vài test thì các bạn tạm thời bỏ qua.

// Đầu vào
// Dòng đầu là số lượng test case T

// T dòng tiếp theo mỗi dòng 6 số thực lần lượt là tọa độ của 3 điểm A, B, C.

// Giới hạn
// 1<=T<=100

// Giá trị tọa độ không quá 1000.

// Đầu ra
// Nếu 3 điểm không thể tạo thành tam giác, in ra INVALID

// Nếu 3 điểm tạo thành tam giác, in ra diện tích hình tròn ngoại tiếp với độ chính xác 3 số phần thập phân.

// Ví dụ :
// Input 01
// Copy
// 9
// -5 56 48 -9 637 528
// 4 24 36 77 276 364
// -49 5 21 -1 484 988
// 23 64 53 60 60 20
// -37 46 16 -60 800 742
// 1 90 0 38 928 924
// -94 57 39 -37 2 257
// 76 34 20 68 474 897
// -80 51 34 -49 473 672
// Output 01
// Copy
// 499955.915
// 6385832.242
// 1114241.629
// 2853.002
// 1041569.199
// 2422176.307
// 70903.104
// 710404.215
// 559392.388


#include <bits/stdc++.h>

using namespace std;

class Point{
private: 
    int x, y;
public:
    Point();
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }

    double getDistance(Point b){
        int ax = abs(this->x - b.x);
        int ay = abs(this->y - b.y);
        return sqrt(ax*ax + ay*ay);
    }

    double hsg(Point b){
        return 1.0*(this->y - b.y) / (this->x - b.x);
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
        Point x1(vS[0], vS[1]);
        Point x2(vS[2], vS[3]);
        Point x3(vS[4], vS[5]);
        if(x1.hsg(x2) == x2.hsg(x3)){
            cout << "INVALID" << endl;
        } else {
            double a = x1.getDistance(x2);
            double b = x2.getDistance(x3);
            double c = x3.getDistance(x1);
            double s = sqrt((a+b+c)*(a+b-c)*(a+c-b)*(c+b-a)) / 4;
            cout << (a*b*c)/(4*s) << endl;
        }
    }
    return 0;
}