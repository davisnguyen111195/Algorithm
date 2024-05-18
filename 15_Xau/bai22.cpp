// [Xâu Ký Tự Cơ Bản]. Bài 22. Char array to string
// Cho mảng char A[] gồm N kí tự, bạn hãy ghép các ký tự trong mảng này thành 1 string.

// Xây dựng chương trình theo khuôn mẫu hàm như sau

// Copy
// string array_to_string(char a[], int n){
//     //code here
// }

// int main(){
//     int n;
//     char a[10001];
//     cin >> n;
//     for(int i = 0; i < n; i++) cin >> a[i];
//     cout << array_to_string(a, n) << endl;
// }
// Đầu vào
// • Dòng 1 là N : số lượng ký tự trong xâu

// • Dòng 2 gồm N kí tự viết cách nhau 1 dấu cách

// Giới hạn
// 1 <= N <= 10000

// Các ký tự trong mảng A[] là chữ cái in thường hoặc chữ số

// Đầu ra
// In ra chuỗi ký tự kết quả

// Ví dụ :
// Input 01
// Copy
// 6
// 2 8 t e c h
// Output 01
// Copy
// 28tech

#include <bits/stdc++.h>

using namespace std;

string array_to_string(char a[], int n){
    //code here
    string b(n, '0');
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    return b;

}

int main(){
    int n;
    char a[10001];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << array_to_string(a, n) << endl;
}