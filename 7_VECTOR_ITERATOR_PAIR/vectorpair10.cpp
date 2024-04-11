// [Vector]. Bài 10. Đếm tần suất 2
// Sử dụng vector và pair để giải quyết bài toán sau. Cho mảng A[] gồm N kí tự, bạn hãy đếm xem mỗi phần tử trong mảng A[] xuất hiện bao nhiêu lần và in ra theo thứ tự xuất hiện trong mảng A[].

// Hướng dẫn : Các bạn sử dụng 1 vector rỗng lưu pair trong đó first của pair lưu giá trị và second lưu tần suất, mỗi khi gặp 1 phần tử trong mảng A[] bạn hãy duyệt vector đã có và kiểm tra xem giá trị này đã xuất hiện chưa, nếu đã xuất hiện bạn tăng second của nó lên còn nếu chưa xuất hiện thì bạn push_back 1 cặp pair mới vào vector, pair này sẽ lưu giá trị bạn đang xét và tần suất là 1.

// Input Format

// Dòng 1 : N

// Dòng 2 là các phần tử trong mảng A[] viết cách nhau một dấu cách

// Constraints

// 1<=N<=10^4

// Các phần tử của mảng A[] là chữ cái in thường

// Output Format

// Dòng 1 in ra số lượng kí tự khác nhau trong mảng

// Các dòng tiếp theo in ra kí tự và tần suất tương ứng

// Sample Input 0

// 11
// e g e h j e c g g g d 
// Sample Output 0

// 6
// e 3
// g 4
// h 1
// j 1
// c 1
// d 1

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    vector<pair<char, int>> vts;
    char a[n];
    for(int i = 0; i < n; i++){
        char x;
        cin >> x;
        a[i] = x;
    }
    for(int i = 0; i < n; i++){
        pair<char, int> pX = {a[i], 1};
        int cnt = 0;
        for(int j = 0; j < (int)vts.size(); j++){
            if(vts[j].first == pX.first){
                cnt++;
                vts[j].second++;
            }
        }
        if(cnt <= 0) {
            vts.push_back(pX);
        }
    }

    cout << vts.size() << endl;
    for(auto item : vts){
        cout << item.first << " " << item.second << endl;
    }
    return 0;
}