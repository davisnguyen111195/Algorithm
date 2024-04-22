// [Comparator_Binary Search]. Bài 11. First position
// Cho mảng A[] gồm N phần tử được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là tìm vị trí đầu tiên của X trong mảng hoặc kết luận là X không xuất hiện.

// Cài đặt theo cách dùng mảng với vector

// Lưu ý bài này các bạn cần code bằng 2 cách : Tự cài đặt theo hướng dẫn trong slide và sử dụng hàm lower_bound. Độ phức tạp cần đạt được cho code là O(logN)

// Input Format

// Dòng 1 là N và X : số lượng phần tử trong mảng và X

// Dòng 2 gồm N số viết cách nhau 1 dấu cách

// Constraints

// 1<=N<=1000

// 0<=A[i]<=10^9

// Output Format

// In ra vị trí đầu tiên (theo chỉ số tính từ 0) của phần tử X hoặc in ra -1 nếu X không xuất hiện trong mảng.

// Sample Input 0

// 16 9
// 0 1 2 3 3 3 7 7 8 8 11 11 12 12 15 15 
// Sample Output 0

// -1
// Sample Input 1

// 10 3
// 1 1 1 2 2 2 3 3 3 3
// Sample Output 1

// 6

#include <bits/stdc++.h>

using namespace std;

int firstPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            res = mid;
            r = mid - 1;
        } else if(a[mid] < x){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int res = firstPos(a, 0, n-1, x);
    cout << res;
    return 0;
}