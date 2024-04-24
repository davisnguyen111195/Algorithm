// [Sắp xếp - Tìm Kiếm]. Bài 13. Xếp gạch
// Nam có n viên gạch được đánh số từ 1 đến n. Các viên gạch có độ cứng lần lượt là a1, a2,..., an. Một viên gạch có độ cứng x nghĩa là Nam có thể chồng lên trên viên gạch đó tối đa x viên gạch khác, nếu chồng nhiều hơn thì viên gạch đó bị vỡ. Hỏi Nam có thể sắp được chồng gạch cao nhất là bao nhiêu?

// Input Format

// Dòng đầu tiên là số nguyên n - là số viên gạch.
// Dòng tiếp theo gồm n số nguyên a1, a2,..., an mỗi số cách nhau một khoảng trắng.
// Constraints

// 1<=n<=10^5; 0≤ai≤ 10^6

// Output Format

// Số nguyên xác định chiều cao cao nhất của chồng gạch mà Nam sắp được.

// Sample Input 0

// 4
// 1 2 3 4
// Sample Output 0

// 4

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int res;
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        res = a[i] - i;
        if(res < 0){
            cout << a[i-1];
            return 0;
        }
    }
    if(res >= 0){
        cout << a[n-1];
    }
    return 0;
}