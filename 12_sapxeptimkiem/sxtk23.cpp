// [Sắp xếp - Tìm Kiếm]. Bài 23. Sắp xếp theo tần suất
// Cho mảng A[] gồm n phần tử. Bạn hãy thực hiện làm các công việc sau đây :

// Sắp xếp các phần tử trong mảng theo tần suất giảm dần, nếu 2 số có cùng tần suất thì số nào nhỏ hơn sẽ in ra trước.

// Sắp xếp các phần tử trong mảng theo tần suất giảm dần, nếu 2 số có cùng tần suất thì số nào xuất hiện trước sẽ in ra trước.

// Input Format

// Dòng đầu tiên đưa vào n là số phần tử của mảng A[]; Dòng tiếp theo là n số A[i] ; Các số được viết cách nhau một vài khoảng trống.

// Constraints

// 1<=n<=10^5; 0<=A[i]<=10^6;

// Output Format

// Dòng đầu tiên in ra các số được sắp xếp theo yêu cầu 1. Dòng thứ 2 in ra các số được sắp xêp theo yêu cầu 2.

// Sample Input 0

// 10
// 6 8 4 10 3 4 10 2 4 1 
// Sample Output 0

// 4 4 4 10 10 1 2 3 6 8 
// 4 4 4 10 10 6 8 3 2 1 
// Sample Input 1

// 10
// 2 5 6 7 2 1 3 10 3 6 
// Sample Output 1

// 2 2 3 3 6 6 1 5 7 10 
// 2 2 6 6 3 3 5 7 1 10 

#include <bits/stdc++.h>

using namespace std;
map<int, int> mX;

bool cmp(int a, int b){
    if(mX[a] != mX[b]){
        return mX[a] > mX[b];
    } else {
        return a < b;
    }
}
bool cmp2(int a, int b){
    return mX[a] > mX[b];
}
int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
        mX[a[i]]++;
    }
    sort(a, a+n, cmp);
    for(int item: a){
        cout << item << " ";
    }
    cout << endl;
    stable_sort(b, b+n, cmp2);
    for(int item: b){
        while(mX[item] > 0){
            cout << item << " ";
            mX[item]--;
        }
    }
    return 0;
}