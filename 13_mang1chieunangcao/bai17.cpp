// [Mảng 1 Chiều]. Bài 19. Dãy con dài nhất các phần tử liền kề khác nhau
// Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn tìm ra độ dài của dãy con liên tiếp các phần tử sao cho các phần tử liền kề nhau trong dãy con đều khác nhau. Nếu có nhiều dãy con thỏa mãn, hay in ra dãy con có tổng lớn nhất.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i].

// Constraints

// 1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^6

// Output Format

// In ra đáp án của bài toán trên 2 dòng. Dòng đầu tiên là độ dài của dãy con dài nhất. Dòng thứ 2 là các phần tử trong dãy con đó.

// Sample Input 0

// 8
// 1 2 3 4 4 5 6 7
// Sample Output 0

// 4
// 4 5 6 7

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int l = 0, r = 0, x = 0, y = -1;
    ll sum = 0;
    ll presum = 0;
    set<int> sX;
    for(r; r < n; r++){
        while(sX.count(a[r])){
            sum -= a[l];
            sX.erase(a[l]);
            l++;
        }
        sX.insert(a[r]);
        sum += a[r];
        if((r - l + 1 > y - x + 1) || (r-l+1 == y-x+1 && sum > presum)){
            x = l;
            y = r;
            presum = sum;
        }
    }

    cout << y - x + 1 << endl;
    for(int i = x; i <= y; i++){
        cout << a[i] << " ";
    }
    return 0;
}