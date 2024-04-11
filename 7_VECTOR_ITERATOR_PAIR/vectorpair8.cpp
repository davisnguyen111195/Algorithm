// [Vector]. Bài 8. Vector và pair 2
// Cho N điểm trong hệ tọa độ Oxyz, bạn hãy dùng vector

// pair<pair<int, int>, int>>
// để lưu tọa độ các điểm này. Sau đó duyệt vector và in ra tổng của tung độ, hoành độ, cao độ.

// Input Format

// Dòng 1 là N : số lượng điểm. N dòng tiếp theo mỗi dòng gồm 3 số là tung độ, hoành độ, cao độ.

// Constraints

// 1<=N<=1000; Tọa độ là số nguyên có trị tuyệt đối không quá 100;

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 12
// 65 91 53
// 64 70 15
// 50 9 57
// 69 37 11
// 31 35 66
// 73 55 50
// 63 40 38
// 33 5 41
// 67 39 29
// 85 78 6
// 67 49 83
// 41 34 88
// Sample Output 0

// 209 149 116 117 132 178 141 79 135 169 199 163 

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<pair<int, int>, int>> vts;
    for(int i = 0; i < n; i++){
        int x, y, z; cin >> x >> y >> z;
        pair<int, int> xy;
        xy.first = x;
        xy.second = y;

        pair<pair<int, int>, int> xyz;

        xyz.first = xy;
        xyz.second = z;
        vts.push_back(xyz);
    }
    //vector<int> result;
    for(auto vt : vts){
        int sum = vt.first.first + vt.first.second + vt.second;
        //result.push_back(sum);
        cout << sum << " ";
    }

    return 0;
}