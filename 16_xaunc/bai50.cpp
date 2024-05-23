// [Xâu Ký Tự]. Bài 50. Tích giai thừa các chữ số
// Axe chơi một trò chơi với Lina. Họ định nghĩa hàm F(x) với số x nguyên dương là tích giai thừa các chữ số của x.

// Ví dụ : F(135) = 1! * 3! * 5! = 720. Đầu tiên, họ chọn một số a có n chữ số và có ít nhất một chữ số lớn hơn 1, có thể có chữ số không ở đầu.

// Sau đó họ tìm một số nguyên dương x lớn nhất thỏa mãn:

// X không chứa chữ số 0 hoặc 1

// F(x) = F(a) Hãy giúp Axe và Lina tìm ra được số đó.

// Gợi ý : Cố gắng biến đổi các chữ số của a thành số có nhiều chữ số hơn, ví dụ 4! = 4 * 3! = 2! * 2! * 3! => Thay chữ số 4 thành 223. Tương tự bạn phải tìm các chữ số còn lại

// Đầu vào
// Dòng duy nhất chưa số a có n chữ số.

// Giới hạn
// 1<=n<=1000.

// Đầu ra
// In ra số X tìm được

// Ví dụ :
// Input 01
// Copy
// 1234
// Output 01
// Copy
// 33222

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string result;
    for(char x: s){
        switch(x){
            case '4':
                result += "322";
                break;
            case '6':
                result += "53";
                break;
            case '8':
                result += "7222";
                break;
            case '9':
                result += "7332";
                break;
            default:
                if(x != '1' && x != '0'){
                    result += x;
                }
                break;
                
        }
    }
    sort(result.begin(), result.end(), greater<char>());
    cout << result;
    return 0;
}
