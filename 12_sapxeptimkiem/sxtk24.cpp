// [Sắp xếp - Tìm Kiếm]. Bài 24. Biểu thức nhỏ nhất
// Một dãy gồm n số nguyên không âm a1, a2,..., an được viết thành một hàng ngang, giữa hai số liên tiếp có một khoảng trắng, như vậy có tất cả (n-1) khoảng trắng. Người ta muốn đặt k dấu cộng và (n-1-k) dấu trừ vào (n-1) khoảng trắng đó để nhận được một biểu thức có giá trị lớn nhất. Ví dụ, với dãy gồm 5 số nguyên 28, 9, 5, 1, 69 và k = 2 thì cách đặt 28+9-5-1+69 là biểu thức có giá trị lớn nhất. Yêu cầu: Cho dãy gồm n số nguyên không âm a1, a2,..., an và số nguyên dương k, hãy tìm cách đặt k dấu cộng và (n-1-k) dấu trừ vào (n-1) khoảng trắng để nhận được một biểu thức có giá trị lớn nhất.

// Input Format

// Dòng đầu chứa hai số nguyên dương n, k; Dòng thứ hai chứa n số nguyên không âm a1, a2,..., an;

// Constraints

// 1<= k < n ≤ 10^5; 0 <= a[i] ≤ 10^6

// Output Format

// In ra giá trị lớn nhất của biểu thức

// Sample Input 0

// 6 3
// 9560 5571 9008 3649 1473 3782 
// Sample Output 0

// 22799

#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

 
    int minusK = n - 1 - k;
    sort(a+1, a+n);
    //phan tu dau tien khong duoc cho dau "-"
    long long sum = a[0];
    for(int i = 1; i < n; i++){
        if(minusK > 0){
            a[i] = -1*a[i];
            minusK--;
        }
        sum += a[i];
    }
    cout << sum;
    return 0;
}