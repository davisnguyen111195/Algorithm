#include <bits/stdc++.h>

using namespace std;

int main(){
    // #ifndef ON
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int a[8] = {3, 1, 2, 1, 3, 2, 0, 1};
    set<int> se;
    for(int x : a){
        se.insert(x);
    }

    cout << se.size() << endl;
    return 0;

}