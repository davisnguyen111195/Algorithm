// [Set Map]. Bài 23. Liệt kê tần suất chẵn
// Cho mảng A[] gồm N phần tử, bạn hãy in ra các giá trị có số lần xuất hiện chẵn trong mảng.

// Input Format

// Dòng 1 là N : số lượng phần tử trong mảng

// Dòng 2 là N số cách nhau 1 dấu cách

// Constraints

// 1<=N<=10^6

// -10^9<=A[i]<=10^9

// Output Format

// Đầu tiên bạn in ra theo thứ tự tăng dần các giá trị sau đó cách ra 1 dòng và in ra theo thứ tự giảm dần về các giá trị
// Sample Input 0

// 11
// 2 2 1 2 4 4 3 2 4 0 0 
// Sample Output 0

// 0 2
// 2 4

// 2 4
// 0 2

#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    map<int, int> mX;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mX[x]++;
    }

    for(auto item : mX){
        if(item.second % 2 == 0){
            cout << item.first << " " << item.second << endl;
        }
    }

    cout << endl;

    for(auto it = mX.rbegin(); it != mX.rend(); it++){
        if((*it).second % 2 == 0){
            cout << (*it).first << " " << (*it).second << endl;
        }
    }
    return 0;
}