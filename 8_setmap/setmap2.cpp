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

#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;


bool binary_search(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int half = (l+r)/ 2;
        if(a[half] == x){
            return true;
        } else if(a[half] < x){
            l = half + 1;
        } else {
            r = half - 1;
        }
    }
    return false;
}

//dung binary search
int main(){
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
    }
    sort(a, a+n);
    int testCase; cin >> testCase;
    while(testCase--){
        int target; cin >> target;
        if(binary_search(a, n, target)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}











// //dung map
// int main(){

//     int n; cin >> n;
//     map<int, int> mX;
//     for(int i = 0; i < n; i++){
//         int x; cin >> x;
//         mX[x]++;
//     }

//     int testCase; cin >> testCase;
//     while(testCase--){
//         int k; cin >> k;
//         if(mX.find(k) != mX.end()){
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
















// //dung set
// int main(){
//     int n; cin >> n; 
//     set<int> sX;
//     for(int i = 0; i < n; i++){
//         int x; cin >> x;
//         sX.insert(x);
//     }

//     int t; cin >> t;
//     while(t--){
//         int k; cin >> k;
//         if(sX.find(k) != sX.end()){
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }