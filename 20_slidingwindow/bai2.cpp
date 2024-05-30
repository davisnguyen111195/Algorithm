// [Sliding Window]. Bài 2. Maximum window
// Cho mảng A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là in ra số lớn nhất và nhỏ nhất của mọi mảng con cỡ K của mảng A[]

// Đầu vào
// Dòng đầu tiên là N và K

// Dòng thứ 2 gồm N phần tử A[i]

// Giới hạn
// 1<=K<=N<=10^6

// 0<=A[i]<=10^9

// Đầu ra
// In ra số lớn nhất và nhỏ nhất của mọi mảng con trên từng dòng.

// Ví dụ :
// Input 01
// Copy
// 8 2
// 8 5 8 6 7 6 5 8
// Output 01
// Copy
// 5 8
// 5 8
// 6 8
// 6 7
// 6 7
// 5 6
// 5 8

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x: a) cin >> x;
    multiset<int> sX;
    for(int i = 0; i < k; i++) {
        sX.insert(a[i]);
    }
    
    cout << *(sX.begin()) << " " << *(sX.rbegin()) << endl;
    for(int i = 1; i < n-k+1; i++){
        auto it = sX.find(a[i-1]);
        sX.erase(it);
        sX.insert(a[i+k-1]);
        cout << *(sX.begin()) << " " << *(sX.rbegin()) << endl;
    }

    return 0;
}