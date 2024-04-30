// [Mảng 1 Chiều]. Bài 23. Trộn 2 dãy và sắp xếp
// Cho hai dãy số nguyên dương A và B. Hãy trộn hai dãy với nhau sao cho dãy A được đưa vào các vị trí có chỉ số chẵn, dãy B được đưa vào các vị trí có chỉ số lẻ. Đồng thời, dãy A được sắp xếp tăng dần, còn dãy B được sắp xếp giảm dần. (Chú ý: chỉ số tính từ 0)

// Input Format

// Dòng đầu tiên ghi số n là số lượng phần tử của 2 dãy. Dòng tiếp theo ghi n số nguyên dương của dãy A. Dòng tiếp theo ghi n số nguyên dương của dãy B.

// Constraints

// 1≤n≤10^5; 1≤ai,bi≤10^9

// Output Format

// In ra kết quả theo yêu cầu của bài toán

// Sample Input 0

// 4
// 4 2 7 1
// 5 6 2 8
// Sample Output 0

// 1 8 2 6 4 5 7 2

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int i = 0, j = 0;
    for(int k = 0; k < 2*n; k++){
        if(a[i] % 2 == 0 && b[j] % 2 == 1){
            
        }
    }

    return 0;
}