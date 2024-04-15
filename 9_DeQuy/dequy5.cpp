#include <iostream>
#define ll long long

using namespace std;

ll s(int n){
    if(n <= 1){
        return 1;
    } else {
        return n * s(n-1);
    }
}

int main(){
    int n; cin >> n;
    cout << s(n);
    return 0;
}