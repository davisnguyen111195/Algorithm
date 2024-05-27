// [Hai Con Trỏ]. Bài 2. 28tech smaller
// Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là đối với mỗi phần tử trong mảng B[] hãy đếm xem trong mảng A[] có bao nhiêu phần tử nhỏ hơn nó.

// Đầu vào
// • Dòng đầu tiên là N và M

// • Dòng 2 là N số trong mảng A[]

// • Dòng 3 là M số trong mảng B[]

// Giới hạn
// • 1<=N,M<=10^7

// • 1<=A[i],B[i]<= 10^9

// Đầu ra
// In ra đáp án của bài toán

// Ví dụ :
// Input 01
// Copy
// 6 7
// 2 3 6 6 6 8 
// 5 5 5 6 6 7 10
// Output 01
// Copy
// 2 2 2 2 2 5 6

// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     int n, m;
//     cin >> n >> m;
//     int a[n+1], b[m+1];
//     for(int i = 1; i <= n; i++){
//         cin >> a[i];
//     }
//     b[0] = 0;
//     for(int i = 1; i <= m; i++){
//         cin >> b[i];
//     }
//     int j = 1;
//     long long c[m+1]; c[0] = 0;
//     for(int i = 1; i <= m; i++){
//         if(b[i] == b[i-1]){
//             c[i] = c[i-1];
//         } else {
//             long long cnt = c[i-1];
//             while(a[j] < b[i] && j <= n){
//                 cnt++;
//                 j++;
//             }
//             c[i] = cnt;
//         }
        
//     }

//     for(int i = 1; i <= m; i++){
//         cout << c[i] << " ";
//     }
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int &x: a) cin >> x;
    for(int &x: b) cin >> x;

    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            i++;
        } else {
            cout << i << " ";
            j++;
        }
    }

    while(j < m){
        cout << n << " ";
        j++;
    }
    return 0;
}