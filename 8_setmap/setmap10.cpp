// [Set Map]. Bài 10. Intersection
// Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm giao của 2 mảng này và in theo thứ tự xuất hiện trong mảng A[].

// Gợi ý :

// Cách 1 : Dùng 2 set để lưu 2 mảng A, B sau đó duyệt 1 trong 2 mảng và tìm kiếm sự xuất hiện của phần tử đang duyệt trong mảng còn lại.

// Cách 2 : Dùng 1 map để đánh dấu, duyệt qua các phần tử trong mảng A[] và cho map của từng phần tử trong mảng A[] = 1, duyệt qua mảng B[] thì kiểm tra nếu map của phần tử trong mảng B đã bằng 1 thì chuyển thành 2. Cuối cùng duyệt map và in ra những phần tử được đánh dấu là 2.

// Input Format

// Dòng 1 gồm N và M

// Dòng 2 gồm N số trong mảng A[]

// Dòng 3 gồm M số trong mảng B[]

// Constraints

// 1<=N,M<=10^5

// -10^9<=A[i],B[i]<=10^9

// Output Format

// In ra tập giao của 2 mảng theo thứ tự xuất hiện trong mảng A[]

// Sample Input 0

// 9 8
// 7 5 0 0 1 6 2 7 3 
// 6 4 9 4 2 8 3 5 
// Sample Output 0

// 5 6 2 3 

#include <iostream>
#include <stdio.h>
#include <set>
#include <map>
#define ll long long
using namespace std;

int main(){

    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    set<int> sX;
    int n, m; cin >> n >> m; 
    int a[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;

    }

    for(int i = 0; i < m; i++){
        int x; cin >> x;
        sX.insert(x);
    }

    for(int item : a){
        if(sX.count(item)){
            cout << item << " ";
            sX.erase(item);
        }
    }


    return 0;
}