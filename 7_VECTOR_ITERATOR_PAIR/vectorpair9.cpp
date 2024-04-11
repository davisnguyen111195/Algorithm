// [Vector]. Bài 9. Đếm tần suất 1
// Sử dụng vector và pair để giải quyết bài toán sau. Cho mảng A[] gồm N phần tử, bạn hãy đếm xem mỗi phần tử trong mảng A[] xuất hiện bao nhiêu lần và in ra theo thứ tự xuất hiện trong mảng A[].

// Hướng dẫn : Các bạn sử dụng 1 vector rỗng lưu pair trong đó first của pair lưu giá trị và second lưu tần suất, mỗi khi gặp 1 phần tử trong mảng A[] bạn hãy duyệt vector đã có và kiểm tra xem giá trị này đã xuất hiện chưa, nếu đã xuất hiện bạn tăng second của nó lên còn nếu chưa xuất hiện thì bạn push_back 1 cặp pair mới vào vector, pair này sẽ lưu giá trị bạn đang xét và tần suất là 1.

// Input Format

// Dòng 1 : N

// Dòng 2 là các phần tử trong mảng A[] viết cách nhau một dấu cách

// Constraints

// 1<=N<=10^4

// -1000<=A[i]<=1000

// Output Format

// In ra các giá trị xuất hiện trong mảng và tần suất tương ứng.

// Sample Input 0

// 14
// 4 3 6 3 1 1 9 6 9 8 1 3 6 7 
// Sample Output 0

// 4 1
// 3 3
// 6 3
// 1 3
// 9 2
// 8 1
// 7 1

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int, int>> vts;
    int a[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;   
        a[i] = x;
    }

    
    for(int i = 0; i < n; i++){
        pair<int, int> pX = {a[i], 1};
        int cnt = 0;
        for(int it = 0; it < (int)vts.size(); it++){
            if(vts[it].first == pX.first){
                cnt++;
                vts[it].second++;
            }
        }
        if(cnt <= 0){
            vts.push_back(pX);
        }

    }




    for(auto vt : vts){
        cout << vt.first << " " << vt.second << endl;
    }
    return 0;
}