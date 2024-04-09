// [Mảng 1 chiều cơ bản]. Bài 39. Dãy số 0 và 1
// 28Tech cho bạn 1 mảng toàn số 0 và 1, bạn hãy in ra độ dài của các dãy con toàn số 0 liên tiếp và toàn số 1 liên tiếp. Ví dụ mảng A[] = {1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0} thì có 3 dãy con số 1 liên tiếp có độ dài là 3, 1, 2 và 3 dãy con số 0 liên tiếp có độ dài là 2 1 2

// Input Format

// Dòng 1 là N : số phần tử trong mảng

// Dòng 2 là N số trong mảng viết cách nhau 1 dấu cách

// Constraints

// 1<=N<=10000

// 0<=A[i]<=1

// Output Format

// Dòng 1 in ra độ dài của các dãy con số 1 liên tiếp

// Dòng 2 in ra độ dài của các dãy con số 0 liên tiếp

// Sample Input 0

// 10
// 1 0 0 0 0 0 1 1 0 1 
// Sample Output 0

// 1 2 1
// 5 1 


#include <iostream>

using namespace std;

int main(){
    int n; cin >> n; int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cntONE = 0;
    for(int i = 0; i < n; i++){
        
        if(a[i] == 1 && a[i+1] != 1){
            cntONE++;
            cout << cntONE << " ";

            cntONE = 0;
            continue;
        } else if(a[i] == 1 && a[i+1] == 1){
            cntONE++;
            continue;
        } else {
            continue;
        }
    }
    cout << endl;
    int cntZERO = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 0 && a[i+1] != 0){
            cntZERO++;
            cout << cntZERO << " ";
            cntZERO = 0;
            continue;
        } else if(a[i] == 0 && a[i+1] == 0){
            cntZERO++;
            continue;
        } else {
            continue;
        }
    }

    return 0;
}