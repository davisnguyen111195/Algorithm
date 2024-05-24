// [Struct]. Bài 15. Khảo sát Internet
// 28tech đang làm khảo sát về việc truy cập vào website của học viên trong phòng máy. Bạn hãy viết chương trình để quản lý lượt truy cập vào các trang web sau đó liệt kê các website theo thứ tự lượt được truy cập giảm dần. Nếu có 2 trang web có cùng lượt truy cập thì bạn in ra trang web có thứ tự từ điển nhỏ hơn trước.

// Đầu vào
// Gồm nhiều dòng, mỗi dòng mô tả thời gian học viên truy cập vào trang web và địa chỉ trang web.

// Giới hạn
// Không quá 1000 dòng. Mỗi dòng có độ dài không quá 100 kí tự.

// Đầu ra
// In ra lượt truy cập của từng trang web.

// Ví dụ :
// Input 01
// Copy
// 13/07/2022 02:25:01 28tech.com.vn
// 18/02/2022 14:48:16 youtube.com
// 28/03/2022 01:39:45 28tech.com.vn
// 26/06/2022 09:23:57 tiktok.com
// 10/05/2022 13:40:00 hackerrank.com
// 06/11/2022 22:48:16 28tech.com.vn
// 15/02/2022 02:24:17 hackerrank.com
// 24/01/2022 20:16:22 hackerrank.com
// 11/06/2022 07:19:41 hackerrank.com
// 20/12/2022 13:39:40 28tech.com.vn
// Output 01
// Copy
// 28tech.com.vn 4
// hackerrank.com 4
// tiktok.com 1
// youtube.com 1

#include <bits/stdc++.h>

using namespace std;
struct Word{
    string website;
    int traffic;
    void showInfor(){
        cout << website << " " << traffic << endl;
    }
};

bool domainChecker(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.'){
            return true;
        }
    }
    return false;
}
bool cmp(Word a, Word b){
    if(a.traffic != b.traffic){
        return a.traffic > b.traffic;
    } else {
        return a.website < b.website;
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    map<string, int> mS;
    while(getline(cin, s)){
        stringstream ss(s);
        string w;
        while(ss >> w){
            if(domainChecker(w)){
                mS[w]++;
            }
        }
    
    }
    int i = 0;
    Word a[mS.size()];
    for(auto item: mS){
        a[i].website = item.first;
        a[i].traffic = item.second;
        i++;
    }

    sort(a, a+mS.size(), cmp);
    for(Word item: a){
        item.showInfor();
    }
    return 0;
}