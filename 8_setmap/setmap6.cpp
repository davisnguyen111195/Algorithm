// [Set Map]. Bài 6. Distinct pair
// Cho N điểm trong hệ tọa độ Oxy, bạn hãy xác định có bao nhiêu điểm riêng biệt trong các điểm đã cho. Gợi ý : Dùng set hoặc map lưu pair

// Input Format

// Dòng 1 là N : số lượng điểm đã cho

// N dòng tiếp theo mỗi dòng gồm hoành độ và tung độ của 1 điểm

// Constraints

// 1<=N<=10^6

// -10^6<=x,y<=10^6

// Output Format

// In ra số lượng điểm khác nhau

// Sample Input 0

// 20
// 2 2
// 0 1
// 1 2
// 2 1
// 2 0
// 2 1
// 2 2
// 0 0
// 2 0
// 0 2
// 0 1
// 1 1
// 0 2
// 0 2
// 1 1
// 0 2
// 1 2
// 0 1
// 1 1
// 1 1
// Sample Output 0

// 8

#include <iostream>
#include <set>
#include <map>
#include <stdio.h>
#include <vector>
using namespace std;





//dung set
int main(){
    #ifndef ON
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    set<pair<int, int>> sX;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        pair<int, int> pX = {x, y};
        sX.insert(pX);
    }
    for(auto item : sX){
        cout << item.first << " " << item.second << endl;
    }

    cout << sX.size();
    return 0;
}




