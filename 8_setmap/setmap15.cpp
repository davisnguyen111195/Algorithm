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
    #ifndef O
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    multiset<int> msX;
    multimap<int, int> mX;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        msX.insert(x);
        mX.insert({x, i});
        a.push_back(x);
    }

    int t; cin >> t;
    while(t--){
        int ac; cin >> ac;
        if(ac == 1){
            int x; cin >> x;
            msX.insert(x);
            mX.insert({x, n++});
            a.push_back(x);
        } else if(ac == 2){
            int k; cin >> k;
            auto it = msX.find(k);
            auto itMap = mX.find(k);
            if(it != msX.end()){
                msX.erase(it);
                mX.erase(itMap);
            }
        } else if(ac == 4){
            int p; cin >> p;
            if(msX.count(p)){
                cout << p << endl;
                continue;;
            } else {
                if(p < *(msX.begin())){
                    cout << -1 << endl;
                    continue;;
                } else {
                    for(auto it = msX.rbegin(); it != msX.rend(); it++){
                        if(p > *it){
                            cout << *it << endl;
                            break;
                        }
                    }
                }
            }
        } else if(ac == 3){
            int l; cin >> l;
            auto itThree = lower_bound(msX.begin(), msX.end(), l);
            if(itThree != msX.end()){
                cout << *itThree << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            continue;
        }
        
    }
    return 0;
}