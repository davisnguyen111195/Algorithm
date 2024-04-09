// [Mảng 1 chiều cơ bản]. Bài 36. Vị trí nhỏ nhất, lớn nhất
// Cho mảng số nguyên A[] gồm N phần tử, bạn hãy tìm giá trị nhỏ nhất trong mảng và giá trị lớn nhất trong mảng cũng như các vị trí xuất hiện của chúng.

// Input Format

// Dòng 1 là N : số phần tử trong mảng

// Dòng 2 gồm N phần tử viết cách nhau 1 dấu cách

// Constraints

// 1<=N<=1000

// 0<=A[i]<=10^6

// Output Format

// Dòng 1 in giá trị nhỏ nhất

// Dòng 2 in các chỉ số chứa giá trị nhỏ nhất từ trái qua phải cách nhau 1 dấu cách

// Dòng 3 in giá trị lớn nhất

// Dòng 4 in ra các chỉ số chứa giá trị lớn nhất từ phải qua trái cách nhau 1 dấu cách

// Sample Input 0

// 5
// 312 44 430 213 436 
// Sample Output 0

// 44
// 1 
// 436
// 4 

#include <iostream>

using namespace std;

int main(){
    int n; cin >> n; int a[n];
    int maxA = -1;
    int minA = 1e6+7;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        maxA = max(maxA, a[i]);
        minA = min(minA, a[i]);
    }
    cout << minA << endl;
    for(int i = 0; i < n; i++){
        if(a[i] == minA){
            cout << i << " ";
        }
    }
    cout << endl;
    cout << maxA << endl;
    for(int i = n-1; i >= 0; i--){
        if(a[i] == maxA){
            cout << i << " ";
        }
    }
    return 0;
}