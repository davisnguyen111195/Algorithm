// [Mảng 1 chiều cơ bản]. Bài 37. Tìm kiếm trong mảng 1 chiều
// Cho mảng A[] gồm N phần tử, bạn hãy kiểm tra xem giá trị X có xuất hiện trong mảng không?

// Gợi ý : Dùng mảng đánh dấu để mỗi test case chỉ mất O(1) thay vì tìm kiếm tuyến tính sẽ mất O(N)

// Input Format

// Dòng 1 là N : số phần tử trong mảng

// Dòng 2 là N số trong mảng viết cách nhau 1 dấu cách

// Dòng 3 là T : Số test case

// T dòng tiếp theo mỗi dòng là số nguyên X

// Constraints

// 1<=N<=10^6

// 0<=A[i]<=10^7

// 1<=T<=10^4

// 0<=X<=10^7

// Output Format

// Đối với mỗi test case in ra YES nếu X xuất hiện trong mảng, ngược lại in NO.
// Sample Input 0

// 9
// 2 41 21 28 27 3 49 22 2 
// 5
// 3
// 27
// 15
// 15
// 19
// Sample Output 0

// YES
// YES
// NO
// NO
// NO

#include <iostream>

using namespace std;
bool b[10000007];
int main(){
    int n; cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){

        cin >> a[i];
        b[a[i]]=1;
    }

    int testCase; cin >> testCase;
    while(testCase--){
        int x; cin >> x;
        if(b[x]){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}