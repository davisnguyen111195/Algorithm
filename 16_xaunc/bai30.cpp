// [Xâu Ký Tự]. Bài 30. Ghép xâu
// Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy thực hiện tách các số xuất hiện trong xâu ra và ghép lại với nhau để tạo thành một số tự nhiên lớn nhất.

// Ví dụ : với xâu S = "123abcda234kkf11tech28" thì ta sẽ tách được các số 123, 234, 11 và 28, trong trường hợp các số bắt đầu bằng chữ số 0 thì ta loại bỏ các số 0 vô nghĩa này. Sau đó ghép lại với nhau thành số 2823412311 là số lớn nhất có thể đạt được.

// Đầu vào
// Một dòng duy nhất chứa xâu S.

// Giới hạn
// 1≤len(S)≤100000

// Đầu ra
// In ra số lớn nhất ghép được.

// Ví dụ :
// Input 01
// Copy
// 123abcda234kkf11tech28
// Output 01
// Copy
// 2823412311

#include <bits/stdc++.h>
using ll = long long;
using namespace std;
bool cmp(string a, string b){
    string s1 = a + b;
    string s2 = b + a;
    return s1 > s2;
}

void locSo(string& s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            cnt++;
        } else {
            break;
        }

    }
    if(cnt == s.size()){
        s = "0";
    } else {
        s.erase(0, cnt);
    }
    
}
int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i])){
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    string w;
    vector<string> vS;
    while(ss >> w){
        //ll check = stoll(w);
        locSo(w);
        vS.push_back(w);
    }

    sort(vS.begin(), vS.end(), cmp);
    for(string item: vS){
        cout << item;
    }
    return 0;
}
