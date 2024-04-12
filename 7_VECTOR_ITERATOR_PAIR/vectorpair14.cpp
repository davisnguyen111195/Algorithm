// [Vector]. Bài 14. Vector char
// Cho input gồm nhiều dòng, mỗi dòng gồm nhiều ký tự viết cách nhau 1 dấu cách. Bạn hãy tiến hành lưu các ký tự này vào vector, sau đó những ký tự là in hoa thì đổi thành in thường, in thường thì đổi thành in hoa, chữ số thì giữ nguyên và in ra màn hình. Bạn phải triển khai mã nguồn theo khuôn mẫu sau :

// vector<char> nhap(){
    
// }

// vector<char> thaydoi(vector<char>){
    
// }

// void in(vector<char>){
    
// }
// int main(){
//     vector<char> v = nhap();
//     vector<char> res = thaydoi(v);
//     in(res);
// }
// Input Format

// Gồm nhiều dòng, mỗi dòng có nhiều ký tự nhưng không quá 1 triệu kí tự, các ký tự là chữ in hoa in thường hoặc chữ cái.
// Constraints

// N/A

// Output Format

// In ra đáp án của bài toán
// Sample Input 0

// D 
// W D 4 8 
// w u w 
// 2 
// 3 A e 3 
// A u 
// 2 e 
// A W W 
// Sample Output 0

// d w d 4 8 W U W 2 3 a E 3 a U 2 E a w w 


#include <iostream>
#include <vector>

using namespace std;

vector<char> nhap();
vector<char> thaydoi(vector<char> vt);
void in(vector<char> vt);

int main(){
    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    in(res);
    return 0;
}


vector<char> nhap(){
    char x;
    vector<char> vtX;
    while(cin >> x){
        vtX.push_back(x);
    }
    return vtX;
}

vector<char> thaydoi(vector<char> vt){
    vector<char> newVt;
    for(int i = 0; i < (int)vt.size(); i++){
        //in hoa thanh in thuong
        if(vt[i] >= 65 && vt[i] <= 90){
            newVt.push_back(vt[i] + 32);
        } else if(vt[i] >= 97 && vt[i] <= 122){
            newVt.push_back(vt[i] - 32);
        } else if(vt[i] >= 48 && vt[i] <= 57){
            newVt.push_back(vt[i]);
        }
    }
    return newVt;
}

void in(vector<char> vt){
    for(auto item : vt){
        cout << item << " ";
    }
}