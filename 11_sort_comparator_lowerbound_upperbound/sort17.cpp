// [Comparator_Binary Search]. Bài 14. Nhỏ hơn
// Cho mảng A[], B[] gồm N và M phần tử, nhiệm vụ của bạn là với mỗi phần tử trong mảng A[] bạn hãy chỉ ra có bao nhiêu phần tử trong mảng B[] nhỏ hơn nó.

// Gợi ý : Sort mảng B[] rồi dùng binary_search biến đổi hoặc lower_bound, upper_bound.

// Input Format

// Dòng 1 là N và M, dòng 2 là mảng A[], dòng 3 là mảng B[]

// Constraints

// 1<=N,M<=10^6

// 0<=A[i],B[i]<=10^9

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 5 8
// 2 8 7 2 8 
// 9 3 7 1 0 4 1 5 
// Sample Output 0

// 3 7 6 3 7 

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(b, b+m);
    for(int i = 0; i < n; i++){
        auto it = lower_bound(b, b+m, a[i]);
        if(a[i] < b[0]){
            cout << 0 << " ";
            continue;
        }
        if(a[i] > b[m-1]){
            cout << m << " ";
            continue;
        }
        if(it == b+m){
            cout << 0 << " ";
        } else {
            cout << it-b << " ";
        }
        
    }
    return 0;
}