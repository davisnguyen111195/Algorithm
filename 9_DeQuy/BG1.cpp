#include <bits/stdc++.h>

using namespace std;

void A(int n){
    if(n > 0) {
        cout << "@@@@\n";
        A(n-1);
        cout << "end\n";
    } else {
        cout << "Stop\n";
    }
}

void B(int n){
    cout << n << " ";
    B(n - 1);
    cout << "end\n";
}

int main(){
    B(25);
    return 0;
}