// [Mảng 1 chiều cơ bản]. Bài 41. Xóa phần tử
// 28Tech không thích số 28 vì thế anh ta yêu cầu bạn xóa hết mọi phần tử trong mảng A[] có giá trị là 28. Sau đó in ra mảng sau khi xóa, nếu mảng không còn phần tử nào thì in ra EMPTY.

// Input Format

// Dòng 1 là N : số phần tử trong mảngg

// Dòng 2 là N phần tử cách nhau 1 khoảng trắng

// Constraints

// 1<=N<=1000

// 0<=A[i]<=1000

// Output Format

// In ra mảng sau khi xóa

// Sample Input 0

// 5
// 1 28 28 3 4
// Sample Output 0

// 1 3 4

#include <iostream>

using namespace std; 
void delElement(int a[], int &n, int pos){
    for(int i = pos; i < n-1; i++){
        a[i] =a[i+1];
    }
    --n;
}
int main(){
    int n; cin >> n; int b[n];
    int a[n];
    int cntTarget = 0;
    for(int i = 0; i < n; i++){
        cin >> b[i];
        a[i] = b[i];
        if(b[i] == 28) {
            cntTarget++;
        }
    }

    int tmp = n-cntTarget;
    while(n != tmp){
        for(int i = 0; i < n; i++){
            if(a[i] == 28){
                delElement(a, n, i);
            }
        }
    }
    if(n == 0){
        cout << "EMPTY";
        return 0;
    } else {
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    }
    

    return 0;
}


    
    
    