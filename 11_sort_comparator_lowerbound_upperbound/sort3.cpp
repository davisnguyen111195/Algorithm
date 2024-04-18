// [Two Pointer]. Bài 10. TwoSum
// Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng có 2 phần tử A[i], A[j] với i khác j và A[i] + A[j] = K hay không ? Bài này các bạn có thể giải theo 3 cách : Binary search, Hai con trỏ, Map.

// Input Format

// Dòng đầu tiên là N và K

// Dòng thứ 2 là N số trong mảng A[]

// Constraints

// 1<=N<=5000

// 1<=A[i],K<=10^9

// Output Format

// In ra YES nếu tồn tại, ngược lại in ra NO

// Sample Input 0

// 5 28
// 2 1 10 5 9 
// Sample Output 0

// NO
// Sample Input 1

// 7 12
// 8 3 8 5 5 9 8 
// Sample Output 1

// YES


#include <bits/stdc++.h>
using ll = long long;
using namespace std;


//two pointer
// bai nay dung two pointer toi uu nhat, binary sear, map phai kiem tra dieu kien i != j cua 2 bien
int main() {

    
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        
    }
    
    sort(a, a+n);
    int l = 0, r = n -1;
    while(l < r){
        if(a[l] + a[r] == k){
            cout << "YES\n";
            return 0;
        } else if(a[l] + a[r] < k){
            ++l;
        } else {
            --r;
        }
    }
    cout << "NO\n";
    return 0;
}
