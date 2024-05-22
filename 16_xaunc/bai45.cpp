// [Xâu Ký Tự]. Bài 45. Chữ số cuối cùng
// Cho số nguyên dương N là số nguyên lớn. Hãy tìm chữ số cuối cùng của 2008^n.

// Hay nói cách khác đề bài yêu cầu bạn tìm 2008^n % 10.

// Gợi ý : 2008^n % 10 = (2008 % 10) ^ n % 10 = 8 ^ n % 10. Mà 8 là lũy thừa của 2, vì thế chữ số cuối cùng cùng của 8^n cũng sẽ tuần hoàn với chu kỳ 4.

// Đầu vào
// Số nguyên dương N.

// Giới hạn
// N có không quá 1000 chữ số.

// Đầu ra
// In ra đáp án của bài toán.

// Ví dụ :
// Input 01
// Copy
// 2
// Output 01
// Copy
// 4


#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int chiaDu(string s, int n){
    int mod = 0;
    for(char x: s){
        mod = mod * 10 + x-'0';
        mod %= n;
    }
    return mod;
}

int main(){
    string n;
    getline(cin, n);
    if(n == "0"){
        cout << 1;
        return 0;
    }
    int mod = chiaDu(n, 4);
    switch (mod)
    {
    case 0:
        cout << 6;
        break;
    case 1: 
        cout << 8;
        break;
    case 2: 
        cout << 4;
        break;
    case 3: 
        cout << 2;
        break;
    default:
        break;
    }
    return 0;
}
