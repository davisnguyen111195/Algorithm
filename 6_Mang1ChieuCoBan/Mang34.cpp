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
//void deleleElement(int a[], int &n, int pos);
int main(){
    int n; cin >> n; int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cntDel = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j <= n-1; j++){
            if(a[i] == a[j] && a[i] != -1){
                a[j] = -1;
                cntDel++;
                if(a[j+1] != a[i]){
                    break;
                }
            } else {
                break;
            }
        }
    }
    int b[n-cntDel];
    int tmp = 0;
    for(int i = 0; i < n; i++){
        
        if(a[i] != -1){
            
            b[tmp] = a[i];
            cout << b[tmp] << " ";
            tmp++;
            
        }
        
    }


    return 0;
}

// void deleleElement(int a[], int &n, int pos){
//     for(int i = pos; i < n-1; i++){
//         a[i] = a[i+1];
//     }
//     n--;
// }