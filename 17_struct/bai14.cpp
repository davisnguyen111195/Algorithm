// [Struct]. Bài 14. Đánh giá chất lượng
// Để đánh giá chất lượng khóa học lập trình C/C++, 28tech tổ chức thu thập các bình luận của học viên. Trong đó sẽ lọc ra các từ có nội dung "good", "bad", "wonderful", "terrible". Bạn hãy xác định xem trong các bình luận của học viên mỗi từ trên xuất hiện bao nhiêu lần để 28tech có thể tự đánh giá và hoàn thiện khóa học được tốt hơn, nếu từ nào không xuất hiện thì bạn không cần liệt kê. Hãy sắp xếp các từ theo tần suất giảm dần, nếu 2 từ có cùng tần suất thì sắp xếp theo thứ tự từ điển

// Các bạn sử dụng struct như sau (C++) :

// Copy
// struct word{
//   string data;
//   int fre;
// };
// Đầu vào
// Gồm nhiều dòng, mỗi dòng là một bình luận.

// Giới hạn
// Có không quá 1000 bình luận, mỗi bình luận không quá 100 kí tự.

// Đầu ra
// In ra các từ kèm theo tần suất tương ứng.

// Ví dụ :
// Input 01
// Copy
// good
// very good
// Thank 28tech, this course is very good
// good
// very good
// You need to improve
// very bad
// You need to improve
// good
// You need to improve
// good
// good
// good
// Thank 28tech, this course is very good
// wonderful
// very good
// wonderful
// Output 01
// Copy
// good 11
// wonderful 2
// bad 1

#include <bits/stdc++.h>

using namespace std;

struct Word{
    string number;
    int fre;
    void showInfor(){
        cout << number << " " << fre << endl;
    }
};

bool checkString(string s){
    string k[4] = {"good", "bad", "wonderful", "terrible"};
    for(int i = 0; i < 4; i++){
        if(s.find(k[i]) != string::npos){
            return true;
        }
    }
    return false;
}
bool cmp(Word a, Word b){
    if(a.fre != b.fre){
        return a.fre > b.fre;
    } else {
        return a.number < b.number;
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
            if(checkString(w)){
                mS[w]++;
            }
        }
    }
    int i = 0;
    Word a[mS.size()];
    for(auto item: mS){
        a[i].number = item.first;
        a[i].fre = item.second;
        i++;
    }
    sort(a, a+mS.size(), cmp);
    for(Word item: a){
        item.showInfor();
    }


    return 0;
}