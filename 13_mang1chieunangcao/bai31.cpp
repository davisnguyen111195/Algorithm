// [Mảng 1 Chiều]. Bài 31. Maximum pair
// Cho mảng A[] gồm N phần tử, hãy tìm 2 chỉ số i, j khác nhau sao cho 0 <= i < j < N và trị tuyệt đối tổng của 2 phần tử A[i] và A[j] đạt giá trị lớn nhất.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 2<=N<=10^6;
// -10^9<=A[i]<=10^9

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 5
// -1 -2 -3 9 -5
// Sample Output 0

// 8

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    long long a1 = abs(a[0] + a[1]);
    long long a2 = abs(a[n-1] + a[n-2]);
    long long result = max(a1, a2);
    cout << result; 
    return 0;
}