// [Hàm, Lý Thuyết Số]. Bài 27. Số thuận nghịch có 3 ước nguyên tố
// Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau. Viết chương trình in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên cho trước

// Input Format

// 2 số a, b

// Constraints

// 1≤a≤b≤10^7

// Output Format

// In ra các số đẹp trong đoạn a, b. Trong trường hợp không tồn tại số đẹp nào thì in ra -1.

// Sample Input 0

// 1 1000
// Sample Output 0

// 66 222 252 282 414 434 444 474 494 525 555 585 595 606 616 636 646 666 696 777 828 858 868 888 969

#include <iostream>
#include <cmath>

using namespace std;

bool checkTN(int n){
    int sum = 0;
    int tmp = n;
    while(n != 0){
        sum = sum * 10 + (n % 10);
        n = n/10;
    }
    return sum == tmp;
}

bool checkUSNT(int n){
    int counter = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            counter++;
            while(n % i == 0) {
                n = n / i;
            }
        }
        
    }
    if(n > 1){
        counter++;
    }
    return counter >= 3;
}

int main(){
    int a, b; cin >> a >> b;
    int counter = 0;
    for(int i = a; i <= b; i++){
        if(checkTN(i) && checkUSNT(i)){
            cout << i << " ";
            counter++;
        }
    }
    if(counter == 0){
        cout << -1;
    }

    return 0;
}