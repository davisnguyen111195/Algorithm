// [Hàm bổ sung]. Bài 3. Phân tích thừa số nguyên tố
// Cho số nguyên dương N, bạn hãy phân tích thừa số nguyên tố theo các cách sau.

// Cách 1 : Chỉ in ra các thừa số nguyên tố khác nhau của N mỗi thừa số 1 lần

// Cách 2 : In ra các thừa số nguyên tố kèm theo số mũ

// Cách 3 : In ra các thừa số nguyên tố

// Input Format

// Dòng duy nhất chứa số nguyên dương N
// Constraints

// 2<=N<=10^6

// Output Format

// In ra 3 dòng theo yêu cầu

// Sample Input 0

// 120
// Sample Output 0

// 2 3 5
// (2, 3) (3, 1) (5, 1)
// 2 x 2 x 2 x 3 x 5

#include <iostream>
#include <cmath>
#include <map>

#define ll long long

using namespace std;



int main() {
    int n; cin >> n;
    int tmp = n;
    map<int, int> mapNT;
    for(int i = 2; i*i <= n; i++){
        int counter = 0;
        if(n % i == 0){
            while(n% i == 0){
                counter++;
                n /= i;
            }
            mapNT[i] = counter;
        }
    }
    if(n > 1){
        mapNT[n] = 1;
    }

    map<int, int>::iterator it = mapNT.begin();
    while(it != mapNT.end()){
        cout << it->first << " ";
        it++;
    }
    cout << "\n";
    it = mapNT.begin();
    while(it != mapNT.end()){
        cout <<"("<< it->first << ", " << it->second << ")" << " ";
        it++;
    }
    cout << "\n";

    for(int j = 2; j*j <= tmp; j++){
        int cnt = 0;
        if(tmp % j == 0) {
            while(tmp % j == 0){
                cout << j;
                
                tmp /= j;
                if(tmp > 1){
                    cout << " x ";
                }
            }

            
        }
       
    }
    if(tmp > 1){
        cout << tmp;
    }

    return 0;
}