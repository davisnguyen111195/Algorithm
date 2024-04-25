// [Sắp xếp - Tìm Kiếm]. Bài 28. Sắp đặt số 0
// Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng sao cho các số 0 để ở cuối cùng, các phần tử khác 0 được bảo toàn thứ tự trước sau. Ví dụ với mảng A[] = {1, 2, 0, 0, 0, 3, 6} ta có kết quả A[] = {1, 2, 3, 6, 0, 0, 0}.

// Input Format

// Dòng đầu tiên đưa vào n là số phần tử của mảng A[]; Dòng kế tiếp đưa vào n số A[i] của mảng; Các số được viết cách nhau một vài khoảng trống.

// Constraints

// 1≤ N ≤10^5; 1≤ A[i] ≤10^5.

// Output Format

// In ra kết quả trên một dòng

// Sample Input 0

// 7
// 1 2 0 0 0 3 6
// Sample Output 0

// 1 2 3 6 0 0 0

#include <bits/stdc++.h>

using namespace std;


int main(){
    int n; cin >> n;
    int a[n];
    map<int, int> mX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mX[a[i]]++;
    }
    vector<int> vX;
    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            vX.push_back(a[i]);
        } else {
            continue;
        }
    }
    while(mX[0] > 0){
        vX.push_back(0);
        mX[0]--;
    }
    for(int item: vX){
        cout << item << " ";
    }
    return 0;
}