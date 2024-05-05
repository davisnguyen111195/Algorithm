// [Mảng 1 Chiều]. Bài 30. Chia mảng
// Cho mảng A[] gồm N số nguyên không âm và số K. Nhiệm vụ của bạn là hãy chia mảng A[] thành hai mảng con có kích cỡ K và N-K sao cho hiệu giữa tổng hai mảng con là lớn nhất. Ví dụ với mảng A[] = {8, 4, 5, 2, 10}, K=2 ta có kết quả là 17 vì mảng A[] được chia thành hai mảng {4, 2} và { 8, 5,10} có hiệu của hai mảng con là 23-6=17 là lớn nhất.

// Input Format

// Dòng đầu tiên là 2 số N và K. Dòng thứ 2 là N số trong mảng A

// Constraints

// 1≤ K < N ≤ 10^5; 0 ≤ A[i] ≤ 10^7

// Output Format

// In ra hiệu lớn nhất có thể.

// Sample Input 0

// 8 3
// 1 1 1 1 1 1 1 1
// Sample Output 0

// 2
// Sample Input 1

// 5 2
// 8 4 5 2 10
// Sample Output 1

// 17

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    multiset<int> sX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sX.insert(a[i]);
    }
    sort(a, a+n);
    ll sum1 = 0, sum2 = 0;
    int tmp = min(k, n-k);
    while(tmp--){
        sum1 += *sX.begin();
        sX.erase(sX.begin());
    }
    while(sX.size() != 0){
        sum2 += *sX.begin();
        sX.erase(sX.begin());
    }
    cout << sum2 - sum1;
    return 0;
}