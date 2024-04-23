// [Sắp xếp - Tìm Kiếm]. Bài 8. Sắp xếp nổi bọt
// Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp nổi bọt

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^3; 0<=A[i]<=10^9

// Output Format

// In ra các bước của thuật toán sắp xếp nổi bọt

// Sample Input 0

// 13
// 54 3 42 94 61 25 24 55 80 62 79 44 14 
// Sample Output 0

// Buoc 1: 3 42 54 61 25 24 55 80 62 79 44 14 94 
// Buoc 2: 3 42 54 25 24 55 61 62 79 44 14 80 94 
// Buoc 3: 3 42 25 24 54 55 61 62 44 14 79 80 94 
// Buoc 4: 3 25 24 42 54 55 61 44 14 62 79 80 94 
// Buoc 5: 3 24 25 42 54 55 44 14 61 62 79 80 94 
// Buoc 6: 3 24 25 42 54 44 14 55 61 62 79 80 94 
// Buoc 7: 3 24 25 42 44 14 54 55 61 62 79 80 94 
// Buoc 8: 3 24 25 42 14 44 54 55 61 62 79 80 94 
// Buoc 9: 3 24 25 14 42 44 54 55 61 62 79 80 94 
// Buoc 10: 3 24 14 25 42 44 54 55 61 62 79 80 94 
// Buoc 11: 3 14 24 25 42 44 54 55 61 62 79 80 94 
// Buoc 12: 3 14 24 25 42 44 54 55 61 62 79 80 94 

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
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
        cout << "Buoc " << cnt << ": ";
        for(int item: a){
            cout << item << " ";
        }
        cnt++;
        cout << endl;
    }


    return 0;
}