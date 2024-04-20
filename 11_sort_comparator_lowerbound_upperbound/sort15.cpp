// [Comparator_Binary Search]. Bài 12. Last position
// Cho mảng A[] gồm N phần tử được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là tìm vị trí cuối cùng của X trong mảng hoặc kết luận là X không xuất hiện.

// Lưu ý bài này các bạn cần code bằng 2 cách : Tự cài đặt theo hướng dẫn trong slide và sử dụng hàm upper_bound. Gợi ý là tìm upper_bound vs X rồi dịch trái 1 phần tử. Độ phức tạp cần đạt được cho code là O(logN)

// Input Format

// Dòng 1 là N và X : số lượng phần tử trong mảng và X

// Dòng 2 gồm N số viết cách nhau 1 dấu cách

// Constraints

// 1<=N<=1000

// 0<=A[i]<=10^9

// Output Format

// In ra vị trí cuối cùng (theo chỉ số tính từ 0) của phần tử X hoặc in ra -1 nếu X không xuất hiện trong mảng.

// Sample Input 0

// 6 3
// 1 2 3 3 3 4
// Sample Output 0

// 4

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int* it = upper_bound(a, a+n, x);

    if((it - a) == n){
        cout << -1;
    } else {
        cout << (--it) - a;
    }
}