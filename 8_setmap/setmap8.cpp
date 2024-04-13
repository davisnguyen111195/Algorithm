// [Set Map]. Bài 8. Lớn nhất, nhỏ nhất
// Cho mảng A[] gồm n phần tử, có 4 loại thao tác

// Thao tác 1 : Thêm phần tử X vào mảng

// Thao tác 2 : Xóa mọi giá trị X khỏi mảng nếu X tồn tại trong mảng

// Thao tác 3 : Tìm phần tử nhỏ nhất trong mảng

// Thao tác 4 : Tìm phần tử lớn nhất trong mảng

// Đối với thao tác 3 và 4 bạn hãy in ra phần tử lớn nhất, nhỏ nhất trong mảng A[]

// Input Format

// Dòng 1 gồm N : Số lượng phần tử ban đầu trong mảng A[]

// Dòng thứ 2 gồm N phần tử ban đầu của mảng A[]

// Dòng 3 gồm số lượng thao tác Q

// Q dòng tiếp theo mỗi dòng mô tả 1 thao tác, trong đó nếu là thao tác 1 và 2 thì có thêm phần tử X.

// Constraints

// 1<=N<=10^5

// 1<=Q<=10000

// 0<=A[i], X<=10^6

// Output Format

// In ra kết quả với thao tác 3 và 4

// Sample Input 0

// 10
// 24 31 49 65 57 77 7 81 77 79 
// 10
// 2 60
// 2 7
// 3
// 3
// 2 45
// 1 16
// 4
// 3
// 1 6
// 1 8
// Sample Output 0

// 24
// 24
// 81
// 16

#include <iostream>
#include <stdio.h>
#include <set>
#include <map>

using namespace std;

int main(){
    #ifndef ON
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    multiset<int> msX;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        msX.insert(x);
    }
    int t; cin >> t;
    while(t--){
        int a; cin >> a;
        switch (a){
            case 1:
                int x; cin >> x;
                msX.insert(x);
                break;
            case 2:
                int k; cin >> k;
                msX.erase(k);
                break;
            case 3:
                cout << *msX.begin() << endl;
                break;
            case 4:
                cout << *(--msX.end()) << endl;
                break;
            

        }
    }
    return 0;
}

