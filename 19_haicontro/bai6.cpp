// [Hai Con Trỏ]. Bài 6. Segment count 1
// Cho mảng A[] gồm N số nguyên và số nguyên S, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà tổng không vượt quá S.

// Đầu vào
// • Dòng đầu tiên là N và S

// • Dòng thứ 2 là N số trong mảng A[]

// Giới hạn
// • 1<=N<=10^6

// • 1<=A[i]<=10^6

// • 1<=S<=10^9

// Đầu ra
// In ra số lượng mảng con thỏa mãn

// Ví dụ :
// Input 01
// Copy
// 13 14
// 5 4 5 2 4 5 1 1 2 5 5 2 2
// Output 01
// Copy
// 47
// Input 02
// Copy
// 5 3
// 1 4 2 1 5
// Output 02
// Copy
// 4

// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     int n; cin >> n;
//     int s; cin >> s;
//     long long b[n+1];
//     long long sum = 0;
//     long long cnt = 0;
//     b[0] = 0;
//     cout << b[0] << " ";
//     for(int r = 1; r <= n; r++){
//         int x; cin >> x;
//         sum += x;
//         b[r] = sum;
//         cout << sum << " ";
//     }

//     for(int r = n; r >= 0; r--){

//         int l = r-1;
//         while(l >= 0){
//             if(b[r] - b[l] <= s){
//                 cnt++;
//                 l--;
//             } else {
//                 break;
//             }
            
//         }
//     }

//     cout << cnt << " ";
//     return 0;
// }



#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,s;
    cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    ll sum = 0, ans = 0, l = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(r < n && sum > s){
            sum -= a[l++];
        } 
        ans += r - l + 1;
    }
    cout << ans;
    return (0 ^ 0);
}