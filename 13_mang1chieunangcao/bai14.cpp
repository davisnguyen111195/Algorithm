// [Mảng 1 Chiều]. Bài 16. Định lý Pytago
// Theo định lý Pytago, ta đã biết một bộ 3 số (a, b, c) thỏa mãn a^2 + b^2 = c^2 thì đó là ba cạnh của một tam giác vuông. Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số thỏa mãn là ba cạnh của tam giác vuông hay không.

// Input Format

// Dòng đầu tiên là số nguyên N Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 5000; 1 ≤ A[i] ≤ 10^9

// Output Format

// In YES nếu trong mảng tồn tại 3 cặp thỏa mãn bộ 3 Pytago, ngược lại in NO.

// Sample Input 0

// 3
// 3 4 5
// Sample Output 0

// YES

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    set<ll> sX; 
    for(int i = 0; i < n; i++){
        sX.insert(a[i]*a[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(sX.count(a[i]*a[i]+a[j]*a[j])){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}