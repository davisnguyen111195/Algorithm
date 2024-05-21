// [Xâu Ký Tự]. Bài 32. Số đẹp 1
// Một số được coi là số đẹp nếu nó có tất cả các chữ số là số nguyên tố và tổng các chữ số của nó cũng là số nguyên tố. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

// Đầu vào
// Số nguyên dương N

// Giới hạn
// N có không quá 1000 chữ số.

// Đầu ra
// In ra YES nếu N là số đẹp, ngược lại in ra NO.

// Ví dụ :
// Input 01
// Copy
// 373
// Output 01
// Copy
// YES

#include <bits/stdc++.h>

using namespace std;
bool checkNT(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }

    return n > 1;
}


bool checkPerfectNumber(string s){
    int sum = 0;
    for(char x: s){
        sum += x - '0';
        if(x != '2' && x != '3' && x != '5' && x != '7'){
            return false;
        }

    }
    return checkNT(sum);
}
int main(){
    string s;
    cin >> s;
    if(checkPerfectNumber(s)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
