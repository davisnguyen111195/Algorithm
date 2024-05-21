// [Xâu Ký Tự]. Bài 33. Số đẹp 2
// Một số được coi là số đẹp nếu nó là số thuận nghịch và chứa ít nhất 1 chữ số 6. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

// Đầu vào
// Số nguyên dương N

// Giới hạn
// N có không quá 1000 chữ số.

// Đầu ra
// In ra YES nếu N là số đẹp, ngược lại in ra NO.

// Ví dụ :
// Input 01
// Copy
// 6433987866217635596629171229463963223693649221719266955367126687893346
// Output 01
// Copy
// YES

#include <bits/stdc++.h>

using namespace std;

bool tnchecker(string s){
    string b;
    for(int i = s.size() - 1; i >= 0; i--){
        b.push_back(s[i]);
    }
    return b == s;
}

bool depChecker(string s){
    //bool checker = tnchecker(s);
    if(tnchecker(s)){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '6'){
                return true;
            }
        }
    }
    return false;

}


int main(){
    string s;
    cin >> s;
    if(depChecker(s)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
