// [Sắp xếp - Tìm Kiếm]. Bài 39. Missing Coin Sum
// Bạn có n đồng xu với các giá trị nguyên dương. Tổng nhỏ nhất mà bạn không thể tạo bằng cách sử dụng một tập hợp con của các đồng xu là bao nhiêu?

// Input Format

// Dòng nhập đầu tiên có số nguyên n: số xu. Dòng thứ hai có n số nguyên x1, x2,…, xn: giá trị của mỗi đồng xu.

// Constraints

// 1≤ n ≤2.10^5; 1≤ ai, x ≤10^9

// Output Format

// In một số nguyên: tổng xu nhỏ nhất.

// Sample Input 0

// 5
// 2 9 1 2 7
// Sample Output 0

// 6
// Sample Input 1

// 10
// 1 2 3 4 8 9 20 29 5 1
// Sample Output 1

// 83

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    long long maxOld = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > maxOld + 1){
            break;
        } else {
            maxOld = a[i] + maxOld;
        }
    }
    cout << maxOld + 1;
    return 0;
}