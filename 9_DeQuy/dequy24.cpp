// [Đệ Quy]. Bài 24. Kiểm tra mảng tăng dần.
// Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có phải là mảng tăng dần hay không, mảng tăng dần được định nghĩa là mảng mà phần tử hiện tại luôn lớn hơn các phần tử đứng trước nó.

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

// Constraints

// 1≤n≤1000; 1≤A[i]≤10^6

// Output Format

// In ra YES nếu mảng toàn là mảng tăng dần, ngược lại in ra NO.

// Sample Input 0

// 5
// 1 1 8 9 20
// Sample Output 0

// NO
// Sample Input 1

// 5
// 1 1 1 1 1
// Sample Output 1

// NO

#include <iostream>

using namespace std;

bool checkGrow(int a[], int l, int r){
    if(l == r){
        if(a[l-1] < a[l]){
            return true;
        } else {
            return false;
        }
    } else {
        return (a[l] < a[l+1]) && checkGrow(a, l+1, r); 
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(checkGrow(a, 0, n-1)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}