// [Set Map]. Bài 3. Phần tử riêng biệt.
// Cho dãy số A[] gồm có N phần tử, bạn hãy liệt kê các giá trị xuất hiện trong dãy theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê một lần.

// Gợi ý : Dùng set để lưu các phần tử đã được in ra trước đó, gặp phần tử a[i] thì kiểm tra nhanh trong set có giá trị a[i] chưa để in ra

// set<int> se;
// for(int i = 0; i < n; i++){
//     //Nếu a[i] chưa nằm trong set thì in ra
//     //Check trong set sẽ nhanh hơn vì chỉ mất O(logN)
//     //Thêm a[i] vào set
// }
// Input Format

// Dòng đầu tiên là số nguyên N. Dòng thứ 2 gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 10^5; 0 ≤ A[i], X ≤ 10^9;

// Output Format

// In ra các giá trị xuất hiện trong mảng theo thứ tự xuất hiện.

// Sample Input 0

// 8
// 1 2 3 2 1 3 4 8
// Sample Output 0

// 1 2 3 4 8




#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
    set<int> sX;
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
        
    }

    for(int i = 0; i < n; i++){
        if(sX.find(a[i]) != sX.end()){
            continue;
        } else {
            sX.insert(a[i]);
            cout << a[i] << " ";
        }
        
    }


    return 0;
}