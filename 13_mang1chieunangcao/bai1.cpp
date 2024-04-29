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

using namespace std;

int checkEven(int a){
    int res = 0;
    while(a != 0){
        if((a%10) % 2 == 0){
            res++;
        }
        a /= 10;
    }
    return res;
}

bool cmp(int a, int b){
    if(checkEven(a) != checkEven(b)){
        return checkEven(a) < checkEven(b);
    } else {
        return a < b;
    }
}

int checkOdd(int a){
    int res = 0;
    while(a != 0){
        if((a%10) % 2 != 0){
            res++;
        }
        a /= 10;
    }
    return res;
}

bool cmp2(int a, int b){
    return checkOdd(a) < checkOdd(b);
}

int main(){
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a+n, cmp);
    for(int item: a){
        cout << item << " ";
    }
    cout << endl;
    stable_sort(b, b+n, cmp2);
    for(int item: b){
        cout << item << " ";
    }
    return 0;
}