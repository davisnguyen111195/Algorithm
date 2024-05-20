// [Xâu Ký Tự]. Bài 17. Chuẩn hóa tên 2
// Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người theo 2 mẫu được yêu cầu trước. Xem output để rõ hơn về cách chuẩn hóa.

// Đầu vào
// Dòng duy nhất là tên người.

// Giới hạn
// Xâu kí tự tên người có không quá 1000 kí tự;

// Đầu ra
// Dòng đầu tiên in ra theo mẫu chuẩn hóa 1. Dòng thứ 2 in ra theo mẫu chuẩn hóa 2.

// Ví dụ :
// Input 01
// Copy
// le  THi   HOng   NHunG
// Output 01
// Copy
// Le Thi Hong, NHUNG
// NHUNG, Le Thi Hong



#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector<string> vS;
    stringstream ss(s);
    string w;
    while(ss >> w){
        vS.push_back(w);
    }
    for(int i = 0; i < vS.size(); i++){
        string k = vS[i];
        if(k[0] >= 97 && k[0] <= 122){
            k[0] -= 32;
        }
        for(int i = 1; i < k.size(); i++){
            if(k[i] >= 65 && k[i] <= 90){
                k[i] += 32;
            }
        }
        vS[i] = k;
    }

    string b;
    int vSsize = vS.size();
    for(int i = 0; i <= vSsize - 2; i++){
        if(i == (vSsize - 2)){
            b += vS[i];
        } else {
            b += vS[i] + " ";
        }
    }
    string name = vS[vSsize - 1];
    for(int i = 0; i < name.size(); i++){
        if(name[i] >= 90 && name[i] <= 122){
            name[i] -= 32;
        }
    }
    
    cout << b << ", " << name << endl;
    cout << name << ", " << b;
    return 0;
}
