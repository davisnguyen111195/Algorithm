// [Set Map]. Bài 14. Suffix And Query
// Cho mảng A[] gồm N phần tử. Bạn được yêu cầu trả lời cho các truy vấn, mỗi truy vấn yêu cầu bạn đếm số các giá trị khác nhau từ chỉ số L tới chỉ số N - 1.

// Gợi ý : Gọi F[i] là số lượng các giá trị khác nhau tính từ chỉ số i tới chỉ số n - 1 trong mảng, xây dựng trước mảng F[i], sau đó mỗi truy vấn chỉ cần truy cập vào F[l] là có thể tìm được số lượng các giá trị khác nhau từ l tới n - 1. Cách xây dựng mảng F[] là duyệt từ cuối về và dùng 1 set để lưu các giá trị khác nhau tính từ cuối, gán F[i] = set.size()

// Input Format

// Dòng đầu tiên là N - số lượng phần tử của mảng

// Dòng thứ 2 gồm N phần tử A[i] của mảng

// Dòng thứ 3 là số truy vấn Q

// Q dòng tiếp theo mỗi dòng là một số L.

// Constraints

// 1<=N<=1000000

// 1<=A[i]<=10^9

// 1<=Q<=10000

// 0<=L<=N-1

// Output Format

// Với mỗi truy vấn in kết quả trên 1 dòng.

// Sample Input 0

// 9
// 3 3 3 4 2 0 3 1 2 
// 4
// 8
// 6
// 1
// 7
// Sample Output 0

// 1
// 3
// 5
// 2


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
    int n; cin >> n;
    
    int a[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
    }
    map<int, int> mX;
    set<int> sX;
    for(int r = n - 1; r >=0; r--){
        
        sX.insert(a[r]);
        mX[r] = sX.size();
    }
    sX.clear();
    int t; cin >> t;
    while(t--){
        int left; cin >> left;
        cout << mX[left] << endl;
    }
    return 0;
}