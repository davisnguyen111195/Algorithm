// [Comparator_Binary Search]. Bài 6. Sắp xếp lẻ
// Cho mảng A[] gồm N phần tử. Sắp xếp sao cho số nào có nhiều số lẻ hơn thì đứng trước, trong trường hợp nhiều số có cùng chữ số lẻ thì số nào nhỏ hơn sẽ đứng trước

// Input Format

// Dòng 1 là N : số lượng phần tử trong mảng

// Dòng 2 là N số trong mảng

// Constraints

// 1<=N<=10^6

// 0<=A[i]<=10^9

// Output Format

// In ra các số sau khi sắp xếp

// Sample Input 0

// 11
// 4456 10493 23600 32757 6911 15236 14074 22458 32132 28596 15209 
// Sample Output 0

// 32757 6911 10493 15209 15236 32132 14074 28596 4456 22458 23600 

#include <bits/stdc++.h>

using namespace std;

int countOdd(int n){
    int cnt = 0;
    while(n != 0){
        if((n%10) % 2 != 0) cnt++;
        n /= 10;
    }

    return cnt;
}

bool cmp(int a, int b){
    int cntA = countOdd(a);
    int cntB = countOdd(b);
    if(cntA != cntB){
        return cntA > cntB;
    } else {
        return a < b;
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int item: a){
        cout << item << " ";
    }
    return 0;
}