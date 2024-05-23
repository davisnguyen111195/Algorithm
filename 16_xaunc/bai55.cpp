// [Xâu Ký Tự]. Bài 55. Xâu đối xứng
// Cho xâu ký tự S, bạn hãy kiểm tra xem mình có thể sắp xếp lại các ký tự trong xâu sao cho xâu S trở thành xâu đối xứng hay không?

// Ví dụ S = "zaabcczb" có thể sắp xếp lại thành "zabccbaz" và trở thành xâu đối xứng.

// Gợi ý : Muốn đối xứng thì số lần xuất hiện của các ký tự phải như thế nào ? Có trường hợp nào đặc biệt không ?

// Đầu vào
// • Dòng 1 là số bộ test T

// • T dòng tiếp theo mỗi dòng là xâu S

// Giới hạn
// • 1<=T<=1000

// • Xâu S chỉ bao gồm ký tự in thường và có độ dài không quá 10^6

// Đầu ra
// Đối với mỗi test case in ra YES hoặc NO

// Ví dụ :
// Input 01
// Copy
// 10
// zzcdbaca
// bzzab
// bbddadz
// zzcabzc
// cdzzda
// dccdzzdd
// bdzcda
// aabbaa
// aadada
// cbacz
// Output 01
// Copy
// NO
// YES
// NO
// NO
// NO
// YES
// NO
// YES
// YES
// NO

#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    map<char, int> mX;
    for(char x: s){
        mX[x]++;
    }

    int cnt = 0;
    for(auto x: mX){
        if(x.second % 2){
            cnt++;
        }
    }

    if(cnt > 1) {
        return false;
    }
    if(cnt == 1){
        return s.size() % 2;
    }

    return s.size() % 2 == 0;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string s;
        cin >> s;
        if(check(s)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}