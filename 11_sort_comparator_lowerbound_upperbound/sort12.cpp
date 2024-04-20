// [Comparator_Binary Search]. Bài 10. Sắp xếp pair 2
// Cho mảng pair A[] gồm N pair, sắp xếp mảng pair abs(first - second) tăng dần, nếu cùng abs(first - second) thì sắp theo first tăng dần, nếu first bằng nhau thì cho second giảm dần

// Input Format

// Dòng 1 là N : số lượng phần tử trong mảng

// N dòng tiếp theo là N pair trong mảng

// Constraints

// 1<=N<=10^6

// Các phần tử của pair là số int

// Output Format

// In ra các pair sau khi sắp xếp

// Sample Input 0

// 13
// 12 39
// 13 38
// 0 37
// 25 19
// 2 4
// 47 28
// 21 41
// 24 20
// 43 32
// 10 39
// 12 49
// 4 0
// 12 24
// Sample Output 0

// 2 4
// 4 0
// 24 20
// 25 19
// 43 32
// 12 24
// 47 28
// 21 41
// 13 38
// 12 39
// 10 39
// 0 37
// 12 49

#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    int k = abs(a.first - a.second);
    int k2 = abs(b.first - b.second);
    if(k != k2){
        return k < k2;
    } else {
        if(a.first != b.first){
            return a.first < b.first;
        } else {
            return a.second > b.second;
        }
         

    }
}
int main(){
    int n; cin >> n;
    pair<int, int> pX[n];
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        pX[i] = {x, y};
    }
    sort(pX, pX+n, cmp);

    for(auto item: pX){
        cout << item.first << " " << item.second << endl;
    }

    return 0;
}