// [Hai Con Trỏ]. Bài 1. Trộn 2 dãy
// Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là trộn 2 mảng này thành một mảng và sắp xếp theo thứ tự tăng dần. Độ phức tạp mong muốn là tuyến tính O(N + M)

// Đầu vào
// • Dòng đầu tiên là N và M

// • Dòng 2 là N số trong mảng A[]

// • Dòng 3 là M số trong mảng B[]

// Giới hạn
// • 1<=N,M<=10^7

// • 1<=A[i],B[i]<= 10^9

// Đầu ra
// In ra mảng tăng dần sau khi trộn A[] và B[]

// Ví dụ :
// Input 01
// Copy
// 6 6
// 1 2 4 4 9 10 
// 4 4 5 6 6 8
// Output 01
// Copy
// 1 2 4 4 4 4 5 6 6 8 9 10

#include <bits/stdc++.h>

using namespace std;


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    int c[n+m];
    for(int i = 0; i < n+m; i++){
        cin >> c[i];
    }
    sort(c, c+n+m);
    for(int item: c){
        cout << item << " ";
    }
    return 0;

}