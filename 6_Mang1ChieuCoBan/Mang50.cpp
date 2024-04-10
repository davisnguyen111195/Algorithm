// [Mảng 1 chiều cơ bản]. Bài 50. Số cặp chẵn
// Cho mảng A[] gồm N phần tử, 28Tech có một câu hỏi đó là trong mảng A[] có bao nhiêu cặp số A[i] và A[j] với i khác j mà tổng 2 số này là 1 số chẵn. 
//Nhiệm vụ của bạn là đếm giúp anh ta số cặp thỏa mãn.

// Input Format

// Dòng 1 là : số lượng phần tử trong mảng

// Dòng 2 là N số trong mảng cách nhau 1 dấu cách

// Constraints

// 1<=N<=10^6

// 0<=A[i]<=10^6

// Output Format

// In ra số cặp thỏa mãn

// Sample Input 0

// 8
// 11 17 8 18 7 10 3 18 
// Sample Output 0

// 12


#include <iostream>
#define ll long long
using namespace std; 


int main(){
    int n; cin >> n;
    int a[n];
    int b[n];
    int cntChan = 0;
    int cntLe = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i] % 2;
        if(b[i] == 1){
            cntChan++;
        } else {
            cntLe++;
        }
    }
    // dem so so chan, so so le, tinh to hop chap 2 cua so so chan phan tu, tinh to hop chap 2 của so so le phan tu/ cong vao la dược yeu cau bai toan.
    ll capChan =  1ll * cntChan * (cntChan - 1) / 2;
    ll capLe = 1ll * cntLe * (cntLe - 1) / 2;
    
    cout << capChan + capLe;
    return 0;
}