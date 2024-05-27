// [Hai Con Trỏ]. Bài 3. Number of equal
// Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là hãy đếm xem trong 2 mảng tồn tại bao nhiêu cặp i, j sao cho A[i] = B[j]

// Đầu vào
// • Dòng đầu tiên là N và M

// • Dòng 2 là N số trong mảng A[]

// • Dòng 3 là M số trong mảng B[]

// Giới hạn
// • 1<=N,M<=10^7

// • 1<=A[i],B[i]<= 10^9

// Đầu ra
// In ra đáp án của bài toán

// Ví dụ :
// Input 01
// Copy
// 6 7
// 3 3 3 4 7 9 
// 2 3 3 5 6 9 10
// Output 01
// Copy
// 7

#include <bits/stdc++.h>

using namespace std;
const long long mod = 1e9+7;
int main(){

    int n, m;
    cin >> n >> m; int a[n], b[m];
    map<int, int> mA;
    for(int &x: a) {
        cin >> x;
        mA[x]++;
    }

    map<int, int> mB;
    for(int &x: b) {
        cin >> x;
        if(mA[x] != 0){
            mB[x]++;
        }
    }
    long long sum = 0;
    for(auto item: mB){
        sum += 1ll * item.second * mA[item.first];
    }

    cout << sum;
    return 0;

}


// #include <bits/stdc++.h>

// using namespace std;
// const long long mod = 1e9+7;
// int main(){
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     int n, m;
//     cin >> n >> m; int a[n], b[m];
    
//     for(int &x: a) {
//         cin >> x;
//     }

//     for(int &x: b) {
//         cin >> x;

//     }
//     int i = 0, j = 0;
//     long long sum = 0;
//     while(i < n && j < m){
//         if(a[i] == b[j]){
//             int x = a[i], d1 = 0, d2 = 0;
//             while(i < n && a[i] == x){
//                 i++;
//                 d1++;
//             }
//             while(j < m && b[j] == x){
//                 j++;
//                 d2++;
//             }

//             sum += 1ll * d2*d1;
//         } else if(a[i] < b[j]){
//             i++;
//         } else {
//             j++;
//         }
//     }

//     cout << sum;
//     return 0;

// }