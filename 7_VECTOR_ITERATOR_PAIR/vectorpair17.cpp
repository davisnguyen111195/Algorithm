// [Vector]. Bài 17. Số nhị phân
// Cho số N không âm 64 bit, bạn hãy in ra dạng nhị phân của N, lưu ý bạn cần in đủ 64 bit của N và triển khai code theo mẫu sau :

// vector<char> convert_number(long long n){
    
// }

// int main(){
//     int t; cin >> t;
//     while(t--){
//         long long n;
//         cin >> n;
//         vector<char> bin = convert_number(n);
//         for(char x : bin){
//             cout << x;
//         }
//         cout << endl;
//     }
//     return 0;
// }
// Input Format

// Dòng 1 là T : số test case

// T dòng tiếp theo mỗi dòng là số nguyên N

// Constraints

// 1<=T<=1000

// 0<=N<=10^18

// Output Format

// Đối với mỗi test in ra dạng nhị phân của N
// Sample Input 0

// 5
// 61
// 16
// 16
// 13
// 93
// Sample Output 0

// 0000000000000000000000000000000000000000000000000000000000111101
// 0000000000000000000000000000000000000000000000000000000000010000
// 0000000000000000000000000000000000000000000000000000000000010000
// 0000000000000000000000000000000000000000000000000000000000001101
// 0000000000000000000000000000000000000000000000000000000001011101



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
vector<char> convert_number(long long n){
    vector<char> vX;
    int loop = 64;
    while(loop--){
        int x = n % 2;
        char k = x + '0';
        vX.push_back(k);
        n /= 2;
    }
    reverse(vX.begin(), vX.end());
    return vX;
}
int main(){
 int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for(char x : bin){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}