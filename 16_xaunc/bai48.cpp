// [Xâu Ký Tự]. Bài 48. Số may mắn
// Một số nguyên không âm n được gọi là số may mắn nếu tổng các chữ của n bằng 9 hoặc tổng các chữ số của n là số may mắn.

// Ví dụ : các số 9, 108, 279 là các số may mắn, còn các số 19, 289 không phải là số may mắn.

// Đầu vào
// Số nguyên dương N.

// Giới hạn
// N có không quá 1000 chữ số.

// Đầu ra
// In ra YES nếu N là số may mắn, ngược lại in ra NO.

// Ví dụ :
// Input 01
// Copy
// 18
// Output 01
// Copy
// YES

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll chiaDu(string s, int n){
    ll mod = 0;
    for(char x: s){
        mod = mod * 10 + x-'0';
        mod %= n;
    }

    return mod;
}

ll sumS(string s){
    ll sum = 0;
    for(char x: s){
        sum += x-'0';
    }

    return sum;
}

int main(){
    string s;
    cin >> s;
    if(chiaDu(s, 9) == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}