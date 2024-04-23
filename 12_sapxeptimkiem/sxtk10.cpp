// [Sắp xếp - Tìm Kiếm]. Bài 10. Tìm kiếm nhị phân biến đổi
// Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. Hãy viết các hàm sau với độ phức tạp O(logN) :

// Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1.

// Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra -1.

// Tìm vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1.

// Tìm vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1.

// Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.

// Input Format

// Dòng đầu tiên là số nguyên dương N và X Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^6; 0<=A[i],X<=10^6;

// Output Format

// In ra 5 dòng tương ứng với 5 kết quả của 5 hàm đề bài yêu cầu.

// Sample Input 0

// 10 1160
// 19 1600 2172 2921 3409 4185 4639 6098 6744 9192 
// Sample Output 0

// -1
// -1
// 1
// 1
// 0

#include <bits/stdc++.h>

using namespace std;
int firstPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            res = mid;
            r = mid - 1;
        } else if(a[mid] > x){
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int lastPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            res = mid;
            l = mid + 1;
        } else if(a[mid] > x){
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int firstEqualPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] >= x){
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

int firstGreaterPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] > x){
            res = mid;
            r = mid - 1;
        } else { 
            l = mid + 1;
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
    //1
    int task1 = firstPos(a, 0, n-1, x);
    cout << task1 << endl;
    //2
    int task2 = lastPos(a, 0, n-1, x);
    cout << task2 << endl;
    //3
    cout << firstEqualPos(a, 0, n-1, x) << endl;
    //4
    cout << firstGreaterPos(a, 0, n-1, x) << endl;
    //5
    if(task1 == -1){
        cout << 0;
    } else {
        cout << task2 - task1 + 1;
    }

    return 0;
}