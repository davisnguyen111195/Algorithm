// [Set Map]. Bài 25. Set và phần tử thứ 2
// Cho mảng A[] gồm N phần tử, gọi B[] là mảng chứa các phần tử khác nhau trong mảng A[], bạn hãy in ra : - Số lượng phần tử của mảng B

// Giá trị lớn nhất, nhỏ nhất của mảng B[]

// Giá trị lớn thứ nhỉ, nhỏ thứ nhì của mảng B[]

// Dữ liệu đảm bảo B[] có ít nhất 2 phần tử.

// Input Format

// Dòng 1 là N : số lượng phần tử trong mảng

// Dòng 2 là N số cách nhau 1 dấu cách

// Constraints

// 1<=N<=10^6

// -10^9<=A[i]<=10^9

// Output Format

// In ra 3 dòng theo yêu cầu

// Sample Input 0

// 17
// 1 0 9 1 5 1 4 7 9 7 5 2 6 3 3 4 8 
// Sample Output 0

// 10
// 9 0
// 8 1



#include <iostream>
#include <stdio.h>
#include <set>

using namespace std;

int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    set<int> sX;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        sX.insert(x);
    }
    int size = sX.size();
    cout << size << endl;
    
    cout << *(--sX.end()) << " " << *(sX.begin()) << endl;
    sX.erase(--sX.end());
    sX.erase(sX.begin());\
    cout << *(--sX.end()) << " " << *(sX.begin()) << endl;
    return 0;
}