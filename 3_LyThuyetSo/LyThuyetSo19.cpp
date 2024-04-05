// [Hàm, Lý Thuyết Số]. Bài 19. Bình phương số nguyên tố 2
// Một số được coi là số đẹp khi nếu nó chia hết cho một số nguyên tố nào đó thì cũng phải chia hết cho bình phương của số nguyên tố đó. Viết chương trình liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a≤b≤10^6

// Output Format

// In ra các số đẹp trong đoạn từ a tới b

// Sample Input 0

// 3 49
// Sample Output 0

// 4 8 9 16 25 27 32 36 49

#include <iostream>
#include <cmath>

using namespace std;

bool checkGreatNumber_2(int n){
    int counter = 0;
    bool flag = false;
    for(int i = 2; i <= sqrt(n); i++){
        counter = 0;
        while(n % i == 0) {
            counter++;
            n = n / i;
        }
        if(counter == 1){
            return false;
        }
        if(counter >= 2){
            flag = true;
        }
    }
    if(n != 1){
        return false;
    }
    return flag;
}

int main(){
    int a, b; cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(checkGreatNumber_2(i)){
            cout << i << " ";
        }
    }
    return 0;
}