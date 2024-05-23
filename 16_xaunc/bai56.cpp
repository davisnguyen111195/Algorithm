// // Số La Mã được biểu diễn thông qua 7 ký tự :

// • I : 1

// • V : 5

// • X : 10

// • L : 50

// • C : 100

// • D : 500

// • M : 1000

// Các ký tự I, X, C, M lặp lại không quá 3 lần liên tiếp, các ký tự V, D, L lặp lại không quá 1 lần liên tiếp.

// Khi đó ta có 6 tổ hợp đặc biệt có thể xuất hiện khi kết hợp 2 ký tự lại gồm : IV = 4, IX = 9, XL = 40, XC = 90, CD = 400, CM = 900

// Bạn hãy thực hiện chuyển đổi từ số La Mã sang số thập phân

// Đầu vào
// • Dòng đầu là số bộ test T

// • T dòng tiếp theo mỗi dòng là một số La Mã

// Giới hạn
// • 1<=T<=100

// • Số La Mã là một xâu có không quá 20 ký tự

// Đầu ra
// Copy
// In ra giá trị của số La Mã tương ứng với mỗi test case
// Ví dụ :
// Input 01
// Copy
// 5
// XV
// L
// CCLXXV
// MCCLXXV
// CCCXXV
// Output 01
// Copy
// 15
// 50
// 275
// 1275
// 325
// Input 02
// Copy
// 1
// MMMCMXCIX
// Output 02
// Copy
// 3999

#include <bits/stdc++.h>

using namespace std;

int convertLama(string s){
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        switch (s[i])
        {
        case 'I':
            if(s[i+1] == 'V' && i+1 <s.size()){
                sum += 4;
                i++;
            } else if(s[i+1] == 'X' && i+1 <s.size()){
                sum += 9;
                i++;
            } else {
                sum += 1;
            }
            break;
        case 'V':

            sum += 5;
            break;
        case 'X':
            if(s[i+1] == 'L' && i+1 <s.size()){
                sum += 40;
                i++;
            } else if(s[i+1] == 'C' && i+1 <s.size()){
                sum += 90;
                i++;
            } else {
                sum += 10;
            }
            break;
        case 'L':
            sum += 50;
            break;
        case 'C':
            if(s[i+1] == 'D' && i+1 <s.size()){
                sum += 400;
                i++;
            } else if(s[i+1] == 'M' && i+1 <s.size()){
                sum += 900;
                i++;
            } else {
                sum += 100;
            }
            break;
        case 'D':
            sum += 500;
            break;
        case 'M':
            sum += 1000;
            break;
        default:
            break;
        }
    }
    return sum;
}

int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string s;
        cin >> s;
        cout << convertLama(s) << endl;;
    }
   

    return 0;
}