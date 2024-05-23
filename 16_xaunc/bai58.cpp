// [Xâu Ký Tự]. Bài 58. Rút gọn đa thức
// Cho đa thức F(x), nhiệm vụ của bạn là thu gọn lại đa thức và in ra đa thức với bậc tăng dần.

// Đầu vào
// • Dòng 1 là T : số bộ test

// • T dòng tiếp theo mỗi dòng là một đa thức của biến x

// Giới hạn
// • 1<=T<=100

// • Đa thức có độ dài không quá 10000

// Đầu ra
// In ra đa thức sau khi thu gọn

// Ví dụ :
// Input 01
// Copy
// 5
// 4x^2 + 1x^0 + 5x^2 + 1x^1 + 4x^2 + 5x^3 + 2x^3 + 2x^4 + 3x^4
// 1x^2 + 2x^1 + 4x^1 + 5x^2 + 5x^2
// 1x^0 + 1x^3 + 2x^2 + 4x^2 + 4x^3 + 3x^1
// 2x^3 + 4x^2 + 5x^0 + 2x^1 + 4x^1 + 1x^1 + 3x^3 + 2x^2 + 1x^4
// 1x^4 + 4x^4 + 3x^3 + 4x^0 + 5x^1 + 4x^1 + 1x^4 + 2x^2 + 1x^4
// Output 01
// Copy
// 1x^0 + 1x^1 + 13x^2 + 7x^3 + 5x^4
// 6x^1 + 11x^2
// 1x^0 + 3x^1 + 6x^2 + 5x^3
// 5x^0 + 7x^1 + 6x^2 + 5x^3 + 1x^4
// 4x^0 + 9x^1 + 2x^2 + 3x^3 + 7x^4

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; 
    cin >> t;
    cin.ignore();
    
    while(t--){
        string s; 
        getline(cin, s);
        map<string, int> mS;
        s += " ";
        for(int i = 0; i < s.size()-1;){
            if(s[i] != ' ' && s[i] != '+'){
                string num;
                while(isdigit(s[i])){
                    num.push_back(s[i]);
                    i++;
                }
                string somu;
                while(s[i] != ' '){
                    somu.push_back(s[i]);
                    i++;
                }
                if(mS[somu] != 0){
                    mS[somu] += stoi(num);
                } else {
                    mS[somu] = stoi(num);
                }
            } else{
                i++;
            }
            
        }
        auto it = --mS.end();
        for(auto it2 = mS.begin(); it2 != it; it2++){
            cout << (*it2).second << (*it2).first << " + ";
        }
        cout << (*it).second << (*it).first;
        cout << endl;
    }


    return 0;
}