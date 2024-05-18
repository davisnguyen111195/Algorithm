// [Xâu Ký Tự Cơ Bản]. Bài 28. So sánh 2 số nguyên lớn
// Cho 2 số nguyên lớn N và M, mỗi số có không quá 1000 chữ số.

// Bạn hãy in ra 28tech nếu N > M, 29tech nếu N < M và 30tech nếu N = M.

// Đầu vào
// 2 Dòng chứa 2 số N và M

// Giới hạn
// N, M là số nguyên không âm có không quá 1000 chữ số

// Đầu ra
// In ra kết quả tương ứng

// Ví dụ :
// Input 01
// Copy
// 123
// 456
// Output 01
// Copy
// 29tech

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string n, m;
    getline(cin, n);
    getline(cin, m);
    int nsize = n.size();
    int msize = m.size();
    if(nsize != msize){
        if(nsize > msize){
            cout << "28tech";
        } else {
            cout << "29tech";
        } 
    } else {
        if(n == m){
            cout << "30tech"; 
        } else if(n < m){
            cout << "29tech";
        } else {
            cout << "28tech";
        }
    }
    return 0;
}