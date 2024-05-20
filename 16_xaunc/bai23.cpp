// // [Xâu Ký Tự]. Bài 23. Ghép xâu
// Cho các từ chỉ bao gồm chữ cái in hoa và in thường, bạn được yêu cầu ghép các từ này lại với nhau sao cho từ được ghép lại sau cùng có thứ tự từ điển lớn nhất.

// Gợi ý : Không phải sắp xếp giảm dần xong in ra đâu nhé, cần nối 2 xâu vào với nhau và chọn thứ tự từ điển lớn hơn

// Đầu vào
// Dòng đầu tiên là số nguyên dương N - số lượng từ

// Dòng thứ 2 gồm N từ, mỗi từ cách nhau một dấu cách.

// Giới hạn
// 1≤N≤1000

// Đầu ra
// In ra xâu sau khi ghép.

// Ví dụ :
// Input 01
// Copy
// 4
// 28tech dsa cpp learn
// Output 01
// Copy
// learndsacpp28tech

#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    string s1 = a + b;
    string s2 = b + a;
    if(s1 > s2) {
        return true; 
    }
    return false;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    cin.ignore();
    string a[n];
    for(string &x : a){
        cin >> x;
    }
    sort(a, a+n, cmp);
    for(string x: a){
        cout << x;
    }


    return 0;
}