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
using ll = long long;
using namespace std;
ll sumArray(int a[]){
    int rangeA = sizeof a / sizeof(int);
    ll sum = 0;
    for(int i = 0; i <= rangeA; i++){
        sum = sum*10 + a[i];
    }
    return sum;
}
int main(){
    int n; cin >> n;
    int a[n];
    multiset<int> sX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sX.insert(a[i]);
    }
    int n1 = n/2; int b[n1];
    int n2 = n - n1; int c[n2];
    int k = 0, l = 0;
    ll sum1 = 0, sum2 = 0;
    while(sX.size() != 0){

    }
    
    return 0;
}