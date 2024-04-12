// [Vector]. Bài 16. Truy vấn
// Bạn được cung cấp 1 bảng số gồm nhiều dòng, mỗi dòng có thể có số lượng số khác nhau và bạn cần chỉ ra giá trị nằm ở cột y của dòng x trong bảng số.

// Gợi ý : Bài này bạn sử dụng 1 mảng vector vector a[N]; với N là số dòng, hoặc bạn có thể dùng 1 vector các vector vector> v để lưu. Mỗi dòng sẽ dùng 1 vector để lưu.

// Input Format

// Dòng 1 là N và Q : Số dòng và số truy vấn

// N dòng tiếp theo mỗi dòng bao gồm số đầu tiên M là số lượng số của dòng đó, theo sau là M số của dòng này

// Q dòng tiếp theo mỗi dòng là một truy vấn gồm dòng x và cột y, lưu ý dòng x và cột y được đánh số từ 1

// Constraints

// 1<=N,M<=10^5

// 1<=Q<=1000

// x, y đảm bảo dữ liệu hợp lệ

// Output Format

// Đối với mỗi truy vấn in ra phần tử nằm ở dòng x, cột y.
// Sample Input 0

// 5 5
// 8 29 20 78 68 62 92 71 37 
// 6 8 35 67 26 6 97 
// 9 81 50 15 93 62 33 28 87 28 
// 5 51 22 72 57 29 
// 8 0 76 49 71 23 41 22 92 
// 5 1
// 1 6
// 2 5
// 1 7
// 1 5
// Sample Output 0

// 0
// 92
// 6
// 71
// 62


#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, q; cin >> n >> q;

    
    vector<vector<int>> vts;
    for(int i = 0; i < n; i++){
        int m; cin >> m;
        vector<int> vt;
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            vt.push_back(x);
        }
        vts.push_back(vt);
    }

    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        cout << vts[x-1][y-1] << endl;
    }

    return 0;
}