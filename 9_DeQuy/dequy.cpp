// [Đệ Quy]. Bài 5. Tính giai thừa
// Tính n giai thừa bằng đệ quy.

// Input Format

// Số nguyên dương N.

// Constraints

// 0≤n≤10;

// Output Format

// Kết quả của N!

// Sample Input 0

// 6
// Sample Output 0

// 720

#include <iostream>
#define ll long long

using namespace std;

ll s(int n){
    if(n <= 1){
        return 1;
    } else {
        return n * s(n-1);
    }
}

int main(){
    int n; cin >> n;
    cout << s(n);
    return 0;
}