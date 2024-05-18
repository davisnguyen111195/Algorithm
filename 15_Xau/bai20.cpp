#include <bits/stdc++.h>

using namespace std;
bool checkTN(string s){
    string b = s; 
    int j = 0;
    for(int i = s.size()-1; i >= 0; i--){
        b[j] = s[i];
        j++;
    }
    return b == s;
}
int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    multimap<string, int> mX;
    while(ss >> word){
        if(checkTN(word)){
            mX.insert({word, 0});
        }
    }

    for(auto item: mX){
        cout << item.first << " ";
    }
    return 0;
}
