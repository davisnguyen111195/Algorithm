// [Mảng 1 chiều cơ bản]. Bài 45. Dãy con nguyên tố
// Cho mảng A[] gồm N phần tử, bạn hãy đếm số lượng dãy con liên tiếp của A[] có tổng các phần tử là số nguyên tố. 2 dãy con [l, r] và [l1, r1] được coi là khác nhau nếu l != l1 hoặc r != r1.

// Input Format

// Dòng 1 là N : số phần tử trong mảngg

// Dòng 2 là N phần tử cách nhau 1 khoảng trắng

// Constraints

// 1<=N<=1000

// 0<=A[i]<=1000
// Output Format

// In ra số lượng dãy con thỏa mãn

// Sample Input 0

// 5
// 9 2 3 5 4 
// Sample Output 0

// 7
// Explanation 0

// Các dãy con thỏa mãn : {2}, {3}, {5}, {2, 3}, {9, 2}, {9, 2, 3, 5, 4}, {9, 2, 3, 5}


#include <iostream>

using namespace std;

void genPrimes(bool isPrime[1007]){
        for(int i = 0; i < 1007; i++){
            isPrime[i] = true;
        }    

        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i*i < 1007; i++){
            if(isPrime[i] == true){
                for(int j = i*i; j < 1007; j+=i){
                    isPrime[j] = false;
                }
            }

        }
    }

int main(){

    bool isPrime[1007];
    
    genPrimes(isPrime);
    int n; cin >> n; 
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int counter = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j <= n-1; j++){
            sum += a[j];
            if(isPrime[sum] == true){
                counter++;
        }
        }
        
    }

    cout << counter << endl;
    return 0;
}