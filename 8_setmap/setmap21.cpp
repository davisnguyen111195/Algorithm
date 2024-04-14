// [Set Map]. Bài 22. Số lần xuất hiện
// Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn đó là với mỗi phần tử trong mảng bạn hãy chỉ ra đó là lần thứ mấy nó xuất hiện ? Ví dụ mảng A[] = {1, 2, 3, 1, 1, 4, 2, 3} sẽ có kết quả là : 1, 1, 1, 2, 3, 1, 2, 2

// Gợi ý : Cách 1 các bạn dùng multiset và hàm count. Cách 2 là dùng map.

// Input Format

// Dòng 1 là N : số lượng phần tử trong mảng

// Dòng 2 là N số cách nhau 1 dấu cách

// Constraints

// 1<=N<=10^6

// -10^9<=A[i]<=10^9

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 10
// 1 0 1 0 4 0 1 3 3 0 
// Sample Output 0

// 1 1 2 2 1 3 3 1 2 4 

#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n; 
    map<int, int> mX;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mX[x]++;
        cout << mX[x] << " ";
    }
    return 0;
}