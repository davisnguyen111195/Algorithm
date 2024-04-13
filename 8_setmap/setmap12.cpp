// [Set Map]. Bài 12. Symmetric difference
// Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm những phần tử xuất hiện ở 1 trong 2 mảng nhưng không được xuất hiện ở cả 2 mảng.

// image

// Input Format

// Dòng 1 gồm N và M

// Dòng 2 gồm N số trong mảng A[]

// Dòng 3 gồm M số trong mảng B[]

// Constraints

// 1<=N,M<=10^5

// -10^9<=A[i],B[i]<=10^9

// Output Format

// In ra đáp án của bài toán theo thứ tự từ bé đến lớn

// Sample Input 0

// 9 8
// 9 0 2 3 9 7 8 1 4 
// 1 0 2 1 1 2 0 5 
// Sample Output 0

// 3 4 5 7 8 9 

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
    map<int, int> mX;
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        mX[x] = 1;
    }
    set<int> sX;
    map<int, int> mX2;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        mX2[x] = 1;
        if(!mX.count(x)){
            sX.insert(x);
        }
    }

    for(auto item : mX){
        if(!mX2.count(item.first)){
            sX.insert(item.first);
        }
    }

    for(auto item : sX){
        cout << item << " ";
    }
    return 0;
}