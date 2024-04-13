// [Set Map]. Bài 13. Loại trừ
// Cho mảng A[] và B[] có N và M phần tử là các số nguyên, hãy tìm các phần tử xuất hiện trong mảng 1 mà không xuất hiện trong mảng 2.

// Input Format

// Dòng đầu tiên là N và M; Dòng thứ 2 là N số của mảng A[]; Dòng thứ 3 là M số của mảng B[];

// Constraints

// 1<=N, M<=10^6; -10^9<=A[i], B[i] <= 10^9;

// Output Format

// In ra các số xuất hiện trong mảng 1 mà không xuất hiện trong mảng 2 theo thứ tự từ bé đến lớn, mỗi giá trị thỏa mãn chỉ liệt kê 1 lần.

// Sample Input 0

// 3 4
// 1 2 3
// 1 2 4 5
// Sample Output 0

// 3

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
    set<int> mX;
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        mX.insert(x);
    }

    set<int> mX2;
    for(int i = 0; i < m; i++){
        int x; cin >> x; 
        mX2.insert(x);
    }

    for(auto item : mX){
        if(!mX2.count(item)){
            cout << item;
            mX2.insert(item);
        }
    }
    return 0;
}