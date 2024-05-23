// [Xâu Ký Tự]. Bài 54. Anagram

// Cho 2 xâu S và T, 2 xâu này được gọi là anagram nếu chúng có số lần xuất hiện của các ký tự trong cả 2 xâu giống nhau, thứ tự xuất hiện của các ký tự có thể khác nhau. Nhiệm vụ của bạn là kiểm tra xem 2 xâu S và T có phải là anagram hay không?

// Đầu vào
// • Dòng 1 là số bộ test T

// • T dòng tiếp theo mỗi dòng chứa 2 xâu S và T

// Giới hạn
// • 1<=T<=1000

// • 1<=len(S)<=len(T)<=10^5

// • S và T chỉ bao gồm các ký tự in thường

// Đầu ra
// Đối với mỗi test case in ra YES nếu S và T là anagram, ngược lại in ra NO

// Ví dụ :
// Input 01
// Copy
// 10
// acduzz dazzcu
// zdbbz dbbzc
// zbcaudcbu duaucdczc
// zdzadc zzdcda
// czbzzau zzdzdau
// zadbbdc dbbddbz
// acccubczc zcubcccca
// zbacuc zcuzaz
// zbbbd zbcub
// daaad addaa
// Output 01
// Copy
// YES
// NO
// NO
// YES
// NO
// NO
// YES
// NO
// NO
// YES

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n; 
    cin.ignore();
    while(n--){
        string s, t;
        cin >> s;
        cin >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if(s == t){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}