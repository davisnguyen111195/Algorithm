// [Mảng 1 chiều cơ bản]. Bài 6. Cặp số 1
// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng A[] tồn tại bao nhiêu cặp số A[i], A[j] với i khác j sao cho tổng của 2 phần tử này bằng số K cho trước.

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng; Dòng thứ 3 là số nguyên K

// Constraints

// 1<=N<=1000; 0<=A[i], X<=10^3;

// Output Format

// In ra số lượng cặp thỏa mãn

// Sample Input 0

// 5
// 1 2 3 1 2
// 3
// Sample Output 0

// 4


#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int t[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        t[i] = x;
    }
    int k; cin >> k;
    int cnt = 0;
    for(int j = 0; j < n; j++){
        for(int l = 0; l < n; l++){
            if(l != j){
                if(t[l] + t[j] == k){
                    cnt++;
                }
            }
        }
    }
    cout << cnt/2;


    return 0;
}