// [Xâu Ký Tự]. Bài 57. 28Tech & Chemistry
// 28tech là một người yêu thích hóa học, trong môn hóa học anh ta thường phải tính phân tử khối của một chất hóa học. Chất hóa học này bao gồm nhiều nguyên tử cùng với số lần xuất hiện của nó. Bạn hãy giúp 28tech tìm ra nguyên tử khối của các chất hóa học anh ta đang có. Biết rằng công thức hóa học của 1 chất sẽ bao gồm nhiều nguyên tử và theo sau 1 nguyên tử sẽ là số lần xuất hiện của nó trong hợp chất.

// Đầu vào
// • 10 dòng đầu tiên của input là 10 nguyên tố hóa học xuất hiện trong các công thức hóa học kèm nguyên tử khối của nó.

// • Dòng số 11 là T : số lượng công thức hóa học

// • T dòng tiếp theo là công thức hóa học của T chất

// Giới hạn
// • 1<=T<=100

// • Công thức hóa học có độ dài không quá 10000, số lần xuất hiện của các nguyên tử trong phân tử không quá 10000.

// Đầu ra
// In ra phân tử khối của từng chất hóa học trên từng dòng

// Ví dụ :
// Input 01
// Copy
// Al 27
// Ca 40
// F 19
// H 1
// He 4
// K 39
// N 14
// O 16
// P 31
// S 32
// 6
// H7Al6O7
// Ca3Al4P7
// N3He7K4
// F5F6He6
// He5Ca4N3
// Ca6H6N7
// Output 01
// Copy
// 281
// 445
// 226
// 233
// 222
// 344

#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t = 10;
    string s;
    map<string, int> mapS;
    while(t--){
        getline(cin, s);
        stringstream ss(s);
        string w;
        string chat;
        while(ss >> w){
            
            if(isalpha(w[0])){
                mapS[w] = 0;
                chat = w;
            } else {
                mapS[chat] = stoi(w);
            }
            
        }
    }
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string h;
        cin >> h;
        int sum = 0;
        for(int i = 0; i < h.size();){
            string b;
            while(isalpha(h[i])){
                b.push_back(h[i]);
                i++;
            }
            string num;
            while(isdigit(h[i])){
                num.push_back(h[i]);
                i++;
            }
            sum += mapS[b] * stoi(num);
            
        }
        cout << sum << endl;
    }
    return 0;
}