// [Xâu Ký Tự]. Bài 52. Giải nén
// Cho xâu S bao gồm các ký tự và số lần xuất hiện tương ứng của nó, bạn hãy giải nén xâu.

// Ví dụ : xâu S = a2b3z2u1 sẽ được giải nén thành aabbbzzu, S = z11 sẽ được giải nén thành zzzzzzzzzzz. Dữ liệu đảm bảo theo sau 1 kí tự sẽ luôn là 1 số nguyên dương int 32 bit.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// • 2<=len(S)<=10^5

// • S chỉ bao gồm kí tự in thường và chữ số

// Đầu ra
// In ra xâu được giải nén

// Ví dụ :
// Input 01
// Copy
// h7j4w6z1z8z10z8z1u8u6u1
// Output 01
// Copy
// hhhhhhhjjjjwwwwwwzzzzzzzzzzzzzzzzzzzzzzzzzzzzuuuuuuuuuuuuuuu

#include <bits/stdc++.h>
using namespace std;

//Cach nay limit
// int main(){
//     string s;
//     cin >> s;
//     char a[s.size()/2+1];
//     int j = 0;
//     for(int i = 0; i < s.size()-1; i++){
//         if(isalpha(s[i])){
//             a[j] = s[i];
//             s[i] = ' ';
//             j++;

//         }
//     }
//     stringstream ss(s);
//     string w;
//     int b[s.size()/2+1];
//     int k = 0;
//     while(ss >> w){
//         b[k] = stoi(w);
//         k++;
//     }

//     for(int i = 0; i < s.size()/2; i++){
//         while(b[i]--){
//             cout << a[i];
//         }
//     }
//     return 0;
// }

int main(){
    string s;
    cin >> s;
    int j = 0;
    vector<pair<char, int>> vP;
    pair<char, int> pX;
    for(int i = 0; i < s.size(); i++){
        
        char c = s[i];
        string num;
        string b;
        while(isdigit(s[i+1]) && i+1 < s.size()){
            num += s[i+1];
            i++;
        }
        int x = stoi(num);
        while(x--){
            cout << c;
        }
    }
    return 0;
}
