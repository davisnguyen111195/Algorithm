// [Mảng 1 Chiều]. Bài 29. Tổng nhỏ nhất
// Cho mảng A[] gồm các số từ 0 đến 9. Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số được tạo bởi các số trong mảng A[]. Chú ý, tất cả các số trong mảng A[] đều được sử dụng để tạo nên hai số. Chú ý nếu bạn tạo thành các số có số 0 đứng đầu thì bạn có thể loại bỏ các số 0 vô nghĩa đó.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤N≤30; 0≤A[i]≤9

// Output Format

// In ra kết quả của bài toán trên 1 dòng.

// Sample Input 0

// 6
// 6 8 4 5 2 3
// Sample Output 0

// 604

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    return 0;
}