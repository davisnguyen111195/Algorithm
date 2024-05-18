// [Xâu Ký Tự Cơ Bản]. Bài 26. Số hợp lệ 1
// Một số tự nhiên N được coi là hợp lệ nếu nó :

// • Có chữ số đầu tiên và cuối cùng có cùng tính chất chẵn lẻ

// • Không có 2 chữ số nào đứng cạnh nhau có độ chênh lệch bằng 3

// • Không được chứa số 2 và 8 đứng cạnh nhau.

// Bạn hãy kiểm tra các số đã cho có phải là hợp lệ hay không?

// Đầu vào
// • Dòng 1 là T : Số lượng số cần kiểm tra

// • T dòng tiếp theo mỗi dòng là 1 số N

// Giới hạn
// • 1<=T<=1000

// • N là số tự nhiên có không quá 1000 chữ số

// Đầu ra
// Copy
// Đối với mỗi test in ra **YES** hoặc **NO** tùy **N** có phải là số hợp lệ hay không
// Ví dụ :
// Input 01
// Copy
// 10
// 4768945971937769
// 6616397219777
// 97929238629171
// 546746487838715
// 5795211668124639114
// 9828511627867787611
// 3527572613185
// 96146749649
// 26511881655
// 522121849147419685
// Output 01
// Copy
// NO
// NO
// YES
// NO
// NO
// NO
// NO
// NO
// NO
// NO

#include <bits/stdc++.h>

using namespace std;
bool check(string s){
    bool checker = true;
    int n = s.size();
    if(s[0] % 2 == 0 && s[n-1] % 2 == 1){
        checker *= false;
    } else if(s[0] % 2 == 1 && s[n-1] % 2 == 0){
        checker *= false;
    } else {
        checker *= true;
    }

    for(int i = 1; i < n; i++){
        int num1 = s[i-1] - '0';
        int num2 = s[i] - '0';
        if(abs(num1 - num2) == 3){
            checker *= false;
        } else {
            checker *= true;
        }
    }

    for(int i = 1; i < n; i++){
        if(s[i - 1] == 8 && s[i] == 2){
            checker *= false;
        } else if(s[i-1] == 2 && s[i] == 8){
            checker *= false;
        } else {
            checker *= true;
        }
    }

    return checker;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        if(check(s)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}