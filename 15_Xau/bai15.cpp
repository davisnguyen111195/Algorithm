// [Xâu Ký Tự Cơ Bản]. Bài 15. Từ chẵn lẻ
// Cho xâu kí tự S, trong xâu S có nhiều từ được phân cách nhau bởi 1 hoặc 1 vài dấu cách.

// Nhiệm vụ của bạn là đối với những từ xuất hiện ở vị trí lẻ thì thì in ra từ đó, còn những từ xuất hiện ở vị trí chẵn thì trước khi in từ đó bạn phải lật ngược từ đó trước.

// Đầu vào
// Dòng duy nhất chứa xâu S

// Giới hạn
// 1<=len(S)<=10000

// Đầu ra
// In ra các từ trong xâu theo yêu cầu

// Ví dụ :
// Input 01
// Copy
// bWo    ziD cWS DIi    bzA zADzi aIio
// Output 01
// Copy
// bWo Diz cWS iID bzA izDAz aIio

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 1;
    while(ss >> word){
        if(cnt % 2 == 1){
            cout << word << " ";
        } else {
            for(int i = (int)word.size() - 1; i >= 0; i--){
                cout << word[i];
            }
            cout << " ";
        }
        cnt++;
    }
    return 0;
}