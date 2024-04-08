// [Mảng 1 chiều cơ bản]. Bài 25. Mảng chẵn lẻ
// Cho mảng số nguyên A[] có không quá 10000 phần tử. Hãy xác định xem mảng là mảng chẵn hay mảng lẻ, mảng chẵn được định nghĩa là mảng mà số lượng số chẵn nhiều hơn số lượng số lẻ, ngược lại. Trong trường hợp số lượng số chẵn bằng số lượng số lẻ thì mảng được gọi là mảng chẵn lẻ.

// Input Format

// Gồm nhiều dòng, mỗi dòng có nhiều số là các số trong mảng A[], không biết trước có bao nhiêu số nhưng không vượt quá 10000 số.

// Constraints

// 1<=A[i]<=1000

// Output Format

// In ra CHAN nếu mảng chẵn, LE nếu mảng lẻ, CHANLE nếu mảng chẵn lẻ

// Sample Input 0

// 3 
// 9 7 9 
// 7 5 5 
// 3 
// Sample Output 0

// LE

#include <iostream>

using namespace std;

int main(){
    int x;     
    int cntEven = 0;
    int cntOdd = 0;
    while(cin >> x){
        if(x % 2 == 0){
            cntEven++;
        } else {
            cntOdd++;
        }
    }

    if(cntEven > cntOdd) {
        cout << "CHAN";
    } else if(cntEven < cntOdd){
        cout << "LE";
    } else {
        cout << "CHANLE";
    }



    return 0;
}
