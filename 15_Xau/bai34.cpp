// [Xâu Ký Tự Cơ Bản]. Bài 34. Tần suất của tên người
// Cho danh sách tên người, bạn hãy xác định xem số lần xuất hiện của mỗi người trong danh sách là bao nhiêu? Sau đó liệt kê tên người và số lần xuất hiện theo thứ tự từ điển tăng dần

// Đầu vào
// Gồm không quá 1000 dòng, mỗi dòng là tên 1 người

// Giới hạn
// Tên người chỉ bao gồm chữ cái và dấu cách

// Đầu ra
// In ra tên người và số lần xuất hiện theo thứ tự từ điển tăng dần

// Ví dụ :
// Input 01
// Copy
// joe biden
// tim cook
// leonardo da vinci
// 28tech
// leonardo da vinci
// elon musk
// leonardo da vinci
// 28tech
// 28tech
// joe biden
// Output 01
// Copy
// 28tech 3
// elon musk 1
// joe biden 2
// leonardo da vinci 3
// tim cook 1

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    map<string, int> mS;
    while(getline(cin, s)){
        mS[s]++;
    }
    for(auto item: mS){
        cout << item.first << " " << item.second << endl;
    }
    return 0;
}