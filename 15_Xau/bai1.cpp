
// [Xâu Ký Tự Cơ Bản]. Bài 1. Chữ số đứng giữa

// Cho số nguyên không âm N, hãy xác định chữ số đứng giữa của N, trong trường hợp N không có chữ số đứng giữa thì in ra "NOT FOUND".

// Ví dụ : N = 12345 thì số đứng giữa là 3, N = 2213 thì không có chữ số đứng giữa.

// Đầu vào
// Một dòng duy nhất chứa số nguyên dương N

// Giới hạn
// 0<=N<=10^18

// Đầu ra
// In ra chữ số đứng giữa của N hoặc in ra NOT FOUND nếu N không có số đững giữa

// Ví dụ :
// Input 01
// Copy
// 999996472
// Output 01
// Copy
// 9
#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef PP
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string n;
    cin >> n;
    int range = n.size();
    if(range % 2 == 0){
        cout << "NOT FOUND";
    } else {
        cout << n[range/2];
    }

    return 0;

}