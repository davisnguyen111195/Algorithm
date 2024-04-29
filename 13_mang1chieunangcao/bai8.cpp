// [Mảng 1 Chiều]. Bài 5. Gửi thư
// Tất cả các thành phố của Lineland đều nằm trên trục tọa độ Ox. Do đó, mỗi thành phố được liên kết với vị trí xi - tọa độ trên trục Ox. Không có hai thành phố được đặt tại một điểm. Cư dân Lineland thích gửi thư cho nhau. Một người chỉ có thể gửi thư nếu người nhận sống ở một thành phố khác. Chi phí gửi thư chính xác bằng khoảng cách giữa thành phố của người gửi và thành phố của người nhận. Đối với mỗi thành phố, hãy tính hai giá trị mini và maxi, trong đó mini là chi phí tối thiểu để gửi thư từ thành phố thứ i đến một thành phố khác và maxi là chi phí tối đa để gửi thư từ thành phố thứ i đến một số thành phố khác

// Input Format

// Dòng đầu tiên là số nguyên dương n Dòng thứ hai chứa chuỗi n số nguyên khác nhau x1, x2, ..., xn (-10^9<= xi <=10^9), trong đó xi là tọa độ x của thành phố thứ i. Tất cả các xi là khác biệt và theo thứ tự tăng dần.

// Constraints

// 2 ≤ n ≤ 10^6; -10^9 ≤ xi ≤ 10^9

// Output Format

// Đối với mỗi thành phố in ra 2 giá trị mini và maxi trên 1 dòng.

// Sample Input 0

// 4
// -5 -2 2 7
// Sample Output 0

// 3 12
// 3 9
// 4 7
// 5 12

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
    }
    pair<int, int> b[n];
    b[0].first = abs(a[0] - a[1]);
    b[0].second = abs(a[n-1] - a[0]);
    b[n-1].first = abs(a[n-1] - a[n-2]);
    b[n-1].second = abs(a[n-1] - a[0]);
    for(int i = 1; i < n-1; i++){
        b[i].first = min(abs(a[i]-a[i-1]), abs(a[i]-a[i+1]));
        b[i].second = max(abs(a[i]-a[0]), abs(a[i]-a[n-1]));
    }
    for(auto item: b){
        cout << item.first << " " << item.second << endl;
    }
    return 0;
}