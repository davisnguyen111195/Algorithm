// [Sắp xếp - Tìm Kiếm]. Bài 21. Hợp và giao của 2 mảng
// Cho 2 mảng số nguyên, thực hiện tìm hợp và giao của 2 mảng. Các phần tử trong mỗi mảng khác nhau đôi một.

// Input Format

// Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.

// Constraints

// 1<=n,m<=10^5; -10^6<=a[i]<=10^6;

// Output Format

// Dòng đầu tiên in ra giao của 2 mảng. Dòng thứ 2 in ra hợp của 2 mảng

// Sample Input 0

// 3 5
// 1 2 3 
// 1 2 9 5 3
// Sample Output 0

// 1 2 3
// 1 2 3 5 9

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(a, a+n);
    sort(b, b+m);
    int i = 0;
    int j = 0;
    vector<int> hop;
    vector<int> giao;
    while(i < n && j < m){
        if(a[i] == b[j]){
            giao.push_back(a[i]);
            hop.push_back(a[i]);
            i++;
            j++;
        } else if(a[i] < b[j]){
            hop.push_back(a[i]);
            i++;
        } else{
            hop.push_back(b[j]);
            j++;
        }
    }
    while(i < n){
        hop.push_back(a[i]);
        i++;
    }
    while(j < m){
        hop.push_back(b[j]);
        j++;
    }
   

    for(int item: giao){
        cout << item << " ";
    }
    cout << endl;
    for(int item: hop){
        cout << item << " ";
    }
    return 0;
}