// [Mảng 1 Chiều]. Bài 27. Số thao tác giúp mảng tăng dần 2
// Cho dãy số A[] gồm có N phần tử. Ở mỗi thao tác bạn có thể tăng các phần tử trong mảng lên 1 lượng là d đơn vị, hãy xác định số thao tác tối thiểu sao cho mảng trở thành một dãy tăng chặt. Ví dụ dãy 1 2 3 7 8 là một dãy tăng chặt, nhưng dãy 1 2 2 7 8 không phải là một dãy tăng chặt. Ví dụ với mảng ban đầu là 1 3 3 2 và d = 2, ta cần thực hiện thao tác thứ nhất thêm d vào phần tử thứ 3 trong mảng, mảng trở thành 1 3 5 2, ta tiếp thục thực hiện 2 thao tác thêm d vào phần tử thứ 4, mảng trở thành dãy tăng chặt là 1 3 5 6

// Input Format

// Dòng đầu tiên là số nguyên N và số d. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤ N, d ≤ 10^4; 0 ≤ A[i] ≤ 10^6

// Output Format

// In ra số thao tác tối thiểu cần thực hiện để biến mảng thành dãy tăng chặt.

// Sample Input 0

// 3 3
// 15 17 9
// Sample Output 0

// 3
// Explanation 0

// Chỉ cần thêm 3 lần d vào phần tử thứ 3 mảng sẽ tăng dần.

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n, d; cin >> n >> d;
    int a[n]; ll cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 1; i < n; i++){
        if(a[i] <= a[i-1]){
            double div = 1.0*(a[i-1] - a[i])/d;
            div = (int)div + 1;
            a[i] += d*(int)div;
            cnt += (int)div;
        }
    }
    cout << cnt;
    return 0;
}