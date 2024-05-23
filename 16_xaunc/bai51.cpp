// [Xâu Ký Tự]. Bài 51. Nén xâu
// Cho xâu ký tự S, nhiệm vụ của bạn là nén các ký tự liền kề của S lại bằng gom các kí tự liền kề giống nhau và ghi số lần xuất hiện của ký tự đó vào sau.

// Ví dụ S = aaabbbccccdzaa => a3b3c4d1z1a2.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// • 1<=len(S)<=10^6

// • S chỉ bao gồm các kí tự in thường

// Đầu ra
// In ra xâu được nén

// Ví dụ :
// Input 01
// Copy
// aacducuucdcabczubduuubaaa
// Output 01
// Copy
// a2c1d1u1c1u2c1d1c1a1b1c1z1u1b1d1u3b1a3


#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int a[s.size()+1];
    fill_n(a, s.size(), 1);
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            a[i] = a[i-1] + 1;
            a[i-1] = 0; 
        }
    }
    vector<pair<char, int>> vP;
    for(int i = 0; i < s.size(); i++){
        if(a[i] > 0){
            pair<char, int> pX;
            pX.first = s[i];
            pX.second = a[i];
            vP.push_back(pX);
        }   
    }

    for(auto item: vP){
        cout << item.first << item.second;
    }

    return 0;
}
