// [Mảng 1 chiều cơ bản]. Bài 24. Cửa sổ cỡ K
// Cho mảng số nguyên A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là tìm tổng của mọi dãy con liên tiếp cỡ K của mảng A[]

// Gợi ý : Duyệt các chỉ số bắt đầu của các dãy con cỡ K của mảng, chỉ số này chạy từ i = 0, tới i = n - k.

// Input Format

// Dòng đầu tiên là 2 số nguyên dương N, K; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

// Constraints

// 1<=K<=N<=1000; 0<=A[i]<=10^3;

// Output Format

// In ra tổng của các dãy con K phần tử liên tiếp trong mảng

// Sample Input 0

// 7 5
// 5 9 4 5 5 8 7 
// Sample Output 0

// 28 31 29 
// Explanation 0

// 5 + 9 + 4 + 5 + 5 = 28 9 + 4 + 5 + 5 + 8 = 31 4 + 4 + 4 + 8 + 7 = 29

// Sample Input 1

// 6 3
// 3 8 6 8 0 0 
// Sample Output 1

// 17 22 14 8 


#include <iostream>

using namespace std;

int main() {
    int n; cin >> n; int a[n];
    int k; cin >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int kk = n - k;
    int cnt = 0;
    for(int j = 0; n-kk+j <= n; j++){
        int sum = 0;
        cnt++;
        int end = n - kk + j;
        for(int m = j; m < end; m++){
            sum += a[m];
        }
        cout << sum << " ";

    }


    return 0;
}