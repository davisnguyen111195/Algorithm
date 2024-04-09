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

using namespace std;

int main(){
    int n; cin >> n; int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    
    return 0;
}