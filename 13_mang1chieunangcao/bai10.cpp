// [Mảng 1 Chiều]. Bài 7. Sắp xếp chẵn lẻ.
// Cho một mảng các số nguyên, sắp xếp các phần tử trong mảng sao cho, các phần tử lẻ đứng trước và giảm dần, các phần tử chẵn đứng sau và tăng dần. Xem thêm ví dụ để hiểu rõ hơn yêu cầu.

// Input Format

// Dòng đầu tiên là số lượng phần tử trong mảng n Dòng thứ 2 là các phần tử ai trong mảng

// Constraints

// 1≤n≤10^6; 1≤ai≤10^9

// Output Format

// In ra dãy đã được sắp xếp

// Sample Input 0

// 10
// 1 2 3 9 7 4 8 6 10 5
// Sample Output 0

// 9 7 5 3 1 2 4 6 8 10

#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    int s1 = a % 2;
    int s2 = b % 2;
    if(s1 == 1 && s2 == 0) return true;
    if(s1 == 0 && s2 == 1) return false;
    if(s1 == 1 && s2 == 1) return a > b;
    if(s1 == 0 && s2 == 0) return a < b;
    return false;
}

int main(){
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n, cmp);

    for(int item: a){
        cout << item << " ";
    }
    return 0;
}