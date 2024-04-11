// [Vector]. Bài 12. Lật ngược vector
// Bạn hãy tự code hàm lật ngược 1 vector theo khuôn mẫu hàm main như sau :

// void rev(vector<int> &v){
    
// }

// int main(){
//     vector<int> v;
//     nhap(v);
//     rev(v);
//     in(v);
// }
// Input Format

// Dòng 1 là N : số lượng phần tử trong vector

// Dòng 2 là N số trong vector

// Constraints

// 1<=N<=1000

// Các số trong vector là số nguyên int

// Output Format

// In ra vector sau khi lật ngược
// Sample Input 0

// 15
// 16 7 1 8 14 5 6 17 11 17 12 6 5 2 14 
// Sample Output 0

// 14 2 5 6 12 17 11 17 6 5 14 8 1 7 16 


#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void rev(vector<int> &v);
void swap(int* a, int* b);
void swap2(int& a, int& b);
int main(){

    #ifndef DA
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    vector<int> vts;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        vts.push_back(x);
    }

    rev(vts);

    for(auto item : vts){
        cout << item << " ";
    }
    return 0;
}


void rev(vector<int> &v){
    int n = (int)v.size();    
    for(int i = 0; i < n; i++){
        int j = n-i-1;
        if(i <= j){
            swap(v[i], v[j]);
        }
    }

}

void swap(int* a, int* b){

    int tmp = *a;
    *a = *b;
    *b = tmp;

}

void swap2(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}