// [Mảng 1 Chiều]. Bài 15. BRT
// Thành phố X có N thị trấn trên trục đường chính. Tọa độ của các thị trấn lần lượt là a[1],a[2], …, a[N], các tọa độ này là phân biệt, không có 2 tọa độ nào trùng nhau. Chính quyền thành phố muốn xây dựng một tuyến buýt nhanh BRT để kết nối 2 thị trấn gần nhau nhất với nhau. Bạn hãy tính thử xem chiều dài của tuyến buýt này bằng bao nhiêu? Và có bao nhiêu cặp thị trấn có tiềm năng giống nhau để xây dựng tuyến BRT này.

// Input Format

// Dòng đầu tiên là số nguyên N (N ≤ 1000 000). Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// N ≤ 1000 000;-10^9 ≤ A[i] ≤ 10^9

// Output Format

// In ra 2 số nguyên C và D, lần lượt là khoảng cách ngắn nhất giữa 2 thị trấn, và số lượng cặp thị trấn có cùng khoảng cách ngắn nhất này.

// Sample Input 0

// 4
// 6 -3 0 4
// Sample Output 0

// 2 1
// Explanation 0

// Khoảng cách nhỏ nhất giữa 2 trị trấn là giữa thị trấn có tọa độ 4 và tọa độ 6.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int minX = 1e9+1;
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(a[i] - a[i-1] < minX){
            minX = a[i] - a[i-1];
            cnt = 1;
        } else if(a[i] - a[i-1] == minX){
            cnt++;
        }
    }
    cout << minX << " " << cnt;
    return 0;
}