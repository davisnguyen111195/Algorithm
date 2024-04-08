// [Mảng 1 chiều cơ bản]. Bài 21. Đếm phân phối sử dụng mảng
// Cho mảng số nguyên A[] gồm N phần tử, hãy thực hiện các yêu cầu :

// Liệt kê các giá trị xuất hiện trong mảng và tần suất tương ứng theo thứ tự xuất hiện.
// Liệt kê các giá trị xuất hiện trong mảng và tần suất tương ứng theo thứ tự từ nhỏ tới lớn.
// Tìm số có số lần xuất hiện nhiều nhất, nếu có nhiều số có cùng số lần xuất hiện thì chọn số lớn hơn.
// Tìm số có số lần xuất hiện ít nhất trong mảng, nếu có nhiều số có cùng số lần xuất hiện thì chọn số nhỏ hơn.
// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^3; 0<=A[i]<=1000;

// Output Format

// Những dòng đầu in ra yêu cầu 1 sau đó bỏ cách 1 dòng. Những dòng tiếp theo in ra yêu cầu 2 sau đó bỏ cách 1 dòng. 2 dòng cuối cùng in ra kết quả yêu cầu 3, 4. Xem ví dụ để rõ hơn về output

// Sample Input 0

// 13
// 660 133 177 168 602 422 716 595 614 626 576 53 550 
// Sample Output 0

// 660 1
// 133 1
// 177 1
// 168 1
// 602 1
// 422 1
// 716 1
// 595 1
// 614 1
// 626 1
// 576 1
// 53 1
// 550 1

// 53 1
// 133 1
// 168 1
// 177 1
// 422 1
// 550 1
// 576 1
// 595 1
// 602 1
// 614 1
// 626 1
// 660 1
// 716 1

// 716
// 53

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int b[1007] = {0};
    int maxA = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
        maxA = max(maxA, a[i]);
    }
    int soLanMax = -1;
    int soLanMin = 1007;
    int c[1007] = {0};
    for(int v = 0; v < maxA; v++){
        if(b[v] > 0){
            c[v] = b[v];
        }
    }
    for(int l = 0; l < n; l++){
        if(c[a[l]] > 0){
            cout << a[l] << " " << c[a[l]] << endl;
            c[a[l]] = 0;
        }
        
        soLanMax = max(soLanMax, b[a[l]]);
        soLanMin = min(soLanMin, b[a[l]]);
    }

    cout << endl;
    
    for(int k = 0; k < maxA; k++){
        if(b[k] > 0) {
            cout << k << " " << b[k] << endl;
            
        }
        
    }

    cout << endl;
    int maxCaoNhat = -1;
    int minThapNhat = 1007;
    for(int m = 0; m < n; m++){
        if(b[a[m]] == soLanMax){
            maxCaoNhat = max(maxCaoNhat, a[m]);
        }
        if(b[a[m]] == soLanMin){
            minThapNhat = min(minThapNhat, a[m]);
        }
    }
    cout << maxCaoNhat << endl;
    cout << minThapNhat << endl;
    return 0;
}
