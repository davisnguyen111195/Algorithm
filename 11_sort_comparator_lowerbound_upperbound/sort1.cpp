// [Sắp xếp - Tìm Kiếm]. Bài 33. Distinct Number
// Bạn được cung cấp một danh sách gồm n số nguyên và nhiệm vụ của bạn là tính số giá trị khác biệt trong danh sách.

// Input Format

// Input Dòng nhập đầu tiên có số nguyên n: số giá trị. Dòng thứ hai có n số nguyên x1, x2,…, xn.

// Constraints

// 1≤n≤2⋅10^5; 1≤xi≤10^9

// Output Format

// Output In một số nguyên: số lượng các giá trị riêng biệt.

// Sample Input 0

// 5
// 1 2 3 3 2
// Sample Output 0

// 3

#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}