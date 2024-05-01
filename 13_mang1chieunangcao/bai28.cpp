// [Mảng 1 Chiều]. Bài 28. Product sum
// Cho mảng A[] gồm N phần tử.Nhiệm vụ của bạn là tìm giá trị lớn nhất của tổng bên dưới bằng cách sắp đặt lại các phần tử trong mảng. Chú ý, kết quả của bài toán có thể rất lớn vì vậy bạn hãy đưa ra kết quả lấy modulo với 10^9+7.image

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 10^5; 0 ≤ A[i] ≤ 10^7

// Output Format

// In ra kết quả của bài toán lấy dư với (10^9 + 7)

// Sample Input 0

// 5
// 5 3 2 4 1
// Sample Output 0

// 40

#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const ll mod = 1e9+7;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll maxX = -1;
    ll b[n]; b[0] = 0;
    for(int i = 1; i < n; i++){
        b[i] = (b[i-1] % mod + (a[i] % mod * i % mod) % mod) % mod;
        maxX = max(maxX, b[i]);
    }

    cout << maxX;
    return 0;
}