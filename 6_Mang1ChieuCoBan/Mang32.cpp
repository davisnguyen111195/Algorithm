// [Mảng 1 chiều cơ bản]. Bài 32. Xoay trái
// Cho mảng A[] gồm N phần tử, hãy dịch các phần tử trong mảng sang trái K lần, khi dịch trái thì phần tử đầu tiên của dãy sẽ quay vòng lại trở thành phần tử cuối cùng

// Input Format

// Dòng 1 gồm N và K

// Dòng 2 gồm N số của mảng A[]

// Constraints

// 1<=N<=1000

// 1<=K<=1000

// 0<=A[i]<=100

// Output Format

// In ra mảng sau khi xoay trái

// Sample Input 0

// 8 6
// 16 66 96 73 11 13 99 82 
// Sample Output 0

// 99 82 16 66 96 73 11 13 

#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b; 
    b = tmp;
}

void leftMove(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        swap(a[i], a[i+1]);
    }
}

int main(){
    int n; cin >> n; int a[n];
    int k; cin >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < k; i++){
        leftMove(a, n);
    }
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}