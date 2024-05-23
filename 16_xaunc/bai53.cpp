// [Xâu Ký Tự]. Bài 53. Score
// Cho danh sách các trận đấu, nhiệm vụ của bạn là cập nhật xem mỗi đội bóng ghi được tất cả bao nhiêu bàn thắng và liệt kê tên đội bóng kèm số bàn thắng mà đội này ghi được theo thứ tự giảm dần về số bàn thắng, nếu 2 đội có cùng số lượng bàn thắng thì in tên đội bóng theo từ điển tăng dần .

// Thông tin các trận đấu được cho dưới dạng X a - b Y trong đó X, Y là tên của 2 đội bóng, a là số bàn thắng của đội X và b là số bàn thắng của đội Y. Ví dụ Chelsea 3 - 4 Arsenal

// Đầu vào
// Gồm nhiều dòng, mỗi dòng là thông tin 1 trận đấu.

// Giới hạn
// Có không quá 100000 lượt đấu

// Đầu ra
// In ra kết quả của bài toán

// Ví dụ :
// Input 01
// Copy
// Barca 3 - 18 Man City
// 28Tech Football Club 5 - 19 Newcastle United
// Chelsea 6 - 0 Newcastle United
// 28Tech Football Club 18 - 12 Liverpool
// Manchester United 13 - 13 Aston Villa
// Arsenal 19 - 0 Aston Villa
// Barca 19 - 15 Man City
// Manchester United 19 - 6 Aston Villa
// Manchester United 19 - 13 Aston Villa
// Chelsea 15 - 3 Liverpool
// Output 01
// Copy
// Manchester United 51
// Man City 33
// Aston Villa 32
// 28Tech Football Club 23
// Barca 22
// Chelsea 21
// Arsenal 19
// Newcastle United 19
// Liverpool 15


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
    map<string, int> mapDoi;
    while(getline(cin, s)){
        string tmp = s;
        auto pos = tmp.find(" - ");
        auto posDoiA = pos - 1;
        auto posDoiB = pos + 3;
        string banThang;
        while(posDoiA >= 0 && tmp[posDoiA] != ' '){
            banThang.push_back(tmp[posDoiA]);
            posDoiA--;
        }
        reverse(banThang.begin(), banThang.end());

        string doiA;
        for(int i = 0; i < posDoiA; i++){
            doiA.push_back(tmp[i]);
        }
        if(mapDoi[doiA] != 0){
            mapDoi[doiA] += stoi(banThang);
        } else {
            mapDoi[doiA] = stoi(banThang);
        }

        string banThang2;
        while(posDoiB < s.size() && tmp[posDoiB] != ' '){
            banThang2.push_back(tmp[posDoiB]);
            posDoiB++;
        }

        string doiB;
        for(int i = posDoiB+1; i < s.size(); i++){
            doiB.push_back(tmp[i]);

        }

        if(mapDoi[doiB] != 0){
            mapDoi[doiB] += stoi(banThang2);
        } else {
            mapDoi[doiB] = stoi(banThang2);
        }
    }
    vector<pair<string, int>> vS;
    for(auto item: mapDoi){
        vS.push_back({item.first, item.second});
    }

    sort(vS.begin(), vS.end(), cmp);

    for(auto item : vS){
        cout << item.first << " " << item.second << endl;
    }

    return 0;
}