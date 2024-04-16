// [Đệ Quy]. Bài 23. Kiểm tra mảng toàn chẵn.
// Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có phải toàn số chẵn hay không?

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

// Constraints

// 1≤n≤1000; 1≤A[i]≤10^6

// Output Format

// In ra YES nếu mảng toàn số chẵn, ngược lại in ra NO.

// Sample Input 0

// 4
// 2 8 10 20012
// Sample Output 0

// YES

#include <iostream>

using namespace std;

bool checkEven(int a[], int l, int r){
    if(l == r){
        if(a[l] % 2 == 0){
            return true;
        } else {
            return false;
        }
    } else {
        bool result = !(a[r] % 2);
        return result && checkEven(a, l, r - 1); 
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(checkEven(a, 0, n-1)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}