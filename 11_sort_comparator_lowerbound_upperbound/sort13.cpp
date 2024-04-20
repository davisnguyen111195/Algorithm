// [Comparator_Binary Search]. Bài 3. Lower_bound, Upper_bound
// Cho mảng A[] gồm N phần tử ĐÃ SẮP XẾP TĂNG DẦN và số nguyên X, nhiệm vụ của bạn là :

// In ra chỉ số đầu tiên của phần tử >= X trong mảng, nếu không có phần tử nào >=X thì in ra -1.
// In ra chỉ số đầu tiên của phần tử > X trong mảng, nếu không có phần tử nào > X thì in ra - 1.
// In ra chỉ số đầu tiên của phần tử X trong mảng, nếu X không tồn tại in ra -1.
// In ra chỉ số cuối cùng của phần tử X trong mảng, nếu X không tồn tại in ra -1.
// Từ kết quả của 3 và 4 in ra số lần xuất hiện của X trong mảng.
// CHÚ Ý : Bạn code với 2 trường hợp, sử dụng mảng và vector, chỉ sử dụng hàm lower_bound và upper_bound

// Input Format

// Dòng 1 là N : số lượng phần tử trong mảng

// Dòng 2 là N số trong mảng

// Constraints

// 1<=N<=10^5

// 0<=A[i]<=10^9

// Output Format

// In ra 5 dòng kết quả của 5 yêu cầu

// Sample Input 0

// 12 8
// 2 3 4 4 5 6 8 8 8 8 10 10 
// Sample Output 0

// 6
// 10
// 6
// 9
// 4

#include <bits/stdc++.h>

using namespace std;


int main(){
    int n; cin >> n;
    vector<int> aX;
    int x; cin >> x;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        aX.push_back(k);
    }  
    //=====1=====
    auto it1 = lower_bound(aX.begin(), aX.end(), x);
    if(it1 == aX.end()){
        cout << -1 << endl;
    } else {
        int indexResult1 = it1 - aX.begin();
        cout << indexResult1 << endl;
    }
    //=-----2----------
    auto it2 = upper_bound(aX.begin(), aX.end(), x);
    if(it2 == aX.end()){
        cout << -1 << endl;
    } else {
        cout << it2 - aX.begin() << endl;
    }
    //======3========
    int cnt = 0;
    vector<int>::iterator it3;
    for(auto i = aX.begin(); i != aX.end(); i++){
        if(*i == x){
            cout << i - aX.begin() << endl;
            it3 = i;
            cnt = 1;
            break;
        }
    }
    if(cnt < 1){
        cout << -1 << endl;
        cout << -1 << endl;
    } else {
        for(auto it = it3; it != aX.end(); it++){
            auto itk = it;
            if(*it == *(++itk)){
                cnt++;
            } else {
                cout << it - aX.begin() << endl;
                break;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}