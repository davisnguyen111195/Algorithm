// [Mảng 1 chiều cơ bản]. Bài 40. Số lần xuất hiện của chữ số
// Cho mảng A[] gồm N phần tử, bạn hãy tách từng chữ số của các số trong mảng A[] và đếm xem mỗi chữ số xuất hiện bao nhiêu lần. Chú ý trong mảng A[] có thể có số âm

// Input Format

// Dòng 1 là N : số phần tử trong mảng

// Dòng 2 là N số trong mảng viết cách nhau 1 dấu cách

// Constraints

// 1<=N<=10^6

// -10^7<=A[i]<=10^7

// Output Format

// In ra các chữ số xuất hiện trong các số ban đầu trong mảng theo thứ tự tăng dần kèm theo số lần xuất hiện của chúng
// Sample Input 0

// 15
// -3097 3584 4443 2088 1173 4029 5756 1436 4038 8538 -2054 2890 2376 3745 2684 
// Sample Output 0

// 0 6
// 1 3
// 2 6
// 3 9
// 4 10
// 5 6
// 6 4
// 7 5
// 8 8
// 9 3


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n; int a[n];
    int b[10] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        int k = abs(a[i]);
        if(k == 0){
            b[0]++;
        }
        while(k != 0){
            int check = k % 10;
            b[check]++;
            k /= 10;
        }
    }


    for(int i = 0; i < 10; i++){
        if(b[i])
            cout << i << " " << b[i] << endl;
    }
    return 0;
}