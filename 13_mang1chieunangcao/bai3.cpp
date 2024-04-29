// [Comparator_Binary Search]. Bài 4. Pair sort
// Cho mảng A[] gồm N điểm trong hệ tọa độ Oxy, hãy sắp xếp các điểm này theo khoảng cách về gốc tọa độ tăng dần, nếu 2 điểm có cùng khoảng cách tới gốc tọa độ thì in ra theo hoành độ tăng dần, nếu tiếp tục 2 điểm này có cùng hoành độ thì in ra theo thứ tự tung độ tăng dần.

// Input Format

// Dòng đầu tiên là N : số lượng điểm

// N dòng tiếp theo mỗi dòng là 2 số nguyên x, y tương ứng với hoành độ và tung độ

// Constraints

// 1<=N<=10^5;
// -1000<=x,y<=1000;
// Output Format

// In ra các điểm sau khi sắp xếp

// Sample Input 0

// 13
// -42 -76
// 47 43
// 12 7
// -62 31
// 7 64
// 42 -92
// -89 60
// 45 41
// 3 54
// -41 40
// 20 -24
// 88 42
// 0 12
// Sample Output 0

// 0 12
// 12 7
// 20 -24
// 3 54
// -41 40
// 45 41
// 47 43
// 7 64
// -62 31
// -42 -76
// 88 42
// 42 -92
// -89 60

#include <bits/stdc++.h>

using namespace std;
double f(int a, int b){
    return sqrt(a*a + b*b);
}
bool cmp (pair<int, int> a, pair<int, int> b){
    if(f(a.first, a.second) != f(b.first, b.second)){
        return f(a.first, a.second) < f(b.first, b.second);
    } else {
        if(a.first != b.first){
            return a.first < b.first;
        } else {
            return a.second < b.second;
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