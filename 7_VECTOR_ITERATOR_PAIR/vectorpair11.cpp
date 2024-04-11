// [Vector]. Bài 11. Hàm trả về vector
// Vector cũng như một kiểu dữ liệu bình thường, vì thế bạn có thể viết 1 hàm có tham số là vector hay 1 hàm trả về vector. Cho một vector chứa N số nguyên, bạn hãy viết hàm trả về 1 vector chứa các số nguyên tố trong dãy số đó. Bạn phải code tuân theo khuôn mẫu sau

// vector<int> prime_list(vector<int> v){
//     //tạo 1 vector mới sau đó duyệt v, tìm số nguyên tố và pushback vào
//     //trả về vector mới tạo
// }

// int main(){
//     vector<int> v;
//     nhap(v); // Hàm nhập viết ntn?
//     vector<int> res = prime_list(v);
//     in(res);
// }
// Input Format

// Dòng 1 là N : số lượng phần tử trong vector

// Dòng 2 N số trong vector

// Constraints

// 1<=N<=1000

// Các phần tử trong vector là số int

// Output Format

// In ra các số nguyên tố trong dãy theo thứ tự xuất hiện
// Sample Input 0

// 15
// 9 6 10 15 4 9 4 3 17 4 11 0 4 2 18 
// Sample Output 0

// 3 17 11 2 
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> prime_list(vector<int> v);
bool primeChecker(int n);

int main(){
    #ifndef DAN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    vector<int> v;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    vector<int> res = prime_list(v);

    for(auto item : res){
        cout << item << " ";
    }
    

    return 0;
}

vector<int> prime_list(vector<int> v){
    vector<int> vtNT;
    for(int i = 0; i < (int)v.size(); i++){
        if(primeChecker(v[i])) {
            vtNT.push_back(v[i]);
        }
    }

    return vtNT;
}

bool primeChecker(int n){
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}