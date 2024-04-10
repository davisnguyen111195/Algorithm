// [Mảng 1 chiều cơ bản]. Bài 48. Dãy con tăng liên tiếp dài nhất
// Cho mảng A[] gồm N phần tử nhiệm vụ của bạn là hãy liệt kê những dãy con liên tiếp tăng chặt dài nhất.

// Gợi ý : So sánh a[i] và a[i - 1], nếu a[i] > a[i - 1] thì cập nhật độ dài dãy con hiện tại, ngược lại thì bạn so sánh độ dài dãy con kết thúc tại a[i - 1] so với kỷ lục đang có và cập nhật kết quả. Nếu độ dài dãy con đang có tốt hơn kỷ lục thì ghi nhận 1 dãy con, trường hợp độ dài dãy con hiện tại chỉ bằng dãy con kỷ lục thì tăng thêm 1 dãy con nữa. Nên dùng 1 mảng để lưu chỉ số bắt đầu của các dãy con thỏa mãn.

// Input Format

// Dòng 1 là T : số bộ test

// Mỗi bộ test gồm 2 dòng

// Dòng 1 là N : số phần tử trong mảng

// Dòng 2 là N số trong mảng

// Constraints

// 1<=T<=100

// 1<=N<=1000

// 0<=A[i]<=1000

// Output Format

// Đối với mỗi bộ test dòng 1 in ra độ dài dãy con tăng chặt dài nhất, các dòng tiếp theo liệt kê các dãy con thỏa mãn trên từng dòng. Ngoài ra bạn cần ghi thêm số thứ tự bộ test. Xem test mẫu để rõ hơn yêu cầu.
// Sample Input 0

// 5
// 10
// 39 48 41 18 12 35 10 29 29 45 
// 10
// 19 37 14 24 49 45 36 25 38 16 
// 10
// 40 28 1 29 11 1 36 32 33 26 
// 10
// 13 32 1 18 49 7 48 1 17 32 
// 10
// 45 27 27 19 15 10 6 1 0 0 
// Sample Output 0

// Test #1 :
// 2
// 39 48 
// 12 35 
// 10 29 
// 29 45 
// Test #2 :
// 3
// 14 24 49 
// Test #3 :
// 2
// 1 29 
// 1 36 
// 32 33 
// Test #4 :
// 3
// 1 18 49 
// 1 17 32 
// Test #5 :
// 1
// 45 
// 27 
// 27 
// 19 
// 15 
// 10 
// 6 
// 1 
// 0 
// 0 



#include <iostream>

using namespace std;

int main(){

    int testCase; cin >> testCase;
    for(int k = 1; k <= testCase; k++){
        
        int n; cin >> n; int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int b[n] = {0};
        int maxTang = -1;
        for(int i = 0; i <= n-1; i++){
            if(a[i] < a[i+1]){
                b[i+1] = b[i] + 1;
            }
            maxTang = max(maxTang, b[i]);
        }
        cout << "Test #" << k << " :" << endl;
        cout << maxTang + 1 << endl;
        for(int i = 0; i < n; i++){
            if(b[i] == maxTang){
                for(int j = i - maxTang; j <= i; j++){
                    cout << a[j] << " ";
                    
                }
                cout << endl;
            } else {
                continue;
            }
            
        }

    }
    

    return 0;
}