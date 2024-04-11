// [Vector]. Bài 4. Duyệt
// Cho vector V có N phần tử, nhiệm vụ của bạn in ra các phần tử từ chỉ số L tới chỉ số R sau đó in ra các phần tử từ chỉ số R tới chỉ số L bằng cách dùng iterator.

// Input Format

// Dòng 1 là N : số lượng phần tử trong vector. Dòng 2 là N số trong vector. Dòng 3 là L và R

// Constraints

// 1<=N<=1000. 0<=L<=R

// Output Format

// Dòng 1 in ra vector từ L tới R, dòng 2 in ra vector từ R tới L.

// Sample Input 0

// 10
// 8 1 8 3 8 5 3 5 9 7 
// 3 6
// Sample Output 0

// 3 8 5 3 
// 3 5 8 3 

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> vts;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        vts.push_back(x); 
    }

    vector<int>::iterator it = vts.begin();
    int l, r; cin >> l >> r;
    for(auto i = it + l; i <= it + r; i++){
        cout << *i << " ";
    }
    cout << endl;
    for(auto i = it + r; i >= it + l; i--){
        cout << *i << " ";
    }
    return 0;
}