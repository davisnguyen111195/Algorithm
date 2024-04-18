// [QHD Basic]. Bài 8. squirrel 2
// Có N nhóm hạt ngũ cốc được đánh số từ 1 tới N mỗi nhóm sẽ có lượng hạt ngũ cốc là A[i] với 1<=i<=N, một con sóc đang ở vị trí nhóm hạt số 1. Nhiệm vụ của nó là tới được nhóm hạt thứ N, chi phí mỗi lần di chuyển từ nhóm hạt x sang nhóm hạt y là abs(A[x] - A[y]), mỗi lần di chuyển con sóc chỉ có thể di chuyển từ nhóm hạt i sang nhóm hạt i + 1 hoặc i + 2,... i + K. Nhiệm vụ của bạn là tính số lượng ngũ cốc tối thiểu mà con sóc này phải tiêu tốn để có thể đi đến nhóm hạt thứ N

// Input Format

// Dòng 1 N, K

// Dòng 2 là N số là số hạt ngũ cốc của mỗi nhóm từ 1 tới N

// Constraints

// 1<=N<=10^6

// 1<=K<=100

// 1<=A[i]<=10^9

// Output Format

// In ra số lượng ngũ cốc mà sóc đã mất làm chi phí di chuyển

// Sample Input 0

// 5 3
// 5 1 1 4 7 
// Sample Output 0

// 4

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll f[1000006];
ll algo(ll a[], int i, int k){
    if(i == 1) return 0;
    if(f[i]){
        return f[i];
    }
    ll minD = 1e18;
    for(int j = 1; j <= k; j++){
        if(i > j){
            minD = min(minD, algo(a, i - j, k) + abs(a[i] - a[i-j]));
        }
    }
    f[i] = minD;
    return f[i];
}

int main(){
    int n, k; cin >> n >> k;
    ll a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    cout << algo(a, n, k);
    return 0;
}