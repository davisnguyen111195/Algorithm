// [Mảng 1 chiều cơ bản]. Bài 31. Chèn mảng
// Cho mảng A[], B[] gồm N và M phần tử, hãy chèn mảng B vào chỉ số P của mảng A và in ra mảng A[] sau khi chèn.

// Input Format

// Dòng 1 gồm N, M và P

// Dòng 2 gồm các phần trong mảng A[]

// Dòng 3 gồm các phần tử trong mảng B[]

// Constraints

// 1<=N<=M<=1000

// 0<=P<=N

// 0<=A[i], B[i]<=1000

// Output Format

// In ra mảng A[] sau khi chèn
// Sample Input 0

// 10 7 5
// 64 94 78 99 50 21 57 41 68 16 
// 73 91 15 89 2 85 61 
// Sample Output 0

// 64 94 78 99 50 73 91 15 89 2 85 61 21 57 41 68 16 




// int main(){
//     int n, m, p; cin >> n >> m >> p;
//     int a[n+m];
//     int b[m];
//     for(int i = 0; i < n; i++){
//         cin >> a[i]; 
//     }

//     for(int j = 0; j < m; j++){
//         cin >> b[j];
//     }
//     for(int k = p; k < n; k++){
//         a[k+m] = a[k];
//     }   

//     for(int k = p; k < n; k++){
//         a[k+m] = a[k];
//     }   

//     for(int x = 0; x < n+m; x++){
//         cout << a[x] << " ";
//     }

//     return 0;
// }
#include <iostream>

using namespace std;
void insert(int a[], int &n, int pos, int x){
    for(int i = n; i > pos; i--){
        a[i] = a[i-1];
    }
    a[pos] = x;
    ++n;
}

int main(){
    int n; cin >> n; 
    int m; cin >> m; int b[m];
    int a[n+m];
    int pos; cin >> pos;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < m; i++){
        cin >> b[i];
        
        insert(a, n, pos+i, b[i]);
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}