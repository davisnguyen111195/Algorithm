// [Comparator_Binary Search]. Bài 16. Lớn hơn hoặc bằng
// Cho mảng A[], B[] gồm N và M phần tử, nhiệm vụ của bạn là với mỗi phần tử trong mảng A[] bạn hãy chỉ ra có bao nhiêu phần tử trong mảng B[] lớn hơn hoặc bằng nó.

// Gợi ý : Sort mảng B[] rồi dùng binary_search biến đổi hoặc lower_bound, upper_bound.

// Input Format

// Dòng 1 là N và M, dòng 2 là mảng A[], dòng 3 là mảng B[]

// Constraints

// 1<=N,M<=10^6

// 0<=A[i],B[i]<=10^9

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 11 9
// 8 1 5 9 6 7 4 0 8 6 2 
// 8 4 0 4 8 6 2 8 5 
// Sample Output 0

// 3 8 5 0 4 3 7 9 3 4 8 

#include <bits/stdc++.h>

using namespace std;

int lonhonhoacbang(int a[], int l, int r, int x){
    int res = -1;
    if(x > a[r]){
        return -1;
    } else {
        while(l <= r){
            int mid = (l+r)/2;
            if(a[mid] >= x){
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }
}

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
        int res = lonhonhoacbang(b, 0, m-1, a[i]);
        if(res == -1){
            cout << 0 << " ";
        } else {
            cout << m - res << " ";
        }
        
    }

    return 0;
}