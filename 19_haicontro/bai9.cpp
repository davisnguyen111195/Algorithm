// [Hai Con Trỏ]. Bài 9. Segment count 4
// Cho mảng A[] gồm N số nguyên và số nguyên K, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà độ chênh lệch giữa phần tử lớn nhất và phần tử nhỏ nhất trong mảng con đó không vượt quá K

// Đầu vào
// • Dòng đầu tiên là N và K

// • Dòng thứ 2 là N số trong mảng A[]

// Giới hạn
// • 1<=N<=10^5

// • 1<=A[i],K<=10^6

// Đầu ra
// In ra số lượng mảng con thỏa mãn đề bài

// Ví dụ :
// Input 01
// Copy
// 10 1
// 2 3 1 3 1 4 1 3 1 2
// Output 01
// Copy
// 12

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x: a) cin >> x;
    multiset<int> sX;
    int l = 0;
    long long cnt = 0;
    for(int r = 0; r < n; r++){
        sX.insert(a[r]);
        while(sX.size() > 0 && *(--sX.end()) - *(sX.begin()) > s){
            auto it = sX.find(a[l]);
            sX.erase(it);
            l++;
        }
        cnt += r-l+1;
    }
    cout << cnt;
    return 0;
}