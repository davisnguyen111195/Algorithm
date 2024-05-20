// [Xâu Ký Tự]. Bài 25. Số lớn nhất, nhỏ nhất
// Cho số tự nhiên m và số nguyên s không âm. Nhiệm vụ của bạn là tìm số bé nhất và lớn nhất có m chữ số và tổng chữ số bằng s.

// Gợi ý : Số lớn nhất thì các bạn điền tối đa từ đầu tới cuối, còn số nhỏ nhất thì điền tối đa chữ số từ cuối về. Tuy nhiên chữ số nhỏ nhất nếu điền thoải mái thì tới chữ số đầu tiên sẽ không còn 1 đơn vị nào để đảm bảo có m chữ số. Ví dụ s = 19, m = 4, nếu điền tối đa từ cuối sẽ thu được số nhỏ nhất là 0199. Cách xử lý là giảm s đi 1 đơn vị để dành cho vị trí chữ số đầu tiên rồi mới điền tối đa từ cuối về.

// Đầu vào
// Một dòng gồm 2 số m và s

// Giới hạn
// 1 ≤ m ≤ 100

// 0 ≤ s ≤ 900

// Đầu ra
// In ra số bé nhất, lớn nhất có thể đạt được, mỗi số in ra trên 1 dòng. Nếu không có đáp án thì in ra 1 dòng "NOT FOUND".

// Ví dụ :
// Input 01
// Copy
// 4 19
// Output 01
// Copy
// 1099
// 9910

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m, s;
    cin >> m >> s;
    int stemp = s;
    if(m * 9 <= s || m >= 2 && s == 0){
        cout << "NOT FOUND";
        return 0;
    }
    string sS(m, '0');
    for(int i = 0; i < m; i++){
        if(s >= 9){
            sS[i] = '9';
            s -= 9;
        } else {
            sS[i] = s + '0';
            s = 0;
            break;
        }
        
    }

    string sS2(m, '0');
    for(int i = m-1; i >= 0; i--){
        if(stemp > 9){
            sS2[i] = '9';
            stemp -= 9;
        } else {
            if(i == 0){
                sS2[i] = stemp + '0';
            } else {
                sS2[0] = '1';
                sS2[1] = stemp - 1 + '0';
            }
            break;
        }
    }
    
    
    cout << sS2 << endl;
    cout << sS;
    return 0;
}