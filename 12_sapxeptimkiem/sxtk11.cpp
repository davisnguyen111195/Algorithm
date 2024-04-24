// [Sắp xếp - Tìm Kiếm]. Bài 12. Khiêu vũ
// Trong lớp học có n bạn nam và m bạn nữ. Các bạn nam có chiều cao là a1, a2, ..., an. Các bạn nữ có chiều cao là b1, b2, ..., bm. Nhân dịp lễ tổng kết cuối năm, cả lớp dự định tổ chức buổi khiêu vũ nhưng có điều kiện là trong một đôi khiêu vũ bất kỳ, bạn nam phải cao hơn bạn nữ. Và mỗi bạn không tham gia quá 1 đôi khiêu vũ. Hãy tính số lượng cặp đôi nhiều nhất thỏa mãn yêu cầu trên.

// Input Format

// Input: gồm 3 dòng - Dòng thứ nhất là hai số n, m mỗi số cách nhau một khoảng trắng. - Dòng thứ hai gồm n số nguyên a1, a2, ..., an là chiều cao các bạn nam. - Dòng thứ ba gồm m số nguyên b1, b2, ..., bm là chiều cao các bạn nữ.

// Constraints

// 1<=n,m<=10^5; 1<=a[i],b[i]<=10^6;

// Output Format

// In ra số lượng cặp khiêu vũ nhiều nhất ghép được.

// Sample Input 0

// 5 5
// 2668 2956 20933 21199 24224 
// 11521 13084 19573 25628 28958 
// Sample Output 0

// 3

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    vector<int> vNam;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        vNam.push_back(a[i]);
    }
    vector<int> vNu;
    for(int i = 0; i < m; i++){
        cin >> b[i];
        vNu.push_back(b[i]);
    }
    sort(vNam.begin(), vNam.end(), greater<int>());
    sort(vNu.begin(), vNu.end(), greater<int>());

    while(*(vNu.begin()) >= *(vNam.begin())){
        vNu.erase(vNu.begin());
    }

    while(*(--vNu.end()) >= *(--vNam.end())){
        vNam.erase(--vNam.end());
    }

    if(vNu.size() > vNam.size()){
        cout << vNu.size();
    } else {
        cout << vNam.size();
    }
    return 0;
}