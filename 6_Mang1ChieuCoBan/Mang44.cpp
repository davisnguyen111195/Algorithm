// [Mảng 1 chiều cơ bản]. Bài 44. Dãy con chẵn lẻ
// Cho mảng A[] gồm N phần tử, bạn hãy đếm số lượng dãy con liên tiếp mà số lượng số chẵn bằng số lượng số lẻ.

// Input Format

// Dòng 1 là N : số phần tử trong mảngg

// Dòng 2 là N phần tử cách nhau 1 khoảng trắng

// Constraints

// 1<=N<=1000

// 0<=A[i]<=1000

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 7
// 3 2 1 6 4 0 0 
// Sample Output 0

// 4
// Explanation 0

// Các dãy con thỏa mãn {3, 2}, {3, 2, 1, 6}, {6, 4}, {2, 1}
#include <iostream>

using namespace std;



int main(){
    int n; cin >> n; int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


    int counter = 0;
    for(int i = 0; i < n; i++){
        int chan = 0, le = 0;

        for(int j = i; j < n; j++){
            if(a[j] % 2 == 0){
                chan++;
            } else {
                le++;
            }
            if(chan == le){
                counter++;
            }
        }
        
    }

    cout << counter;

    return 0;
}