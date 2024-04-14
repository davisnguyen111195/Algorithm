// [Set Map]. Bài 21. Set và kiểu char
// Cho mảng A[] gồm N phần tử là ký tự, bạn hãy đếm xem có bao nhiêu ký tự khác nhau trong mảng. Gợi ý : Để in theo thứ tự từ điển bạn chỉ cần duyệt set, còn in theo thứ tự ngược các bạn có thể dùng iterator ngược hoặc đưa các phần tử trong set ra vector rồi in từ cuối vector về đầu.

// Input Format

// Dòng 1 là N : số lượng phần tử trong mảng

// Dòng thứ 2 gồm N ký tự trong mảng

// Constraints

// 1<=N<=10^6

// Các ký tự là chữ cái hoặc chữ số

// Output Format

// Dòng 1 in ra số lượng ký tự khác nhau trong mảng

// Dòng 2 in ra các ký tự khác nhau theo thứ tự từ điển tăng dần

// Dòng 3 in ra các ký tự khác nhau theo thứ tự từ điển giảm dần

// Sample Input 0

// 12
// 2 8 h t t 2 h e h e h t 
// Sample Output 0

// 5
// 2 8 e h t 
// t h e 8 2 

#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

int main(){
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    //char a[n];
    map<char, int> mC;
    for(int i = 0; i < n; i++){
        char x; cin >> x;
        //a[i] = x;
        mC[x]++;

    }

    cout << mC.size() << endl;
    for(auto item : mC){
        cout << item.first << " ";
    }
    cout << endl;
    for(auto it = mC.rbegin(); it != mC.rend(); it++){
        cout << (*it).first << " ";
    }
    return 0;
}