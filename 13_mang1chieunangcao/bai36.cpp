// [Mảng 1 Chiều]. Bài 37. Dãy con dài nhất
// Cho mảng A[] gồm N phần tử và số nguyên dương K, nhiệm vụ của bạn là tìm dãy con liên tiếp dài nhất có tổng chia hết cho K.

// Bài này bạn cần tính tổng tích lũy đối với các chỉ số i trong mảng, tức là tổng các phần từ từ chỉ số 0 tới i, sau đó chia dư số này với K, được lưu vào biến R. Giả sử bạn đang ở chỉ số i và muốn xác định xem có dãy con nào kết thúc tại i mà có tổng chia hết cho K hay ko? Khi đó bạn cần check xem có chỉ số j nào < i mà tổng tích lũy từ 0 tới j chia cho K cũng dư R hay ko. Khi đó dãy con từ j + 1 tới i sẽ có tổng chia K dư 0. Ví dụ dãy A[] = {3, 7, 8, 4, 6} và K = 5, xét i tại 4 thì R = (3 + 7 + 8 + 4 + 6) % 5 = 3 và bạn thấy có 1 dãy con kết thúc tại j = 0 có R = (3) % 5 = 3 => dãy 7, 8, 4, 6 sẽ có tổng chia hết cho 5.

// Input Format

// Dòng thứ nhất gồm N K; Dòng thứ 2 gồm các phần tử trong mảng A[];

// Constraints

// 1<=K<=N<=10^6; -10^6<=A[i]<=10^6;

// Output Format

// In ra dãy con dài nhất hoặc in ra -1 nếu không tồn tại dãy con chia hết cho K.

// Sample Input 0

// 12 2
// -4 1 4 -4 4 4 -3 4 2 -4 2 4 
// Sample Output 0

// 12

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n+1];
    map<ll, int> mX; 

    int cnt = -1;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        a[i] = x;
    }
    mX[0] = 0;
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i];
        sum = (sum % k + k) % k;
        if(mX.count(sum)){
            cnt = max(cnt, i - mX[sum]);
        } 

        if(mX.count(sum) == 0){
            mX[sum] = i;
        }
    }

    cout << cnt;

    return 0;
}