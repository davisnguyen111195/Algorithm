// [Comparator_Binary Search]. Bài 8. Sắp xếp chữ số nguyên tố
// Cho mảng A[] gồm N phần tử. Sắp xếp sao cho số có nhiều chữ số nguyên tố hơn sẽ đứng trước, trong trường hợp các số có cùng số lượng chữ số nguyên tố thì số nào xuất hiện trước in ra trước

// Input Format

// Dòng 1 là N : số lượng phần tử trong mảng

// Dòng 2 là N số trong mảng

// Constraints

// 1<=N<=10^6

// 0<=A[i]<=10^9

// Output Format

// In ra các số sau khi sắp xếp

// Sample Input 0

// 18
// 16501 5898 7388 26663 17330 15803 6865 3695 3495 20918 4244 580 29707 5410 11716 4765 12423 10073 
// Sample Output 0

// 17330 29707 12423 7388 26663 15803 3695 3495 4765 10073 16501 5898 6865 20918 4244 580 5410 11716 

#include <bits/stdc++.h>

using namespace std;

int primeCnt(int n){
    int cnt = 0;
    while(n != 0){
        int k = n % 10;
        if(k == 2 || k == 3 || k == 5 || k == 7){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){
    int cntA = primeCnt(a);
    int cntB = primeCnt(b);
    return cntA > cntB; 
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    stable_sort(a, a+n, cmp);
    for(int item: a){
        cout << item << " ";
    }
    return 0;
}