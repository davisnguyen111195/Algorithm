// [Hàm, Lý Thuyết Số]. Bài 29. Số thuận nghịch, lộc phát
// Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8. Viết chương trình liệt kê các số đẹp trong đoạn giữa 2 số nguyên cho trước, các số cách nhau một dấu cách.

// bool tn(int n){
    
// }

// bool chua6(int n){
//     //Tách từng chữ số của n ra, nếu gặp số 6 => return true ngay
//     //Sau vòng lặp while => return false
// }

// bool tong8(int n){
//     //Đi tính tổng chữ số của n trước
//     //Kiểm tra tong chia 10 dư 8 là return true, ngược lại return false;
// }

// int main(){
//     int a, b; cin >> a >> b;
//     for(int i = a; i <= b; i++){
//         if(tn(i) && chua6(i) && tong8(i)){
            
//         }
//     }
// }
// Input Format

// 2 số nguyên a, b

// Constraints

// 1≤a≤b≤10^6

// Output Format

// Liệt kê các số đẹp trong đoạn, các số viết cách nhau một khoảng trống

// Sample Input 0

// 1 400
// Sample Output 0

// 161

#include <iostream>
#include <cmath>

using namespace std;
bool thuanNghichChecker(int n){
    int tmp = n;
    int sum = 0;
    while(n != 0){
        sum = sum*10 + (n%10);
        n = n / 10;
    }

    return tmp == sum;
}

bool chua6(int n){
    int counter = 0;
    while(n != 0){
        int check = n % 10;
        if (check == 6){
            counter++;
        }
        n = n / 10;
        
    }
    if(counter >= 1){
        return true;
    }
    return false;
}

bool tong8(int n){
    int sum = 0;
    while(n != 0){
        sum = sum + (n%10);
        n = n / 10;
    }
    if(sum % 10 == 8){
        return true;
    }

    return false;
}

int main(){
    int a, b; cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(thuanNghichChecker(i) && chua6(i) && tong8(i)){
            cout << i << " ";
        }
    }
    return 0;
}