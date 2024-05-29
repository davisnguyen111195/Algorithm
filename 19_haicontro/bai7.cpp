// [Hai Con Trỏ]. Bài 7. Segment count 2
// Cho mảng A[] gồm N số nguyên và số nguyên S, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà tổng ít nhất bằng S

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
// 7 20
// 2 6 4 3 6 8 9
// Output 01
// Copy
// 9

#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x: a) cin >> x;
    long long sum = 0;
    long long cnt = 0;
    int l = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        if(sum >= s){
            while(true){
                if(sum - a[l] < s){
                    break;
                } else {
                    sum -= a[l];
                    cnt++;
                    l++;
                }
            }
            cnt++;   
        }
    }
    cout << cnt;
    return 0;
}