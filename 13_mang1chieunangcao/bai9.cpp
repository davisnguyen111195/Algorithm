// [Mảng 1 Chiều]. Bài 6. Đếm cặp số nguyên tố cùng nhau
// Cho một dãy số nguyên dương có n phần tử. Hãy đếm các cặp số nguyên tố cùng nhau trong mảng.

// Input Format

// Dòng đầu tiên là số lượng phần tử trong mảng n. Dòng thứ 2 là các phần tử ai trong mảng

// Constraints

// 1≤n≤1000; 1≤ai≤10^9

// Output Format

// In ra số lượng cặp số nguyên tố cùng nhau trong mảng.

// Sample Input 0

// 5
// 2 4 8 3 6 
// Sample Output 0

// 3
// Explanation 0

// Các cặp số nguyên tố cùng nhau là : (2, 3), (3, 4), (3, 8)

#include <bits/stdc++.h>
using ll = long long;

using namespace std;

ll gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}


int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(gcd(a[i], a[j]) == 1){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;  
}