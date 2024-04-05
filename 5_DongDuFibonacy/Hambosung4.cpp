// [Hàm bổ sung]. Bài 4. GCD

// Cho 4 số a, b, c, d. Hãy tìm ước chung lớn nhất và bội chung nhỏ nhất của 4 số trên . Gợi ý gcd(gcd(a, b), gcd(c, d)), lcm(lcm(a, b), lcm(c, d)).

// Input Format

// 4 số nguyên dương a, b, c, d

// Constraints

// 1<=a,b,c,d<=100

// Output Format

// In ra UCLN và BCNN của 4 số

// Sample Input 0

// 76 81 1 53
// Sample Output 0

// 1 326268


#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b){

    while(b){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main(){
    int a, b, c, d; cin >> a >> b >> c  >> d;
    int gcdA = gcd(gcd(a, b), gcd(c, d));
    int lcmA = lcm(lcm(a, b), lcm(c, d));
    cout << gcdA << " " << lcmA;
    return 0;
}