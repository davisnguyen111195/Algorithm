// [Comparator_Binary Search]. Bài 7. Sắp xếp 0, 6, 8
// Cho mảng A[] gồm N phần tử. Sắp xếp sao cho số có nhiều chữ số 0, 6 hoặc 8 hơn đứng trước, nếu có cùng số lượng chữ số 0 6 8 thì số nào nhỏ hơn sẽ đứng trước

// Input Format

// Dòng 1 là N : số lượng phần tử trong mảng

// Dòng 2 là N số trong mảng

// Constraints

// 1<=N<=10^6

// 0<=A[i]<=10^9

// Output Format

// In ra các số sau khi sắp xếp

// Sample Input 0

// 14
// 25556 11105 32129 8765 25187 22479 21283 5842 4471 23648 26441 28433 23517 20475 
// Sample Output 0

// // 8765 23648 5842 11105 20475 21283 25187 25556 26441 28433 4471 22479 23517 32129 

#include <bits/stdc++.h>

using namespace std;

int countT(int n){
    int cnt = 0;
    while(n != 0){
        int k = n % 10;
        if(k == 0 || k == 6 || k == 8){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){
    int cntA = countT(a);
    int cntB = countT(b);
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

    sort(a, a+n, cmp);
    for(int item: a){
        cout << item << " ";
    }
    return 0;
}