// [Mảng 1 Chiều]. Bài 26. Số thao tác giúp mảng tăng dần
// Cho dãy số A[] gồm có N phần tử. Ở mỗi thao tác bạn có thể tăng các phần tử trong mảng lên 1 vài đơn vị, hãy xác định số đơn vị tối thiểu cần thêm vào các phần tử trong mảng sao cho mảng trở thành một dãy tăng chặt. Ví dụ dãy 1 2 3 7 8 là một dãy tăng chặt, nhưng dãy 1 2 2 7 8 không phải là một dãy tăng chặt.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 10^6; 0 ≤ A[i] ≤ 10^6

// Output Format

// In ra số đơn vị tối thiểu cần thêm vào các phần tử trong mảng để dãy tăng chặt.

// Sample Input 0

// 5
// 3 2 7 8 1
// Sample Output 0

// 10

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long cnt = 0;
    for(int i = 1; i < n; i++){
        while(a[i] <= a[i-1]){
            a[i]++;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
