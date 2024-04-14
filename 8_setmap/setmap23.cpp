// [Set Map]. Bài 24. Map và string
// Cho danh sách các cầu thủ ghi bàn, bạn hãy thông kê xem mỗi người ghi bao nhiêu bàn và liệt kê danh sách các cầu thủ cùng số lần họ ghi bàn theo thứ tự từ điển tăng dần. Ngoài ra bạn cần tìm người ghi bàn nhiều nhất và ghi bàn ít nhất, nếu có nhiều người có cùng số bàn thắng nhiều nhất và ít nhất bạn cần lấy người có tên theo thứ tự từ điển nhỏ hơn.

// Input Format

// Dòng 1 là N : số lượng cầu thủ

// N dòng tiếp theo là tên cầu thủ ghi bàn

// Constraints

// 1<=N<=10000
// Output Format

// Đầu tiên liệt kê danh sách cầu thủ cùng số lượng bàn thắng, sau đó cách ra 1 dòng và tiếp tục liệt kê người ghi ít bàn thắng nhất và người ghi nhiều bàn thắng nhất.

// Sample Input 0

// 16
// Messi
// Ronaldo
// Neymar
// Messi
// Rooney
// Ronaldo
// Messi
// Ronaldo
// Neymar
// Neymar
// Ronaldo
// Messi
// Ronaldo
// Messi
// Messi
// Rooney
// Sample Output 0

// Messi 6
// Neymar 3
// Ronaldo 5
// Rooney 2

// Rooney 2
// Messi 6

#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n; 
    map<string, int> mX;
    for(int i = 0; i < n; i++){
        string x; cin >> x;
        mX[x]++;
    }
    int maxM = -1;
    int minM = 10001;
    for(auto item : mX){
        cout << item.first << " " << item.second << endl;
        maxM = max(maxM, item.second);
        minM = min(minM, item.second);
    }
    cout << endl;
    for(auto item : mX){
        if(item.second == minM){
            cout << item.first << " " << item.second << endl;
            break;
        }
    }

    for(auto item : mX){
        if(item.second == maxM){
            cout << item.first << " " << item.second << endl;
            break;
        }
    }
    return 0;
}