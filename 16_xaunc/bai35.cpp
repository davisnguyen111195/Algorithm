#include <bits/stdc++.h>

using namespace std;

int chiaDu(string s, int k){
    int mod = 0;
    for(int i = 0; i < s.size(); i++){
        mod = (mod * 10 + s[i] - '0') % k;
    }

    return mod;

}

int main(){
    string s;
    cin >> s;
    int modS = chiaDu(s, 6);
    if(modS == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}