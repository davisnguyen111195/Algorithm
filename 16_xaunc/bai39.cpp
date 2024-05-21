// [Xâu Ký Tự]. Bài 39. Số chia hết cho 11
// Kiểm tra xem một số nguyên không âm N có chia hết cho 11 hay không? Để kiểm tra 1 số có chia hết cho 11 hay không bạn chỉ cần tính tổng các chữ số ở vị trí chẵn, tổng các chữ số ở vị trí lẻ và lấy độ chênh lệch của 2 tổng này chia cho 11, nếu độ chênh lệch này chia hết thì số ban đầu chia hết cho 11. Ví dụ : số N = 8580 có tổng các số ở vị trí chẵn là 5, tổng các số ở vị trí lẻ là 16, độ chênh lệch giữa 2 tổng này là 11 vì thế số 8580 chia hết cho 11.

// Đầu vào
// Số nguyên không âm N.

// Giới hạn
// N có không quá 1000 chữ số.

// Đầu ra
// In ra YES nếu N chia hết cho 1, ngược lại in ra NO.

// Ví dụ :
// Input 01
// Copy
// 121
// Output 01
// Copy
// YES
#include <bits/stdc++.h>

using namespace std;

int chiaDu(string s, int k){
    int mod = 0;
    for(int i = 0; i < s.size(); i++){
        mod = (mod * 10 + s[i]-'0') % k;
    }

    return mod;
}

int main(){
    string s;
    cin >> s;
    int mod = chiaDu(s, 11);
    if(mod == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}