//[Hàm, Lý Thuyết Số]. Bài 18. Bình phương nguyên tố 1
// Một số được coi là số đẹp khi nó đồng thời vừa chia hết cho một số nguyên tố và chia hết cho bình phương của số nguyên tố đó. Viết chương trình liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước.

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a≤b≤10^6

// Output Format

// In ra các số đẹp trong đoạn từ a tới b

// Sample Input 0

// 4 50
// Sample Output 0

// 4 8 9 12 16 18 20 24 25 27 28 32 36 40 44 45 48 49 50

#include <iostream>
#include <cmath>

using namespace std;

bool numberGreatCheck(int n){
    int counter = 0;
    bool flag = false;
    for(int i = 2; i <= sqrt(n); i++){
        counter = 0;
        while(n % i == 0){
            counter++;
            n = n / i;
            if(counter == 2){
                flag = true;
            }
        }
    }
    return flag;
}


int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(numberGreatCheck(i)){
            cout << i << " ";
        }
    }
    return 0;
}