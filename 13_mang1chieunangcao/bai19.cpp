// [Mảng 1 Chiều]. Bài 22. Số bị lặp đầu tiên
// Cho mảng các số nguyên. Tìm phần tử lặp đầu tiên trong mảng.

// Input Format

// Dòng đầu tiên là số lượng phần tử trong mảng n. Dòng thứ 2 là các phần tử ai trong mảng .

// Constraints

// 1≤n≤1000000; 0≤ai≤10^6

// Output Format

// In ra số bị lặp đầu tiên trong mảng, nếu không có số nào bị lặp in ra -1.

// Sample Input 0

// 5
// 1 2 2 3 1
// Sample Output 0

// 2

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    ll n; cin >> n;
    ll a[n];
    int range = 1e6+2;
    ll d[range] = {0};
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        if(d[a[i]]){
            cout << a[i];
            return 0;
        }
        d[a[i]]++;
    }

    
    cout << -1;
    return 0;
}