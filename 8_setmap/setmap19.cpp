// [Set Map]. Bài 17. Truy vấn kí tự
// Cho một xâu kí tự S chỉ bao gồm các kí tự từ a tới z. Bạn được yêu cầu thực hiện các nhiệm vụ sau bằng CTDL phù hợp. - 1. Tìm kí tự có tần suất xuất hiện nhiều nhất và có thứ tự từ điển nhỏ nhất.

// Tìm kí tự có tần suất xuất hiện nhỏ nhất và có thứ tự từ điển lớn nhất.
// Tìm số lượng kí tự khác nhau trong xâu.
// Input Format

// Xâu kí tự S.

// Constraints

// 1 ≤ len(S) ≤ 10^6;

// Output Format

// Dòng đầu tiên in ra kí tự có tần suất lớn nhất, nếu có nhiều kí tự có cùng tần suất in ra kí tự có thứ tự từ điển nhỏ nhất.

// Dòng thứ 2 in ra kí tự có tần suất nhỏ nhất, nếu có nhiều kí tự có cùng tần suất thì in ra kí tự có thứ tự từ điển lớn nhất.

// Dòng 3 in ra số lượng kí tự khác nhau trong xâu.

// Sample Input 0

// mghzbzhrucvwjssatuhlwcradwtbmyqdjcksyskvhrgcubvtoimrjwnanfqgenshrjtf
// Sample Output 0

// h 5
// o 1
// 24

#include <iostream>
#include <stdio.h>
#include <map>
#include <string>

using namespace std;

int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s; cin >> s;
    map<char, int> mS;
    for(int i = 0; i < (int)s.length(); i++){
        mS[s[i]]++;
    }
    int maxS = -1;
    int minS = 1e6+7;
    for(auto item : mS){
        maxS = max(maxS, item.second);
        minS = min(minS, item.second);
    }
    for(auto item : mS){
        if(item.second == maxS){
            cout << item.first << " " << maxS << endl;
            break;
        }
    }

    for(auto it = mS.rbegin(); it != mS.rend(); it++){
        if(minS == (*it).second){
            cout << (*it).first << " " << minS << endl;
            break;
        }
    }

    cout << mS.size();
    return 0;
}