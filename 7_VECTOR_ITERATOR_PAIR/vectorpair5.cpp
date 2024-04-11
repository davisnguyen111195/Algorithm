// [Vector]. Bài 5. Lật ngược vector
// Cho vector V có N phần tử, nhiệm vụ của bạn là lật ngược vector V và in ra. Sau khi lật ngược toàn bộ vector, bạn tiếp tục lật ngược các phần tử từ chỉ số L tới chỉ số R sau đó in ra vector. Để lật ngược vector V :

// reverse(V.begin(), V.end())
// , để lật ngược vector V từ chỉ số L tới chỉ số R :

// reverse(V.begin() + L, V.begin() + R + 1);
// Input Format

// Dòng 1 là N : số lượng phần tử trong vector. Dòng 2 là N số trong vector. Dòng 3 là L và R

// Constraints

// 1<=N<=1000. 0<=L<=R

// Output Format

// Dòng 1 in ra vector sau lần lật 1, dòng 2 in ra vector sau lận lật 2.

// Sample Input 0

// 13
// 5 3 4 1 6 3 0 3 1 4 8 4 1 
// 3 3
// Sample Output 0

// 1 4 8 4 1 3 0 3 6 1 4 3 5 
// 1 4 8 4 1 3 0 3 6 1 4 3 5 
// Sample Input 1

// 10
// 7 8 1 7 1 9 1 4 0 9 
// 3 5
// Sample Output 1

// 9 0 4 1 9 1 7 1 8 7 
// 9 0 4 1 9 1 7 1 8 7 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n; 
    vector<int> vts;
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        vts.push_back(x);
    }

    reverse(vts.begin(), vts.end());
    for(int vt : vts){
        cout << vt << " ";
    }

    cout << endl;
    int l, r; cin >> l >> r;
    reverse(vts.begin() + l, vts.begin()+r+1);
    for(int vt : vts){
        cout << vt << " ";
    }
    return 0;
}