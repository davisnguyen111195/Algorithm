// [Mảng 1 Chiều]. Bài 2. Kiểm tra mảng tăng dần.
// Kiểm tra xem mảng đã cho có tăng chặt hay không, tức là các phần tử đứng sau luôn lớn hơn phần tử đứng trước nó.

// Input Format

// Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

// Constraints

// 1≤n≤10^6; 1≤ai≤10^9

// Output Format

// In YES nếu các phần tử trong mảng tăng dần, ngược lại in NO.

// Sample Input 0

// 6
// 1 2 3 8 9 22
// Sample Output 0

// YES
// Sample Input 1

// 5
// 1 2 8 8 10
// Sample Output 1

// NO

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 1; i < n; i++){
        if(a[i] <= a[i-1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}