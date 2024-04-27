// [Sắp xếp - Tìm Kiếm]. Bài 36. Hòa nhạc
// Có n vé xem hòa nhạc có sẵn, mỗi vé có một mức giá nhất định. Sau đó, m khách hàng lần lượt đến. Mỗi khách hàng thông báo mức giá tối đa mà họ sẵn sàng trả cho một vé và sau đó, họ sẽ nhận được một vé với mức giá gần nhất có thể sao cho không vượt quá mức giá tối đa.

// Input Format

// Dòng đầu tiên chứa các số nguyên n và m: số lượng vé và số lượng khách hàng. Dòng tiếp theo ghi n số nguyên h1, h2,…, hn: giá của từng vé. Dòng cuối cùng chứa m số nguyên t1, t2,…, tm: giá tối đa cho mỗi khách hàng theo thứ tự họ đến.

// Constraints

// 1≤ n, m ≤2.10^5; 1≤ ti, hi ≤10^9

// Output Format

// In, cho mỗi khách hàng, giá mà họ sẽ trả cho vé của họ. Sau đó, vé không thể được mua lại lần nữa. Nếu khách hàng không lấy được vé nào, hãy in −1.

// Sample Input 0

// 5 3
// 5 3 7 8 5
// 4 8 3
// Sample Output 0

// 3
// 8
// -1

#include <bits/stdc++.h>

using namespace std;
int lowerEqualPos(int a[], int l, int r, int x){

}
int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    multiset<int> mS;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mS.insert(a[i]);
    }
    
    for(int i = 0; i < m; i++){
        cin >> b[i];    
        auto target = mS.upper_bound(b[i]);
        if(target != mS.begin()){
            auto x = --target;
            cout << *x << endl;
            mS.erase(x);
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}