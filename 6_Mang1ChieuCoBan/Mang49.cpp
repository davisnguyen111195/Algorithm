// [Mảng 1 chiều cơ bản]. Bài 49. 2 8 t e c h

// Cho mảng A[] gồm N kí tự chỉ bao gồm chữ cái in thường và chữ số, 28tech cho phép bạn nhặt các chữ cái ở chỉ số chẵn và xếp thành từ 28tech nhưng không được thay đổi thứ tự xuất hiện các kí tự trong mảng A[]. Ví dụ mảng A[] = {2, t, e, a, 8, d, t, c, e, d, c, x, h, h} có thể nhặt ra các chữ cái ở chỉ số 0, 4, 6, 8, 10, 12 để tạo thành từ 28tech.

// Input Format

// Dòng 1 là : số lượng phần tử trong mảng

// Dòng 2 là N số trong mảng cách nhau 1 dấu cách

// Constraints

// 1<=N<=10000

// Các phần tử trong mảng A[] là chữ cái in thường hoặc chữ số

// Output Format

// In ra 28TECH nếu bạn có thể tập hợp các chữ cái trong mảng A[] để tạo thành từ 28Tech, ngược lại in ra HCET82.

// Sample Input 0

// 25
// n 2 a w 1 a j c t n 1 i i 2 i j 3 e 8 e l i a 2 w 
// Sample Output 0

// HCET82
// Sample Input 1

// 12
// 2 x 8 x t x e x c y h y
// Sample Output 1

// 28TECH

#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    char a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        
    }
    char b[6] = {'2', '8', 't', 'e', 'c', 'h'};
    int cnt = 0;
    for(int i = 0; i < 6; i++){
        for(int j = i; j < n; j++){
            if(b[i] == a[j] && j % 2 == 0){
                cnt++;
                break;
            } 
        }
    }


    if(cnt == 6){
        cout << "28TECH";
    } else {
        cout << "HCET82";
    }
    return 0;
}