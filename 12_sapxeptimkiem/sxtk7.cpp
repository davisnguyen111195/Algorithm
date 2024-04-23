// [Sắp xếp - Tìm Kiếm]. Bài 7. Sắp xếp chèn
// Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chèn

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^3; 0<=A[i]<=10^9

// Output Format

// In ra các bước của thuật toán sắp xếp chèn

// Sample Input 0

// 7
// 56 73 15 64 86 61 50 
// Sample Output 0

// Buoc 1: 56 73 15 64 86 61 50 
// Buoc 2: 15 56 73 64 86 61 50 
// Buoc 3: 15 56 64 73 86 61 50 
// Buoc 4: 15 56 64 73 86 61 50 
// Buoc 5: 15 56 61 64 73 86 50 
// Buoc 6: 15 50 56 61 64 73 86 

#include <bits/stdc++.h>

using namespace std;

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 1;
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--){
            if(a[j] < a[j-1]){
                swap(a[j], a[j-1]);
            }
        }

        cout << "Buoc " << cnt << ": ";
        for(int item : a){
            cout << item << " ";
        }
        cout << endl;
        cnt++;
    }

    return 0;
}