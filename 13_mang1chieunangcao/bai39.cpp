// [Mảng 1 Chiều]. Bài 40. Mảng con
// Cho mảng A[] gồm N phần tử, mảng B gồm M phần tử. Nhiệm vụ của bạn là xác định xem B có phải là một mảng con (không cần liên tiếp nhưng cần giữ đúng thứ tự các phần tử) của mảng A hay không. Ví dụ mảng A[] = {1, 1, 2, 8, 9, 3, 4}, B[] = {1, 2, 9, 4} là một mảng con của mảng A

// Input Format

// Dòng đầu tiên gồm N và M; Dòng thứ 2 gồm N số A[i]; Dòng thứ 3 gồm M số B[i];

// Constraints

// 1<=N,M<=10^6; 1<=A[i],B[i]<=10^6;

// Output Format

// In ra YES nếu B là mảng con của A, ngược lại in NO.

// Sample Input 0

// 16 2
// 3 6 10 10 10 2 8 4 2 1 9 4 2 1 6 3 
// 2 3 
// Sample Output 0

// YES

#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef K
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    
    int i = 0, j = 0;
    int cnt = 0;
    while(i < n && j < m){
        if(a[i] == b[j]){
            j++;
            cnt++;
        }
        i++;
    }




    if(cnt == m){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}