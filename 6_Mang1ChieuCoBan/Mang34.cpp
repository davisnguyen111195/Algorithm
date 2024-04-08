// [Mảng 1 chiều cơ bản]. Bài 34. Unique
// Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là xóa các phần tử trong mảng sao cho không có 2 phần tử liền kề có giá trị giống nhau. Ví dụ mảng A[] = {1, 1, 2, 2, 2, 3, 3, 2, 1, 4} sau khi xóa sẽ được A[] = {1, 2, 3, 2, 1, 4}

// Input Format

// Dòng 1 gồm N

// Dòng 2 gồm N số của mảng A[]

// Constraints

// 1<=N<=1000

// 0<=A[i]<=100

// Output Format

// In ra mảng sau khi xóa

// Sample Input 0

// 11
// 2 3 3 0 0 0 3 3 3 3 4 
// Sample Output 0

// 2 3 0 3 4 

#include <iostream>

using namespace std;
void deleleElement(int a[], int &n, int pos);
int main(){
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int b[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                if(a[i] == a[j]){
                    a[j] = -1;
                }
            }
        }
        b[i] = a[i];
    }
    int tmp = n;
    for(int i = 0; i < tmp; i++){
        if(b[i] == -1){
            deleleElement(a, n, i);
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}

void deleleElement(int a[], int &n, int pos){
    for(int i = pos; i < n-1; i++){
        a[i] = a[i+1];
    }
    n--;
}