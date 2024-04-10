#include <bits/stdc++.h>


using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> v;
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(2);
    // cout << v.size() << endl;
    // v.pop_back();
    // cout << v.size() << endl;
    // for(int x : v){
    //     cout << x << " ";
    // }
    v = {3, 1, 2, 5, 7, 6};
    vector<int>::iterator it = v.begin();
    vector<int>::iterator it2 = v.end();
    cout << *it << endl;
    cout << *it2 << endl;
    return 0;
}