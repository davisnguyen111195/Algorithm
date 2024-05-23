// [Xâu Ký Tự]. Bài 61. Tổng 2 số nguyên lớn
// Cho 2 số nguyên không âm N & M có không quá 10^4 chữ số, hãy tính tổng của N và M và in ra màn hình.

// Đầu vào
// • Dòng 1 là số bộ test T

// • T dòng tiếp mỗi dòng là 2 số nguyên N M cách nhau 1 khoảng trắng

// Giới hạn
// • 1<=T<=100

// Đầu ra
// In ra kết quả từng test trên mỗi dòng

// Ví dụ :
// Input 01
// Copy
// 3
// 10570120111055536422164 481703468408024246478735720
// 46208456686518677708 5617408074740658152263621125466
// 4520771650246044343323263202 72165130453752120403013532152
// Output 01
// Copy
// 481714038528135302015157884
// 5617408074786866608950139803174
// 76685902103998164746336795354


#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string s, t;
        cin >> s >> t;
        string k,l;
        if(s.size() < t.size()){
            k = s;
            l = t;
        }else {
            k = t;
            l = s;
        }
        reverse(k.begin(), k.end());
        reverse(l.begin(), l.end());
        int j = 0;
        string res;
        int du = 0;
        int i = 0;
        for(; i < k.size(); i++){
            int x= (k[i] - '0') + (l[i] - '0');
            if(du){
                x++;
                du = 0;
            }
            if(x > 9){
                x-=10;
                du = 1;
            }
            char c = '0' + x;
            res += c;
        }
        for(; i < l.size(); i++){
            int x = l[i] - '0';
            if(du){
                x++;
                du = 0;
            }
            if(x > 9){
                x -= 10;
                du = 1;
            }
            char c = '0' + x;
            res += c;
        }
        if(du) {
            res += '1';
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
            
    }

    return 0;
}