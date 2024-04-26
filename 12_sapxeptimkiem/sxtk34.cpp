// [Sắp xếp - Tìm Kiếm]. Bài 34. Căn hộ
// Có n người nộp đơn và m căn hộ miễn phí. Nhiệm vụ của bạn là phân phối các căn hộ sao cho càng nhiều người đăng ký sẽ nhận được căn hộ càng tốt. Mỗi người nộp đơn có một kích thước căn hộ mong muốn, và họ sẽ chấp nhận bất kỳ căn hộ nào có diện tích đủ gần với kích thước mong muốn.

// Input Format

// Dòng nhập đầu tiên có ba số nguyên n, m và k: số người đăng ký, số căn hộ và chênh lệch tối đa cho phép. Dòng tiếp theo chứa n số nguyên a1, a2,…, an: diện tích căn hộ mong muốn của mỗi người đăng ký. Nếu kích thước mong muốn của người nộp đơn là x, người đó sẽ chấp nhận bất kỳ căn hộ nào có kích thước từ x-k đến x + k. Dòng cuối cùng ghi m số nguyên b1, b2,…, bm: diện tích từng căn hộ.

// Constraints

// 1≤ n, m ≤10^5 0≤ k ≤10^9 1≤ai, bi ≤10^9

// Output Format

// In một số nguyên: số người nộp đơn sẽ nhận được một căn hộ.

// Sample Input 0

// 4 3 5
// 60 45 80 60
// 30 60 75
// Sample Output 0

// 2

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k; cin >> n >> m >> k;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+m);

    pair<int, int> pX[n];
    for(int i = 0; i < n; i++){
        pX[i] = {a[i]-k, a[i]+k};
    }

    int i = 0, j = 0;
    int cnt = 0;
    while(i < n && j < m){
        if(b[j] >= pX[i].first && b[j] <= pX[i].second){
            cnt++;
            i++;
            j++;
        } else if(b[j] > pX[i].second){
            i++;
        } else if(b[j] < pX[i].first){
            j++;
        }
    }
    cout << cnt;
    return 0;
}