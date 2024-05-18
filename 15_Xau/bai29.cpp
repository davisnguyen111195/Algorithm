// [Xâu Ký Tự Cơ Bản]. Bài 29. Già và trẻ
// Cho 2 ngày sinh của 2 bạn Tý và Tèo, bạn hãy xác định xem ai là người trẻ hơn. Nếu Tý sinh trước Tèo in ra 28tech, Tý sinh sau Tèo in ra 29tech, Tý và Tèo sinh cùng ngày cùng tháng cùng năm thì in ra 30tech.

// Đầu vào
// Gồm 2 dòng tương ứng ngày sinh của Tý và Tèo

// Giới hạn
// Ngày sinh đúng ở dạng chuẩn dd/mm/yyyy

// Đầu ra
// In ra kết quả tương ứng

// Ví dụ :
// Input 01
// Copy
// 20/10/2001
// 01/03/2002
// Output 01
// Copy
// 28tech

#include <bits/stdc++.h>

using namespace std;
int stringToInt(string s){
    int range = s.size();
    int n = 0, p = range-1;
    for(int i = 0; i < range; i++){
        n += (s[i]-'0')*pow(10, p);
        p--;
    }
    return n;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string ty, teo;
    getline(cin, ty);
    getline(cin, teo);
    for(int i = 0; i < ty.size(); i++){
        if(ty[i] == '/'){
            ty[i] = ' ';
        }
    }

    for(int i = 0; i < teo.size(); i++){
        if(teo[i] == '/'){
            teo[i] = ' ';
        }
    }
    stringstream ss(ty);
    string word;
    vector<int> tyVec;
    while(ss >> word){
        tyVec.push_back(stringToInt(word));
    }
    stringstream ss2(teo);
    string word2;
    vector<int> teoVec;
    while(ss2 >> word2){
        teoVec.push_back(stringToInt(word2));
    }

    if(ty == teo){
        cout << "30tech";
    } else {
        if(tyVec[2] != teoVec[2]){
            if(tyVec[2] < teoVec[2]){
                cout << "28tech";
            } else {
                cout << "29tech";
            }
        } else {
            if(tyVec[1] != teoVec[1]){
                if(tyVec[1] < teoVec[1]){
                    cout << "28tech";
                } else {
                    cout << "29tech";
                }
            } else {
                if(tyVec[0] < teoVec[0]){
                    cout << "28tech";
                } else {
                    cout << "29tech";
                }
            }
        }
    }

    return 0;
}