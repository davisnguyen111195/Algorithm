// [Mảng 1 Chiều].Bài 3. Số lớn hơn các số đứng trước
// Cho một dãy số nguyên dương có n phần tử. Hãy liệt kê số các phần tử trong dãy lớn hơn tất cả các số đứng trước nó (Phần tử đầu tiên được coi là một phần tử thỏa mãn).

// Input Format

// Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

// Constraints

// 2≤n≤10^6; 1≤ai≤10^9

// Output Format

// Liệt kê các số thỏa mãn

// Sample Input 0

// 6
// 2 6 1 3 9 9
// Sample Output 0

// 2 6 9

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    set<int> sX;
    set<int> result;
    for(int i = 0; i < n; i++){
        sX.insert(a[i]);
        result.insert(*sX.rbegin());
    }
    for(int item: result){
        cout << item << " ";
    }
    return 0;
}