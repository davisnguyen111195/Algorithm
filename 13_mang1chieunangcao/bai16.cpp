// [Mảng 1 Chiều]. Bài 18. Đếm số lượng cặp số bằng nhau trong mảng
// Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là đếm số lượng cặp số bằng nhau trong mảng.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^6

// Output Format

// In ra số lượng cặp số bằng nhau trong mảng, không xét đến thứ tự.

// Sample Input 0

// 6
// 2 2 1 3 2 3
// Sample Output 0

// 4
// Explanation 0

// Các cặp số bằng nhau theo chỉ số : (0, 1), (0, 4), (1, 4), (3, 5)

#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    map<int, int> mX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mX[a[i]]++;
    }
    ll cnt = 0;

    //tan suat xuat hien chi 1 lan cua 2 so giong nhau la to hop chap 2 cua x phan tu. 
    //x phan tu la so so lan xuat hien cua 1 so nao dong trong mang.
    //Chon 2 phan tu trong x phan tu la to hop chap 2 cua x phan tu.
    for(auto item: mX){
        cnt += (ll) item.second*(item.second-1)/2;
    }
    cout << cnt;
    return 0;
}