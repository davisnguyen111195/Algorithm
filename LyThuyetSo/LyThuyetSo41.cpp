// [Hàm, Lý Thuyết Số]. Bài 41. Số gần thuận nghịch
// Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại; đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch. Ví dụ: các số 36788766; 12345654322 là các số đẹp. Viết chương trình kiểm tra số đẹp theo tiêu chí trên.

// Input Format

// Số nguyên dương n

// Constraints

// 99≤n≤10^18

// Output Format

// Ghi ra YES tương ứng với số đẹp, NO trong trường hợp ngược lại

// Sample Input 0

// 122222
// Sample Output 0

// YES

#include <iostream>
#include <cmath>
#include <string.h>
#define ll long long

using namespace std;


bool checkDK1(char c[]){
    int dau = c[0] - '0', cuoi = c[strlen(c) - 1] - '0';
    if(!(dau == 2 * cuoi || cuoi == 2 * dau)){
        return false;
    }

    int left = 1, right = strlen(c) - 2;

    while(left < right) {
        if(c[left] != c[right]){
            return false;
        }
        ++left; -- right;
    }
    return true;
}

int main(){
    char c[20]; cin >> c;

    if(checkDK1(c)){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}