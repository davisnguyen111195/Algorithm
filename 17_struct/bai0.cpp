#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct SinhVien{
    string ma;
    string ten;
    double gpa;
};

int main(){
    // SinhVien s;
    // s.ma = "123";
    // s.ten = "Nguyen Van A";
    // s.gpa = 3.5;
    // cout << s.ma << " " << s.ten << " " << s.gpa << endl;
    // SinhVien t = s;
    // cout << t.ma << " " << t.ten << " " << t.gpa << endl;

    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].ma);
        getline(cin, a[i].ten);
        cin >> a[i].gpa;
    }

    for(int i = 0; i < n; i++){
        cout << a[i].ma << " " << a[i].ten << " " << a[i].gpa << endl;
    }

    return 0;
}