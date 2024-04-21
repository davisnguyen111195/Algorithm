// [Set Map]. Bài 2. Truy vấn phần tử trong mảng.
// Cho dãy số A[] gồm có N phần tử, bạn hãy trả lời các truy vấn để xác định xem phần tử X nào đó có nằm trong mảng hay không? Bạn hãy thử giải bài này bằng 3 cách : Set, Map, Binary Search.

// Nếu dùng set, map để lưu mảng A[] mỗi truy vấn tìm kiếm (hàm find) bạn chỉ mất độ phức tạp O(logN) thay vì O(N) như duyệt tuần tự, tương tự bạn có thể sort mảng A[] để áp dụng tìm kiếm nhị phân trên mỗi truy vấn.

// Input Format

// Dòng đầu tiên là số nguyên N.

// Dòng thứ 2 gồm N số nguyên A[i]

// Dòng thứ 3 là số lượng truy vấn Q.

// Q dòng tiếp theo mỗi dòng là một số nguyên X.

// Constraints

// 1≤ N ≤ 10^5; 0 ≤ A[i], X ≤ 10^9; 1≤ Q ≤ 1000;

// Output Format

// Đối với mỗi truy vấn in ra YES nếu phần tử X xuất hiện trong mảng, ngược lại in ra NO.

// Sample Input 0

// 5
// 1 2 1 3 4
// 2
// 1 
// 6
// Sample Output 0

// YES
// NO

#include <bits/stdc++.h>

using namespace std;
bool binSearch(int a[], int l, int r, int x){
    while(l <= r){
        int mid = (l+r) / 2;
        if(a[mid] == x){
            return true;
        } else if(a[mid] < x){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return false;

}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    int t; cin >> t;
    while(t--){
        int ac; cin >> ac;
        if(binSearch(a, 0, n-1, ac)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}