#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> vts;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        switch (x){
            case 1:
                int z; cin >> z;
                vts.push_back(z);
                break;
            case 2:
                if(!vts.empty()){
                    vts.pop_back();
                }
                break;
            default:
                break;
        }
    }
    if(!vts.empty()){
        for(int vt : vts){
            cout << vt << " ";
        } 
    } else {
        cout << "EMPTY";
    }
    //return 0;
}