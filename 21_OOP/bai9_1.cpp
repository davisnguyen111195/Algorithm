//cong 2 so lon;
#include <bits/stdc++.h>

using namespace std;

string csl(string a, string b){
    a.insert(0, max((int)(b.length() - a.length()), 0), '0');
    b.insert(0, max((int)(a.length() - b.length()), 0), '0');
    int mid = 0;
    int du = 0;
    string res = "";
    for(int i = a.length()-1; i >= 0; i--){
        mid = a[i]-'0' + b[i]-'0' + du;
        res = (char)(mid%10 + '0') + res;
        du = mid / 10;
    }

    if(du > 0){
        res = "1" + res;
    }

    return res;
}

string nsb(string a, int b, int l){
    int du = 0;
    int mid = 0;
    string res;
    for(int i = a.length()-1; i >= 0; i--){
        mid = (a[i]-'0')*b + du;
        res = (char)(mid%10+'0') + res;
        du = mid / 10;
    }

    if(du > 0){
        res = "1" + res;
    }
    res.insert(res.length(), l, '0');
    return res;
}

string nsl(string a, string b){
    string res = "";
    for(int i = b.size()-1; i >= 0; i--){
        string nhan = nsb(a, b[i]-'0', b.size() - 1 - i);
        res = csl(nhan, res);
    }
    return res;
}


int main(){
    string a = "1234345346";
    string b = "345";
    int c = 3;
    cout << csl(a, b) << endl;
    cout << nsb(a, c, 0) << endl;
    cout << nsl(a, b) << endl;
    return 0;
}