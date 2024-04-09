// [Mảng 1 chiều cơ bản]. Bài 42. Next greater element
// Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là đối với mỗi phần tử trong mảng A[] bạn hãy tìm phần tử đầu tiên lớn hơn nó nằm ở bên phải, đối với phần tử không có phần tử lớn hơn bên phải thì in ra -1, ví dụ mảng A[] là {3, 8, 9, 1, 4, 2, 5} thì kết quả sẽ là 8, 9, -1, 4, 5, 5, -1. Gợi ý : Đối với mỗi chỉ số i sử dụng 1 vòng for từ i + 1 tới cuối dãy để tìm số đầu tiên lớn hơn a[i], tìm được thì break và in ra.

// Input Format

// Dòng 1 là N : số phần tử trong mảngg

// Dòng 2 là N phần tử cách nhau 1 khoảng trắng

// Constraints

// 1<=N<=1000

// 0<=A[i]<=1000

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 8
// 53 97 89 87 17 70 27 46 
// Sample Output 0

// 97 -1 -1 -1 70 -1 46 -1 

#include <iostream>

using namespace std;

int main(){
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        int cntTarget = 0;
        for(int j = i+1; j < n; j++){
            if(a[i] < a[j]){
                cout << a[j] << " ";
                cntTarget++;
                break;
            }
        }
        if(cntTarget < 1){
            cout << -1 << " ";
        }
    }

    return 0;
}