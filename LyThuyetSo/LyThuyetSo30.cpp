// [Hàm, Lý Thuyết Số]. Bài 30. Chữ số cuối cùng lớn nhất
// Viết chương trình cho phép nhập vào n và liệt kê các số nguyên tố thỏa mãn nhỏ hơn hoặc bằng n và có chữ số cuối cùng lớn nhất. Có bao nhiêu số như vậy?

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^7

// Output Format

// Dòng đầu tiên liệt kê các số thỏa mãn, và dòng thứ 2 in ra số lượng số thỏa mãn.

// Sample Input 0

// 200
// Sample Output 0

// 2 3 5 7 11 13 17 19 23 29 37 47 59 67 79 89 101 103 107 109 113 127 137 139 149 157 167 179 199
// 29

#include <iostream>
#include <cmath>

using namespace std;

bool maxEndChecker(int n){
    int end = n % 10;
    int ans = -1;
    while(n != 0){
        ans = max(ans, (n%10));
        n = n / 10;
    }
    return end == ans;
}
bool primeChecker(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int n; cin >> n;
    int counter = 0;
    for(int i = 1; i <= n; i++){
        if(maxEndChecker(i)){
            if(primeChecker(i)){
                cout << i << " ";
                counter++;
            } 
            
        } else {
            continue;
        }

    }
    cout << "\n" << counter;
    return 0;
}