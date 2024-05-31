#include <bits/stdc++.h>

using namespace std;

class PhanSo{
private:
    long long m_tu, m_mau;
public:
    PhanSo();
    PhanSo(long long tu, long long mau){
        m_tu = tu;
        m_mau = mau; 
    }

    long long gcd(long long a, long long b){
        if(b == 0){
            return a;
        }

        return gcd(b, a%b);
    }
    void toiGian(){
        long long gcdT = gcd(m_tu, m_mau);
        m_tu = m_tu / gcdT;
        m_mau = m_mau / gcdT;
    }

    void showInfor(){
        cout << m_tu << "/" << m_mau << endl;
    }
};

int main(){
    int a, b;
    cin >> a >> b;
    PhanSo m(a, b);
    m.toiGian();
    m.showInfor();
    return 0;
}