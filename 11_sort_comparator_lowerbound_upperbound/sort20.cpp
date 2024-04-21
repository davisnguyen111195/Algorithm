// [Comparator_Binary Search]. Bài 17. Số trong đoạn
// Cho mảng A[] gồm N phần tử, có nhiều đoạn [L, R] và bạn phải trả lời trong mảng A[] có bao nhiêu phần tử thuộc đoạn [L, R].

// Gợi ý : Sort mảng a 1 lần, tìm vị trí đầu tiên của phần tử >= L, tìm vị trí cuối cùng của phần tử <= R, lấy vị trí cuối - vị trí đầu + 1 là ra kết quả. Độ phức tạp O(NlogN)

// Input Format

// Dòng 1 là N : Số lượng phần tử trong mảng

// Dòng 2 là N số trong mảng

// Dòng 3 là Q : Số lượng đoạn [L, R]

// Q dòng tiếp theo mỗi dòng là 2 số L, R

// Constraints

// 1<=N<=10^6

// 0<=A[i]<=10^9

// 1<=Q<=1000

// 0<=L<=R<=10^9

// Output Format

// In ra đáp án trên từng dòng

// Sample Input 0

// 9
// 14 14 0 8 2 0 13 2 8 
// 5 
// 2 10
// 6 6
// 1 5
// 3 4
// 1 3
// Sample Output 0

// 4
// 0
// 2
// 0
// 2

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int t; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        int* itl = lower_bound(a, a+n, l);
        int* itr = upper_bound(a, a+n, r);
        cout << itr - itl << endl;
    }
    return 0;
}