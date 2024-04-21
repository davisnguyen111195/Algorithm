// [Comparator_Binary Search]. Bài 18. Đếm cặp số
// Cho mảng A[] gồm N phần tử và số nguyên K, bạn hãy đếm xem trong mảng có bao nhiêu cặp phần tử A[i], A[j] với i khác j mà có độ chênh lệnh giữa chúng bằng K.

// Gợi ý : Sort mảng A[], duyệt qua từng chỉ số i trong mảng, với mỗi chỉ số i tìm vị trí đầu tiên và vị trí cuối cùng của A[i] + K để đếm số cặp phần tử có thể kết hợp với A[i] để tạo thành cặp có chênh lệnh bằng K.

// Input Format

// Dòng 1 gồm N và K

// Dòng 2 gồm N phần tử trong mảng A[]

// Constraints

// 1<=N<=10^6

// 0<=K<=10^6

// 0<=A[i]<=10^9

// Output Format

// In ra số cặp thỏa mãn

// Sample Input 0

// 10 2
// 4 2 2 6 0 8 3 1 0 7 
// Sample Output 0

// 9

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int firstPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r) / 2;
        if(a[mid] == x){
            res = mid;
            r = mid - 1;
        } else if(a[mid] < x){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}

int lastPos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            res = mid;
            l = mid + 1;
        } else if(a[mid] < x){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];

    }

    sort(a, a+n);
    ll cnt = 0;
    for(int i = 0; i < n-1; i++){
        int target = a[i] + k;
        int l = firstPos(a, i+1, n-1, target);
        int r = lastPos(a, i+1, n-1, target);
        if(l != -1){
            cnt += r - l + 1;
        }
        
    }


    cout << cnt;
    return 0;
}