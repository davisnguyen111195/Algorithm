// [Xâu Ký Tự]. Bài 24. Xâu đầu cuối
// Cho xâu S chỉ bao gồm các kí tự in thường, hãy đếm số lượng xâu con (xâu ký tự chứa các chữ cái liên tiếp) mà có kí tự đầu và kí tự cuối giống nhau.

// Gợi ý : Muốn có 1 xâu con có đầu cuối giống nhau thì cần 2 ký tự giống nhau => Đếm tần suất mỗi ký tự trong xâu => Tính tổ hợp chập 2 của tần suất sẽ tìm được số xâu con có đầu cuối giống nhau. VD xâu có 5 chữ a thì sẽ có tổ hợp chập 2 của 5 cách chọn 2 kí tự a giống nhau trong 5 kí tự không xét tới thứ tự, mỗi cách chọn chính là 1 xâu con có đầu cuối giống nhau

// Đầu vào
// Một dòng duy nhất chứa xâu S chỉ bao gồm chữ cái in thường.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// In ra đáp án của bài toán.

// Ví dụ :
// Input 01
// Copy
// abcdaa
// Output 01
// Copy
// 9
// Giải thích : 6 xâu con có 1 kí tự, abcda, abcdaa, aa là các xâu thỏa mãn

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll f[10005][10005];

ll C(int k, int n){
    if(k == 0 || k == n){
        return 1;
    }
    if(f[k][n]){
        return f[k][n];
    }
    f[k][n] = C(k-1, n-1) + C(k, n-1);
    return f[k][n];
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);
    int d[256] = {0};
    for(char c: s){
        d[c]++;
    }
    ll sum = 0;
    for(int i = 0; i < 256; i++){
        sum += 1ll * d[i] * (d[i] - 1) / 2;
    }

    cout << sum + s.size();
    return 0;
}