// [Mảng 1 chiều cơ bản]. Bài 17. Mảng đối xứng
// Cho mảng số nguyên A[] gồm N phần tử, kiểm tra xem mảng có đối xứng hay không?

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^6; 0<=A[i]<=10^6

// Output Format

// In ra YES hoặc NO tương ứng với mảng đối xứng hoặc không.

// Sample Input 0

// 20
// 870 1069 2363 375 2188 6059 6775 495 643 832 832 643 495 6775 6059 2188 375 2363 1069 870 
// Sample Output 0

// YES

#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int t[n];
    for(int i = 0; i < n; i++){
        cin >> t[i];

    }
    int counter = 0;
    if(n % 2 != 0){
        cout << "NO";
        return 0;
    } else {
        for(int j = 0; j < n/2; j++){
            int l = n - 1 - j;
            if(t[j] == t[l]){
                counter++;
            } else {
                cout << "NO";
                return 0;
            }
        }
        if(counter == n/2){
            cout << "YES";
        }
    }

    
    return 0;
}