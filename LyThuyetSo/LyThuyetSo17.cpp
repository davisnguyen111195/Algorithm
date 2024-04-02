// Tìm ước số nguyên tố lớn nhất của một số nguyên dương.

// Input Format

// Dòng đầu tiên là số lượng test case T; T dòng tiếp theo mỗi dòng là một số nguyên dương N

// Constraints

// 1≤T≤500; 2≤N≤10000000

// Output Format

// Ước số nguyên tố lớn nhất của n in ra mỗi test case trên 1 dòng

// Sample Input 0

// 2
// 10
// 17
// Sample Output 0

// 5
// 17

#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

ll _find_MaxUSNT(ll n) {
    ll res;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0) {
            res = i;
            n = n / i;
        }
    }

    if(n != 1){
        res = n;
    }
    return res;

}
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << _find_MaxUSNT(n) << endl;
    }
    return 0;
}