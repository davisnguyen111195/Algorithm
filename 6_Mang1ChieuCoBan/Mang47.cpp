// [Mảng 1 chiều cơ bản]. Bài 47. Dãy nguyên tố dài nhất
// Cho mảng A[] gồm N phần tử, bạn hãy tìm dãy con liên tiếp đều là số nguyên tố dài nhất. Nếu có nhiều dãy con có cùng độ dài thì in ra dãy con có tổng lớn nhất, và nếu có nhiều dãy con có cùng độ dài lớn nhất và có cùng tổng thì lấy dãy con đầu tiên. Trong trường hợp không tồn tại dãy con liên tiếp đều là số nguyên tố thì in ra NOT FOUND.

// Gợi ý : - Bước 1. Sàng số nguyên tố để kiểm tra nhanh hơn

// Bước 2. Duyệt qua mảng và dùng biến đếm, nếu a[i] là số nguyên tố => tăng đếm còn ko thì cập nhật đếm xem có lớn hơn kỷ lục đang có hay ko, nếu lớn hơn thì cập nhật, còn nếu chỉ bằng kỉ lục thì so sánh thêm tổng của dãy con. Reset biến đếm và tổng về 0 để xét lại dãy mới.
// Input Format

// Dòng 1 là : số lượng phần tử trong mảng

// Dòng 2 là N số trong mảng cách nhau 1 dấu cách

// Constraints

// 1<=N<=10^6

// 0<=A[i]<=10^6

// Output Format

// Dòng 1 in độ dài dãy con

// Dòng 2 in dãy con thỏa mãn

// Sample Input 0

// 10
// 3 1 1 11 7 13 5 0 10 5 
// Sample Output 0

// 4
// 11 7 13 5 
//BuoiTraGiang 5, 1:25:56

#include <iostream>
using namespace std;
void sang(bool isPrime[1000007]){
    for(int i = 0; i < 1000007; i++){
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i*i < 1000007; i++){
        if(isPrime[i] == true){
            for(int j = i*i; j < 1000007; j += i){
                isPrime[j] = false;
            }
        }
    }
}
int main(){
    bool isPrime[1000007];
    sang(isPrime);

    int n; cin >> n; int a[n];

    int cur_len = 0, max_len = 0;
    int cur_sum = 0, sum_max_len = 0;
    int st;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(isPrime[a[i]]){
            cur_sum += a[i];
            cur_len++;
        } else {
            cur_sum = 0;
            cur_len = 0;
        }
        if((cur_len > max_len) || (cur_len == max_len && cur_sum > sum_max_len)){
            max_len = cur_len;
            sum_max_len = cur_sum;
            st = i - max_len + 1;
        }
    }
    if(max_len <= 0){
        cout << "NOT FOUND";
    } else {
        cout << max_len << endl;
        for(int i = st; i < max_len+st; i++){
            cout << a[i] << " ";
        }
    }
    
    
    return 0;
}