// [Sắp xếp - Tìm Kiếm]. Bài 16. Xếp lịch diễn
// Ca sĩ nổi tiếng Lê Ro vừa nhận được các lời mời lưu diễn của n đoàn ca nhạc. Đoàn thứ i mời lưu diễn từ ngày ai đến ngày bi (ai, bi là các số nguyên, ai ≤ bi). Tuy nhiên tại một thời điểm, Lê Ro chỉ có thể tham gia hát cho một đoàn duy nhất mà thôi. Với mong muốn đem lời ca tiếng hát của mình đến nhiều khán giả nhất, Lê Ro quyết định sẽ chọn tham gia nhiều đoàn nhất có thể. Bạn hãy tính thử xem Lê Ro nên chọn tham gia những đoàn nào để số lượng đoàn là nhiều nhất mà không bị trùng nhau về mặt thời gian.

// Input Format

// Dòng thứ nhất là số nguyên n là số đoàn ca nhạc.
// Trong n dòng tiếp theo, dòng thứ i gồm hai số ai, bi cách nhau một khoảng trắng là ngày bắt đầu và ngày kết thúc lưu diễn của đoàn thứ i.
// Constraints

// 1<=n<=10^5; 1<=ai<=bi<=10^6

// Output Format

// Số nguyên xác định số lượng đoàn nhiều nhất mà Lê Ro có thể tham gia.

// Sample Input 0

// 6
// 3 8
// 9 12
// 6 10
// 1 4
// 2 7
// 11 14
// Sample Output 0

// 3

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}


int main(){
    int n; cin >> n;
    pair<int, int> pX[n];
    int tmp = n;
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        pX[i] = {a, b};
    }

    sort(pX, pX+tmp, cmp);
    int cnt = 1;
    int prev = 0;
    for(int i = 1; i < n; i++){
        if(pX[i].first > pX[prev].second){
            cnt++;
            prev = i;
        }
    }
    cout << cnt;
    return 0;
}