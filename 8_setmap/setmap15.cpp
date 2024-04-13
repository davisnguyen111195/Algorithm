// [Set Map]. Bài 15. Set vs Lower_bound, Upper_bound
// Cho 1 mảng A[] gồm N số nguyên, 28tech cung cấp cho bạn các thao tác sau :

// 1 x : Thêm phần tử x vào mảng A[]

// 2 x : Xóa phần tử x khỏi mảng A[] nếu x tồn tại trong mảng, và nếu x xuất hiện nhiều lần bạn chỉ xóa đi 1 phần tử duy nhất.

// 3 x : Chỉ ra giá trị đầu tiên của phần tử >= x trong A[] khi mảng A[] được sắp xếp tăng dần, nếu không tồn tại in ra -1

// 4 x : In ra giá trị của phần từ lớn nhất <= x trong mảng A[], nếu không tồn tại phần tử này thì in ra -1.

// Input Format

// Dòng 1 là N

// Dòng 2 là N phần tử A[i]

// Dòng 3 là số lượng thao tác T

// T dòng tiếp theo mô tả thao tác.

// Constraints

// 1<=N<=1000

// 1<=A[i],X<=1000;

// 1 <= T <= 1000

// Output Format

// Đối với thao tác 3 và 4, in ra kết quả tương ứng

// Sample Input 0

// 9
// 6 4 9 3 8 6 8 1 6 
// 9
// 4 3
// 4 6
// 3 6
// 3 4
// 1 6
// 2 6
// 2 7
// 4 4
// 1 4
// Sample Output 0

// 3
// 6
// 6
// 4
// 4


#include <iostream>
#include <stdio.h>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    multiset<int> msX;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        msX.insert(x);
    }

    int t; cin >> t;
    while(t--){
        int ac; cin >> ac;
        switch(ac){
            case 1:
                int x; cin >> x;
                msX.insert(x);
                break;
            case 2:
                int k; cin >> k;
                auto it = msX.find(k);
                if(it != msX.end()){
                    msX.erase(it);
                }
                break;
            case 3:
                int l; cin >> l;
                auto itThree = msX.lower_bound(msX.begin(), msX.end(), l);
                if(itThree != msX.end()){
                    cout << *itThree << endl;
                } else {
                    cout << -1 << endl;
                }
                
                break;
            case 4:
                int p; cin >> p;
                auto itFour = msX.upper_bound(msx.begin())

        }
    }
    return 0;
}