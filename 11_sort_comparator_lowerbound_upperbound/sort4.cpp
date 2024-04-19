// [Comparator_Binary Search]. Bài 1. Comparator
// Bài 1. Cho mảng A[] gồm N phần tử, bạn hãy sắp xếp các phần tử trong mảng theo yêu cầu như sau :

// Sắp xếp số lượng chữ số chẵn xuất hiện trong số tăng dần, nếu 2 số còn cùng số lượng chữ số chẵn thì số nhỏ hơn in trước.

// Sắp xếp theo số lượng chữ số lẻ xuất hiện trong số ban đầu tăng dần, nếu 2 số có cùng số lượng chữ số lẻ thì số nào xuất hiện trước sẽ in ra trước. (Bài này các bạn làm theo mảng và vector để luyện tập thêm)

// Input Format

// Dòng 1 là N : số lượng phần tử trong mảng

// Dòng 2 là N số trong mảng

// Constraints

// 1<=N<=10^5

// 0<=A[i]<=10^9

// Output Format

// Dòng 1 in ra các phần tử sau khi sắp xếp theo yêu cầu 1

// Dòng 2 in ra các phần tử sau khi sắp xếp theo yêu cầu 2

// Sample Input 0

// 12
// 4 9 5 7 15 4 13 15 1 8 4 15 
// Sample Output 0

// 1 5 7 9 13 15 15 15 4 4 4 8 
// 4 4 8 4 9 5 7 1 15 13 15 15 

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll cntEven(ll x){
    ll cnt = 0;
    while(x != 0){
        if((x%10) % 2 == 0){
            cnt++;
        }
        x /= 10;
    }
    return cnt;
}


ll cntOdd(ll x){
    ll cnt = 0;
    while(x != 0){
        if((x%10) % 2 != 0){
            cnt++;
        }
        x /= 10;
    }
    return cnt;
}

bool cmp(ll a, ll b){
    if(cntEven(a) != cntEven(b)){
        return cntEven(a) < cntEven(b);
    } else {
        return a < b;
    }
     
}

bool cmp2(ll a, ll b){
    if(cntOdd(a) != cntOdd(b)){
        return cntOdd(a) < cntOdd(b);
    } else {
        return &a < &b;
    }
}

int main(){
    int n; cin >> n;
    ll a[n];
    ll b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a, a+n, cmp);

    for(ll x : a){
        cout << x << " ";
    }
    cout << endl;
    sort(b, b+n, cmp2);
    for(ll x : b){
        cout << x << " ";
    }
    return 0;
}