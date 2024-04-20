// [Comparator_Binary Search]. Bài 13. Lớn nhất nhỏ hơn hoặc bằng X
// Cho mảng A[] gồm N phần tử được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là giá trị của phần tử lớn nhất nhỏ hơn hoặc bằng X trong mảng hoặc kết luận là không xuất hiện.

// Lưu ý bài này các bạn cần code bằng 2 cách : Tự cài đặt theo hướng dẫn trong slide và sử dụng hàm upper_bound. Độ phức tạp cần đạt được cho code là O(logN)

// Input Format

// Dòng 1 là N và X : số lượng phần tử trong mảng và X

// Dòng 2 gồm N số viết cách nhau 1 dấu cách

// Constraints

// 1<=N<=1000

// 0<=A[i]<=10^9

// Output Format

// In ra đáp án của bài toán hoặc in ra NOT FOUND nếu không tìm thấy phần tử lớn nhất <= X

// Sample Input 0

// 10 3
// 1 2 2 2 2 4 5 6 7 110
// Sample Output 0

// // 


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(x < a[0]){
        cout << "NOT FOUND";
        return 0;
    }
    if(x >= a[n-1]){
        cout << a[n-1];
        return 0;
    }
    int* it = lower_bound(a, a+n, x);
    if(*it == x){
        cout << *it;
    } else {
        
        cout << *(--it);
    } 
    return 0;3
}