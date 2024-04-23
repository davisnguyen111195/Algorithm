// [Sắp xếp - Tìm Kiếm]. Bài 6. Sắp xếp chọn
// Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chọn.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^3; 0<=A[i]<=10^9

// Output Format

// In ra các bước của thuật toán sắp xếp chọn

// Sample Input 0

// 4
// 5 7 3 2
// Sample Output 0

// Buoc 1: 2 7 3 5
// Buoc 2: 2 3 7 5
// Buoc 3: 2 3 5 7
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
        
        int minX = 1e9+7;
        int index = -1;
        for(int j = i; j < n; j++){
            if(minX > a[j]){
                minX = a[j];
                index = j;
            }
        }
        if(index != -1){
            cout << "Buoc " << cnt << ":" << " ";
            swap(a[i], a[index]);
        
            for(int item : a){
                cout << item << " ";
            }
            cout << endl;
            cnt++;
        }
        

        
    }
    return 0;
}