// [Set Map]. Bài 5. Tần suất ký tự
// Cho N kí tự được nhập từ bàn phím, bạn hãy thực hiện các yêu cầu sau

// In ra kí tự có từ điển nhỏ nhất và tần suất xuất hiện của nó
// In ra kí tự có từ điển lớn nhất và tần suất xuất hiện của nó
// In ra các kí tự xuất hiện trong N kí tự đã cho theo thứ tự từ điển tăng dần kèm tần suất của nó
// In ra các kí tự xuất hiện trong N kí tự đã cho theo thứ tự từ điển giảm dần kèm tần suất của nó
// Input Format

// Dòng 1 là N : số lượng kí tự

// Dòng 2 gồm N kí tự viết cách nhau 1 dấu cách

// Constraints

// 1<=N<=10^5
// Output Format

// In ra kết quả của 4 yêu cầu, mỗi yêu cầu viết cách nhau 1 dòng
// Sample Input 0

// 20
// E a q A z A F F A f G r r l p g D p n M 
// Sample Output 0

// A 3

// z 1

// A 3
// D 1
// E 1
// F 2
// G 1
// M 1
// a 1
// f 1
// g 1
// l 1
// n 1
// p 2
// q 1
// r 2
// z 1

// z 1
// r 2
// q 1
// p 2
// n 1
// l 1
// g 1
// f 1
// a 1
// M 1
// G 1
// F 2
// E 1
// D 1
// A 3


#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    int n; cin >> n;
    map<char, int> mX;
    set<char> sX;
    for(int i = 0; i < n; i++){
        char x; cin >> x;
        mX[x]++;
        sX.insert(x);
    }

    auto it1 = sX.begin();

    cout << *it1 << " " << mX[*it1] << endl;
    cout << endl;
    auto it2 = --sX.end();

    cout << *it2 << " " << mX[*it2] << endl;

    cout << endl;
    for(auto item : sX){
        cout << item << " " << mX[item] << endl; 
    }

    cout << endl;

    for(auto it = sX.rbegin(); it != sX.rend(); it++){
        cout << *it << " " << mX[*it] << endl; 
    }
    return 0;
}