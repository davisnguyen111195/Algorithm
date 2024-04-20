// [Comparator_Binary Search]. Bài 9. Sắp xếp pair theo second, first
// Cho mảng pair A[] gồm N pair, sắp xếp mảng pair theo second tăng dần, nếu second bằng nhau thì sắp cho first giảm dần

// Input Format

// Dòng 1 là N : số lượng phần tử trong mảng

// N dòng tiếp theo là N pair trong mảng

// Constraints

// 1<=N<=10^6

// Các phần tử của pair là số int

// Output Format

// In ra các pair sau khi sắp xếp

// Sample Input 0

// 15
// 63 40
// 19 28
// 4 48
// 26 64
// 52 46
// 76 86
// 16 81
// 57 28
// 54 95
// 80 10
// 17 36
// 10 19
// 37 74
// 9 55
// 32 85
// Sample Output 0

// 80 10
// 10 19
// 57 28
// 19 28
// 17 36
// 63 40
// 52 46
// 4 48
// 9 55
// 26 64
// 37 74
// 16 81
// 32 85
// 76 86
// 54 95

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second){
        return a.second < b.second;
    } else {
        return a.first > b.first;
    }
}

int main(){
    int n; cin >> n;
    pair<int, int> pX[n];
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        pX[i] = {a, b};
    }

    sort(pX, pX+n, cmp);
    //cout << endl;
    for(auto item: pX){
        cout << item.first << " " << item.second << endl;
    }
    return 0;
}