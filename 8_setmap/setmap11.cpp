// [Set Map]. Bài 11. Difference
// Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm những phần tử xuất hiện trong mảng thứ nhất nhưng không xuất hiện trong mảng thứ 2, liệt kê theo thứ tự từ bé đến lớn.

// Gợi ý : Dùng 2 set để lưu mảng A, B. Duyệt các phần tử trong set 1 và tìm kiếm nếu phần tử ko nằm trong set 2 thì in ra.

// Input Format

// Dòng 1 gồm N và M

// Dòng 2 gồm N số trong mảng A[]

// Dòng 3 gồm M số trong mảng B[]

// Constraints

// 1<=N,M<=10^5

// -10^9<=A[i],B[i]<=10^9

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 6 6
// 1 9 3 8 0 7 
// 3 1 7 3 7 5 
// Sample Output 0

// 0 8 9 


#include <iostream>
#include <stdio.h>
#include <map>
#include <set>

using namespace std;

int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, m; cin >> n >> m;
    set<int> sX1, sX2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        sX1.insert(x);
    }

    for(int i = 0; i < m; i++){
        int x; cin >> x;
        sX2.insert(x);
    }


    for(auto item : sX1){
        if(sX2.find(item) == sX2.end()){
            cout << item << " ";
        }
    }

    return 0;
}