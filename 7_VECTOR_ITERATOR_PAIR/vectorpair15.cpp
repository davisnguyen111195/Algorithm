// [Vector]. Bài 15. Xoá liền kề

// Cho vector gồm N số, bạn hãy viết 1 hàm trả về 1 vector có được từ vector đầu vào bằng cách xóa đi các phần tử đứng cạnh mà giống nhau. Lưu ý sau khi xóa 1 phần tử trong vector thì phần tử đứng trước và đứng sau phần tử vừa xóa lại được coi là đứng cạnh nhau. Ví dụ vector = {1, 1, 1, 2, 2, 3, 4, 4, 4, 5} sẽ có kết quả là {1, 2, 3, 4, 5}. Bạn phải cài đặt chương trình theo khuôn mẫu sau :

// vector<int> unique_vector(vector<int> v){

// }

// vector<int> nhap(){

// }

// void in(vector<int> v){

// }

// int main(){
//     vector<int> v = nhap();
//     vector<int> res = unique_vector(v);
//     in(res);
// }
// Input Format

// Dòng 1 là N : số lượng phần tử trong vector

// Dòng 2 là N số trong vector

// Constraints

// 1<=N<=1000

// Các phần tử trong vector là số int

// Output Format

// In ra đáp án của bài toán
// Sample Input 0

// 15
// 1 1 4 4 2 4 2 1 3 4 2 3 3 2 3 
// Sample Output 0

// 1 4 2 4 2 1 3 4 2 3 2 3 


#include <iostream>
#include <vector>

using namespace std;

vector<int> unique_vector(vector<int> v);
vector<int> nhap();
void in(vector<int> v);



int main(){
    vector<int> vt = nhap();
    vector<int> res = unique_vector(vt);

    in(res);
    return 0;
}

vector<int> nhap(){
    int n; cin >> n;
    vector<int> vt;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        vt.push_back(x);
    }

    return vt;
}


vector<int> unique_vector(vector<int> v){
    for(int i = 0; i < (int)v.size(); i++){
        for(int j = i; j < (int)v.size(); j++){
            if(i != j && v[i] == v[j]){
                v[j] = -1;
            } 
            if(v[j+1] != v[i]){
                break;
            }
        }
    }

    vector<int> newVT;
    for(int i = 0; i < (int)v.size(); i++){
        if(v[i] != -1){
            newVT.push_back(v[i]);
        }
    }
    return newVT;
}


void in(vector<int> v){
    for(auto item : v){
        cout << item << " ";
    }
}