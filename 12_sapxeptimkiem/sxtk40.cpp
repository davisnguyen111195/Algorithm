// [Sắp xếp - Tìm Kiếm]. Bài 40. Thu thập số
// Bạn được cung cấp một mảng chứa mỗi số từ 1… n đúng một lần. Nhiệm vụ của bạn là thu thập các số từ 1 đến n theo thứ tự tăng dần. Trên mỗi vòng, bạn đi qua mảng từ trái sang phải và thu thập càng nhiều số càng tốt. Tổng số vòng sẽ là bao nhiêu?

// Input Format

// Dòng đầu tiên có số nguyên n: kích thước mảng. Dòng tiếp theo có n số nguyên x1, x2,…, xn: các số trong mảng.

// Constraints

// 1≤ n ≤2.10^5;

// Output Format

// In một số nguyên: số vòng.

// Sample Input 0

// 5
// 4 2 1 5 3
// Sample Output 0

// 3
// Explanation 0

// Giải thích test : Vòng 1 chọn số 1, vòng 2 chọn số 2 và 3, vòng 3 chọn số 4 và 5 Ở mỗi vòng bạn được chọn số x nếu như tất cả các số từ 1 tới x-1 đã được chọn trước đó rồi, mỗi vòng bạn có thể chọn nhiều số cùng 1 lúc.

// Sample Input 1

// 8
// 2 1 8 5 4 7 6 3
// Sample Output 1

// 6

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int range = 2e5+4;
    int b[range] = {0};
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
        if(b[a[i] - 1] == 0){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}