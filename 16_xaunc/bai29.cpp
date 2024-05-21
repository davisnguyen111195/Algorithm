// [Xâu Ký Tự]. Bài 29. Tổng các số trong xâu
// Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy tìm tổng các số xuất hiện trong xâu.

// Ví dụ : xâu kí tự "abcd123aad22a05" có tổng các số trong xâu là 123 + 22 + 5 = 150. Trong trường hợp các số bắt đầu bằng số 0 thì ta loại bỏ các số đó, dữ liệu đảm bảo tổng các số xuất hiện trong xâu không vượt quá 10^18.

// Đầu vào
// Một dòng duy nhất chứa xâu S.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// In ra tổng các số trong xâu.

// Ví dụ :
// Input 01
// Copy
// abcd123aad22a05
// Output 01
// Copy
// 150
#include <bits/stdc++.h>

using namespace std;
#define ll long long
void locSo(string& s){
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i])){
            s[i] = ' ';
        }
    }
}

const ll mod = 1e9+7;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);
    locSo(s);
    ll sum = 0;
    stringstream ss(s);
    string w;
    while(ss >> w){
        sum += stoll(w);
    }
    cout << sum;
    return 0;
}