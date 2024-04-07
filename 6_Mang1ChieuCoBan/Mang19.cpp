// [Mảng 1 chiều cơ bản]. Bài 19. Khác biệt nhỏ nhất
// Cho mảng số nguyên A[] gồm N phần tử, tìm khoảng cách nhỏ nhất giữa 2 phần tử a[i], a[j] khác nhau trong mảng(i != j).

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^3; 0<=A[i]<=10^6

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 9
// 8340 4533 1879 7340 1326 1768 357 2015 7779 
// Sample Output 0

// 111

#include <iostream>

using namespace std;

int main() {
    int n; cin >> n; int t[n];
    int minArr[n];
    for(int i = 0; i < n; i++){
        cin >> t[i];
        
    }
    for(int j = 0; j < n; j++){
        minArr[j] = abs(t[j+1] - t[j]);
    }
    int ans = 1e6+7;
    for(int k = 0; k < n; k++){
        for(int l = 0; l < n; l++){
            int delta = abs(t[l] - t[k]);
            if(l != k){
                ans = min(ans, delta);
            }
            
        }
    }

    cout << ans;
    return 0;
}