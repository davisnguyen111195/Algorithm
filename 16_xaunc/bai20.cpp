// [Xâu Ký Tự]. Bài 20. Xâu Python
// Trong giờ học ngôn ngữ lập trình Python, thầy giáo có đưa ra một bài toán cho Tèo, bài toán như sau "Cho một xâu kí tự S, Tèo hãy xác định xem liệu rằng có thể xóa đi bất kì một kí tự nào trong xâu S ở một vị trí bất kì và xâu S trở thành từ "python" được hay không? Biết rằng Tèo có thể xóa bất kì một kí tự nào nhưng không thể hoán đổi vị trí các kí tự trong xâu S ban đầu". Hiện nay vì Tèo đang bận gói bánh chưng phụ thầy mẹ nên nhờ bạn giải giúp. Hy vọng bạn có thể giúp được Tèo !!!

// Đầu vào
// Một xâu kí tự S chỉ bao gồm các kí tự in hoa hoặc in thường.

// Giới hạn
// Xâu S có độ dài không quá 1000 kí tự.

// Đầu ra
// In ra YES nếu có thể tạo ra xâu "python" bằng cách xóa đi các kí tự trong xâu, ngược lại in NO

// Ví dụ :
// Input 01
// Copy
// py2j228techtechttthnnnon
// Output 01
// Copy
// YES

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    map<char, int> mS;
    string b;
    char python[] = {'p', 'y', 't', 'h', 'o', 'n'};
    string py = "python";
    int k = 0;
    for(int i = 0; i < 6; i++){
        for(int j = k; j < s.size(); j++){
            if(py[i] == s[j]){
                k = j;
                b.push_back(py[i]);
                break;
            }
        }
    }

    bool checker = (b == py) ? true : false;
    if(checker){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
