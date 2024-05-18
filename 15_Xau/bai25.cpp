// [Xâu Ký Tự Cơ Bản]. Bài 25. Phone number check
// Một số điện thoại được coi là hợp lệ nếu nó có 10 hoặc 11 chữ số và bắt đầu bằng chữ số 0.

// Ngoài ra nó không được chứa bất cứ một ký tự đặc biệt nào ngoài các chữ số. Cho 1 loạt các số điện thoại, bạn hãy in ra xem số điện thoại nào hợp lệ và không hợp lệ?

// Đầu vào
// • Dòng 1 là T : số lượng số điện thoại

// • T dòng tiếp theo mỗi dòng là một số điện thoại

// Giới hạn
// 1<=T<=1000

// Đầu ra
// In ra YES hoặc NO với mỗi số điện thoại tùy thuộc vào nó có hợp lệ hay không?

// Ví dụ :
// Input 01
// Copy
// 6
// k20472090a
// 20400855kk8
// k0k02d0078
// 0sks0s0k0
// 160080955800
// 0965303260
// Output 01
// Copy
// NO
// NO
// NO
// NO
// NO
// YES

#include <bits/stdc++.h>

using namespace std;
bool checkNumberPhone(string s){
    bool checker = true;
    int n = s.size();
    if(n == 11 || n == 10){
        checker && true;
    } else {
        return false;
    }
    
    
    if(s[0] == '0'){
        checker && true;
    } else {
        return false;
    }
    

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 48 && s[i] <= 57){
            checker && true;
        } else {
            return false;
        }
    }

    

    return checker;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; 
    cin >> t;
    cin.ignore();
    while(t--){
        string s; 
        getline(cin, s);
        if(checkNumberPhone(s)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}