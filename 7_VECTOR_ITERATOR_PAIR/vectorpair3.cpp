// [Vector]. Bài 3. Sắp xếp
// Cho vector V có N phần tử, nhiệm vụ của bạn là sắp xếp các phần tử trong vector theo thứ tự tăng dần, giảm dần sau đó in ra bằng cách dùng iterator.

// Để sắp xếp vector bạn dùng hàm sort trong thư viện

// #include <algorithm>

// //Tăng dần
// sort(v.begin(), v.end());

// //Giảm dần
// sort(v.begin(), v.end(), greater<int>());
// Input Format

// Dòng 1 là N : số lượng phần tử trong vector. Dòng 2 là N số trong vector.

// Constraints

// 1<=N<=1000. Các phần tử của vector là số nguyên 32bit.

// Output Format

// Dòng 1 in ra vector tăng dần, dòng 2 in ra vector giảm dần.

// Sample Input 0

// 8
// 992 763 670 344 67 268 298 852 
// Sample Output 0

// 67 268 298 344 670 763 852 992 
// 992 852 763 670 344 298 268 67 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vts;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        vts.push_back(x);
    }
    sort(vts.begin(), vts.end());
    for(int vt : vts){
        cout << vt << " ";
    }
    cout << endl;
    sort(vts.begin(), vts.end(), greater<int>());
    for(int vt : vts){
        cout << vt << " ";
    }

    return 0;
}