// [QHD Basic]. Bài 7. squirrel 1
// Có N nhóm hạt ngũ cốc được đánh số từ 1 tới N mỗi nhóm sẽ có lượng hạt ngũ cốc là A[i] với 1<=i<=N, một con sóc đang ở vị trí nhóm hạt số 1. Nhiệm vụ của nó là tới được nhóm hạt thứ N, chi phí mỗi lần di chuyển từ nhóm hạt x sang nhóm hạt y là abs(A[x] - A[y]), mỗi lần di chuyển con sóc chỉ có thể di chuyển từ nhóm hạt i sang nhóm hạt i + 1 hoặc i + 2. Nhiệm vụ của bạn là tính số lượng ngũ cốc tối thiểu mà con sóc này phải tiêu tốn để có thể đi đến nhóm hạt thứ N

// Input Format

// Dòng 1 N

// Dòng 2 là N số là số hạt ngũ cốc của mỗi nhóm từ 1 tới N

// Constraints

// 1<=N<=10^6

// 1<=A[i]<=10^9

// Output Format

// In ra số lượng ngũ cốc mà sóc đã mất làm chi phí di chuyển

// Sample Input 0

// 9
// 3 7 2 4 8 1 1 5 5 
// Sample Output 0

// 10
// Sample Input 1

// 6
// 3 1 6 1 6 5
// Sample Output 1

// 4

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll f[1000006];
ll xuly(int a[], int i){
    if(i == 1) return 0;
    if(f[i]){
        return f[i];
    }
    ll d1 = 1e18;
    if(i > 2){
        d1 = xuly(a, i - 2) + abs(a[i] - a[i-2]);
    }

    ll d2 = xuly(a, i - 1) + abs(a[i] - a[i-1]);
    f[i] = min(d1, d2);
    return f[i];
}

int main(){
    int n; cin >> n; 
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cout << xuly(a, n);
    return 0;
}