// [Xâu Ký Tự Cơ Bản]. Bài 21. to_string
// Cho số nguyên N, bạn hãy chuyển số nguyên N thành kiểu chuỗi ký tự string. Đối với C++ bạn cần xây dựng hàm theo khuôn mẫu như sau :

// Copy
// string my_to_string(long long n){
//     //Lưu ý n có thể là số âm
// }

// int main(){
//     long long n; cin >> n;
//     cout << my_to_string(n) << endl;
// }
// Đầu vào
// Dòng duy nhất chứa số nguyên dương N

// Giới hạn
// -10^18<=N<=10^18

// Đầu ra
// In ra đáp án của bài toán

// Ví dụ :
// Input 01
// Copy
// 28282828282
// Output 01
// Copy
// 28282828282

#include <bits/stdc++.h>

using namespace std;
const long long mod = 1e9+7;

string my_to_string(long long n){
    string a = to_string(n);
    return a;
}


int main(){
    long long n; cin >> n;
    cout << my_to_string(n) << endl;
    return 0;
}
