// [Xâu Ký Tự Cơ Bản]. Bài 35. Sunday league
// 28tech rất thích bóng đá và anh ta có danh sách các trận đấu của giải bóng đá Sunday League. Anh ta nhờ bạn kiểm tra xem mỗi đội đá bao nhiêu trận? Sau đó bạn hãy sắp xếp các đội bóng này số trận thi đấu giảm dần, nếu có 2 đội có cùng số trận thi đấu thì bạn in ra đội có thứ tự từ điển nhỏ hơn trước. Gợi ý : Dùng map để đếm tần suất thi đấu của từng đội, sau đó đưa các phần tử trong map ra 1 vector<pair<string, int>> để sort.

// Đầu vào
// Gồm nhiều dòng mỗi dòng gồm thông tin của 1 trận đấu có dạng X - Y, trong đó X, Y là 2 đội bóng trong trận đấu

// Giới hạn
// Có không quá 1000 lượt thi đấu

// Đầu ra
// In ra kết quả theo yêu cầu của đề bài

// Ví dụ :
// Input 01
// Copy
// Manchester United - Arsenal
// PSG - 28tech FC
// Leicester City - 28tech FC
// 28tech FC - Manchester City
// Arsenal - Barcelona
// Manchester City - Westham
// Arsenal - Manchester City
// Chelsea - Manchester United
// Manchester United - Manchester City
// Barcelona - Manchester City
// Output 01
// Copy
// Manchester City 5
// 28tech FC 3
// Arsenal 3
// Manchester United 3
// Barcelona 2
// Chelsea 1
// Leicester City 1
// PSG 1
// Westham 1

#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.second != b.second){
        return a.second > b.second;
    } else {
        return a.first < b.first;
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    map<string, int> mS;
    vector<pair<string, int>> vS;
    string b;
    while(getline(cin, s)){
        s += " - ";
        stringstream ss(s);
        string word;
        string c;
        while(ss >> word){
            if(word != "-"){
                c += word + " ";
            } else{
                mS[c]++;
                c.clear();
            }
            

        }
        
    }

    for(auto item: mS){
        pair<string, int> pS;
        pS.first = item.first;
        pS.second = item.second;
        vS.push_back(pS);
    }
    sort(vS.begin(), vS.end(), cmp);
    for(auto item: vS){
        cout << item.first << item.second << endl;
    }


    return 0;
}