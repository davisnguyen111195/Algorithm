// [Mảng 1 chiều cơ bản]. Bài 7. Cặp số 2
// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm độ chênh lệch nhỏ nhất giữa 2 phần tử trong mảng.

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;

// Constraints

// 1<=N<=1000; 0<=A[i], X<=10^3;

// Output Format

// In ra độ chênh lệch nhỏ nhất giữa 2 phần tử bất kì trong mảng

// Sample Input 0

// 8
// 69 96 93 27 84 32 78 56 
// Sample Output 0

// 3
#include <iostream>
#include <cmath>
using namespace std;



int main(){
    int n; cin >> n;
    int t[n];
    for(int k = 0; k < n; k++){
        cin >> t[k];
    }

    //B1: sap xep mang gia tri tang dan
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(t[j] < t[i]){
                int tmp = t[i];
                t[i] = t[j];
                t[j] = tmp;
            }
        }
    }
    //B2: tim min delta
    int minAns = 1e4+7;
    for(int k = 0; k < n; k++){
        int delta = abs(t[k+1] - t[k]);
        minAns = min(delta, minAns);
    }

    cout << minAns;
    return 0;
}
