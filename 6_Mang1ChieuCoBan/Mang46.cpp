// [Mảng 1 chiều cơ bản]. Bài 46. Chia hết cho 28
// 28Tech là người rất thích số 28, anh ta cho bạn mảng A[] gồm N phần tử, bạn hãy đếm xem trong mảng có bao nhiêu cặp số A[i], A[j] với i khác j mà khi cộng với nhau sẽ tạo thành 1 số chia hết cho 28.

// Input Format

// Dòng 1 là N : số phần tử trong mảngg

// Dòng 2 là N phần tử cách nhau 1 khoảng trắng

// Constraints

// 1<=N<=10^6

// 0<=A[i]<=10^9

// Output Format

// In ra số cặp thỏa mãn

// Sample Input 0

// 12
// 7 4 14 2 12 5 18 14 27 13 25 14 
// Sample Output 0

// 3


#include <iostream>
#define ll long long
using namespace std;


int main(){
    int n; cin >> n; int a[n];
    int d[28] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        //danh dau phan du cua 28 vao mang (a+b)%28 = (a%28 + b%28) % 28
        d[a[i] % 28]++;
    }
    ll cnt = 0;
    for(int i = 0; i <= 14; i++){
        int j = (28 - i) % 28;
        if(i!=j){
            cnt += 1ll * d[i] * d[j];
        } else {
            //to hop chap 2 cua n phan tu.
            cnt += 1ll * d[i] * (d[i] - 1) / 2;
        }
        
    }
    cout << cnt;
    return 0;
}

// (a+b)%28 = (a%28 + b%28) % 28
// truong hop 1: (a + b) % 28 = 0 tnh toan la a lan * b lan.
// truong hop 2: (0 + 0) % 28 = 0 tinh loan la to hop chap 2 cua n phan tu.