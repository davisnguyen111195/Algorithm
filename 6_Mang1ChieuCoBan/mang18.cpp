// [Mảng 1 chiều cơ bản]. Bài 18. Liền kề trái dấu
// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê theo thứ tự xuất hiện các số thỏa mãn có ít nhất 1 số trái dấu với nó đứng cạnh nó.

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 2<=N<=10^6; -10^6<=A[i]<=10^6

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 9
// -992414 993205 998602 990785 -993397 990527 995429 991288 -992221 
// Sample Output 0

// -992414 993205 990785 -993397 990527 991288 -992221 

#include <iostream>

using namespace std;

int main(){
    int n; cin >> n; int t[n];
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }

    for(int j = 0; j < n; j++){
        if(t[j] < 0){
            if(j - 1 > 0){
                cout << t[j-1] << " ";
            }
            cout << t[j] << " ";
            if(j + 1 < n) {
                cout << t[j+ 1] << " ";
            }
            
        }
    }
    return 0;
}