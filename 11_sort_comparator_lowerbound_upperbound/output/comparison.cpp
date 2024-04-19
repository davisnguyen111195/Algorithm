#include <bits/stdc++.h>

using namespace std;

using ll = long long;
bool cmp(int a, int b){
    if(a < b){
        return true;
    } else {
        return false;
    }
}
int main(){
    int a[8] = {-1, 3, -10, 8, 2, 9, -5, 7};
    sort(a, a+8, cmp);
    for(int x : a){
        cout << x << " ";
    }
}