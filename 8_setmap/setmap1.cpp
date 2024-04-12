// Cho dãy số A[] gồm có N phần tử, bạn hãy đếm xem trong mảng có bao nhiêu phần tử phân biệt? Chú ý giải bài này với 3 cách : Sử dụng set, map, sắp xếp.

// Nếu dùng set hoặc map bạn chỉ cần đưa các phần tử vào set hoặc đưa phần tử vào làm key trong map thì nó sẽ tự loại bỏ trùng, khi đó size của set và map sẽ là số lượng phần tử khác nhau trong mảng A[] ban đầu. 3 cách dùng set, map, sort đều có độ phức tạp là O(NlogN) nên bạn dùng cách nào cũng được

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 10^5; -10^9 ≤ A[i] ≤ 10^9

// Output Format

// In ra số lượng phần tử khác nhau trong mảng.

// Sample Input 0

// 5
// 2 1 2 1 3
// Sample Output 0

// 3
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
    }

    sort(a, a + n);
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]){
            cnt++;
        }
    }  

    cout << cnt;
    return 0;
}




// // dung map
// int main(){
//     map<int, int> mX;
//     int n; cin >> n; 
//     for(int i = 0; i < n; i++){
//         int x; cin >> x;
//         mX[x]++;

//     }
//     int sum  = 0;
//     for(auto item : mX){
//         sum++;
//     }

//     cout << sum;

//     return 0;
// }



// //Dung set
// int main(){
//     int n; cin >> n; 
//     set<int> sX;
//     for(int i = 0; i < n; i++){
//         int x; cin >> x;
//         sX.insert(x);
//     }

//     cout << sX.size();

//     return 0;
// }