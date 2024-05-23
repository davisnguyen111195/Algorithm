// [Xâu Ký Tự]. Bài 59. Equal string
// 28Tech rất thích số 28, anh ta cho bạn 1 xâu ký tự S gồm các kí tự là chữ số 2 và 8, bạn hãy giúp anh ấy tìm ra độ dài lớn nhất của xâu con liên tiếp của S mà chứa số lượng chữ số 2 và 8 bằng nhau.

// Xâu S bao gồm các số 0 và 1, số 0 đại diện cho ký tự 2 và 1 đại diện cho ký tự 8

// Đầu vào
// • Dòng duy nhất chứa xâu ký tự S

// Giới hạn
// • 1<=len(S)<=10^6

// Đầu ra
// In ra đáp án của bài toán

// Ví dụ :
// Input 01
// Copy
// 111001010
// Output 01
// Copy
// 8

#include <bits/stdc++.h>

using namespace std;
int d[2];

int main(){
    string s;
    cin >> s;
    int ans = 0;
    map<int, int> mp;
    mp[0] = -1;
    for(int i = 0; i < s.size(); i++){
        d[s[i]-'0']++;
        int tmp = d[0] - d[1];
        if(mp.count(tmp)){
            ans = max(ans, i-mp[tmp]);
        } else {
            mp[tmp] = i;
        }
    }
    cout << ans;
    return 0;
}