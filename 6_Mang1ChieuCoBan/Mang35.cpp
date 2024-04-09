// [Mảng 1 chiều cơ bản]. Bài 35. Cộng trừ
// Cho mảng A[] gồm N phần tử là các số nguyên, bạn hãy thực hiện phép tính cộng hoặc trừ N số nguyên này theo hướng dẫn. Bạn được cấp 1 mảng B[] gồm N - 1 phần tử đại diện cho N - 1 phép toán giữa N phần tử ban đầu trong mảng, trong đó 1 tương ứng với phép cộng và 2 tương ứng với phép trừ. Ví dụ A[] = {1, 2, 3, 4, 5} và B[] = {1, 1, 2, 1} ta sẽ tính giá trị của mảng A[] = 1 + 2 + 3 - 4 + 5

// Input Format

// Dòng 1 gồm N

// Dòng 2 gồm N số của mảng A[]

// Dòng 3 gồm N - 1 phần tử của mảng B[]

// Constraints

// 1<=N<=1000

// 0<=A[i]<=100

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 7
// 2 1 4 4 1 2 1 
// 2 2 2 1 2 1 
// Sample Output 0

// -7
#include <iostream>

using namespace std;


int main(){
    int n; cin >> n; int a[n]; 
    int m = n - 1;
    int b[m];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){    
        cin >> b[i];
    }
    int sum = a[0];
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        switch (b[cnt]) {
            case 1:
                sum += a[i+1];
                b[cnt] = 0;
                break;
            case 2:
                sum -= a[i+1];
                b[cnt] = 0;
                break;
            case 0:
                break;
        }
        if(cnt <= m)
            cnt++;
    }  
    cout << sum;

    return 0;
}