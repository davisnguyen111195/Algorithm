// [Sắp xếp - Tìm Kiếm]. Bài 5. Số xuất hiện nhiều nhất trong mảng
// Cho mảng số nguyên A[] có N phần tử, hãy tìm số xuất hiện nhiều nhất trong mảng.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^5; -10^9<=A[i]<=10^9

// Output Format

// In ra số có số lần xuất hiện nhiều nhất và tần suất tương ứng, nếu có nhiều số có cùng số lần xuất hiện thì in ra số nhỏ nhất.

// Sample Input 0

// 5
// 1 2 2 1 3
// Sample Output 0

// 1 2

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
    // #ifndef O
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int n; cin >> n;
    map<int, int> mX;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mX[x]++;
    }
    vector<pair<int, int>> vX;
    for(auto item : mX){
        pair<int, int> pX;
        pX.first = item.first;
        pX.second = item.second;
        vX.push_back(pX);
    }
    sort(vX.begin(), vX.end(), cmp);
    auto res = vX.back();
    cout << res.first << " " << res.second;
    return 0;
}