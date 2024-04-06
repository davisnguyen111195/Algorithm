// [Mảng 1 chiều cơ bản]. Bài 5. In phần tử
// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là in ra các phần tử là số chẵn ở chỉ số chẵn, nếu mảng không tồn tại phần tử như vậy thì in ra "NONE".

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;

// Constraints

// 1<=N<=1000; -10^3<=A[i]<=10^3;

// Output Format

// In ra các số cách nhau một khoảng trắng hoặc in ra NONE nếu không tìm thấy số thỏa mãn điều kiện của đầu bài.

// Sample Input 0

// 5
// -971 107 458 222 200 
// Sample Output 0

// 458 200 
// Explanation 0

// Số 458 là số chẵn và ở chỉ số 2, số 200 là số chẵn ở ở chỉ số 4
#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int t[n];
    int counter = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        t[i] = x;
        if(i % 2 == 0){
            if(t[i] % 2 == 0){
                cout << t[i] << " ";
                counter++;
            }
        } 
    }
    if(counter == 0) {
        cout << "NONE";
    }
    return 0;
}