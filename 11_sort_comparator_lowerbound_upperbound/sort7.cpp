// [Comparator_Binary Search]. Bài 5. Sort pair 2
// Cho các điểm trong hệ tọa độ OXYZ, nhiệm vụ của bạn là sắp xếp các điểm này theo hoành độ tăng dần, nếu có cùng hoành độ thì sắp theo tung độ tăng dần, nếu có cùng tùng độ tiếp tục sắp xếp theo cao độ tăng dần. Sử dụng pair như sau để lưu các tọa độ này :

// pair<int, pair<int, int>>
// Input Format

// Dòng đầu tiên là N : số lượng điểm.

// N dòng tiếp theo mỗi dòng là 3 số nguyên x, y, z tương ứng với 1 điểm

// Constraints

// 1<=N<=10^5

// x, y, z là số nguyên dương không quá 1000

// Output Format

// In ra các điểm sau khi sắp xếp

// Sample Input 0

// 12
// 37 4 54
// 37 25 75
// 88 46 30
// 40 40 90
// 87 99 80
// 73 76 49
// 20 95 25
// 52 3 8
// 65 79 56
// 88 65 87
// 51 50 12
// 87 29 44
// Sample Output 0

// 20 95 25
// 37 4 54
// 37 25 75
// 40 40 90
// 51 50 12
// 52 3 8
// 65 79 56
// 73 76 49
// 87 29 44
// 87 99 80
// 88 46 30
// 88 65 87

#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b){
    if(a.first != b.first){
        return a.first < b.first;
    } else {
        if(a.second.first != b.second.first){
            return a.second.first < b.second.first;
        } else {
            return a.second.second < b.second.second;
        }
    }
}
int main(){
    int n; cin >> n;
    vector<pair<int, pair<int, int>>> Oxyz;
    while(n--){
        int x, y, z; cin >> x >> y >> z;
        Oxyz.push_back({x, {y, z}});
    }
    sort(Oxyz.begin(), Oxyz.end(), cmp);

    for(auto item: Oxyz){
        cout << item.first << " " << item.second.first << " " << item.second.second << endl;
    }

    return 0;
}