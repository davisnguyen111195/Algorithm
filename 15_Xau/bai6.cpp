
// [Xâu Ký Tự Cơ Bản]. Bài 6. Sắp xếp chữ số
// Cho số nguyên không âm N, hãy tiến hành sắp xếp các chữ số của N theo thứ tự tăng dần rồi in ra màn hình, trong trường hợp số sau khi sắp xếp xuất hiện các chữ số 0 ở đầu thì ra không in những chữ số 0 vô nghĩa này.

// Đầu vào
// Dòng duy nhất chứa số nguyên dương N

// Giới hạn
// 0<=N<=10^18

// Đầu ra
// In ra số N sau khi sắp xếp

// Ví dụ :
// Input 01
// Copy
// 999968677
// Output 01
// Copy
// 667789999
// Input 02
// Copy
// 2828000
// Output 02
// Copy
// 2288

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    multiset<int> msX;
    if(s == "0"){
        cout << 0;
        return 0;
    } else {
        for(int i = 0; i < (int)s.size(); i++){
            if(s[i] != '0'){
                msX.insert(s[i] - '0');
            }
        }

        for(int item: msX){
            cout << item;
        }
    }
    
    return 0;
}