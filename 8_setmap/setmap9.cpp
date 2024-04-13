// [Set Map]. Bài 9. Union
// Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm hợp của 2 mảng này và in theo thứ tự từ lớn về nhỏ.

// Gợi ý : Để tìm hợp của 2 mảng thì chỉ cần dùng 1 set và lưu mọi phần tử của 2 mảng, set sẽ tự loại bỏ các phần tử trùng nhau trong cả 2 mảng.

// Cú pháp duyệt ngược của set như sau :

// for(auto it = se.rbegin(); it != se.rend(); ++it){
//         cout << *it << ' ';
//     }
// Input Format

// Dòng 1 gồm N và M

// Dòng 2 gồm N số trong mảng A[]

// Dòng 3 gồm M số trong mảng B[]

// Constraints

// 1<=N,M<=10^5

// -10^9<=A[i],B[i]<=10^9

// Output Format

// In ra tập hợp của 2 mảng theo thứ tự giảm dần

// Sample Input 0

// 9 6
// 7 9 2 0 0 5 6 4 7 
// 9 7 3 4 5 7 
// Sample Output 0

// 9 7 6 5 4 3 2 0 

#include <iostream>
#include <stdio.h>
#include <set>
#include <map>

using namespace std;

int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n, m; cin >> n >> m;
    set<int> sX;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        sX.insert(x);
    }

    for(int i = 0; i < m; i++){
        int x; cin >> x; 
        sX.insert(x);
    }

    for(auto it = sX.rbegin(); it != sX.rend(); it++){
        cout << *it << " ";
    }
    return 0;
}