#include <iostream>
#include "NhanVat.h"
using namespace std;

int main(){
    NhanVat david;
    NhanVat goliath("Kiem sat", 20);

    goliath.tanCong(david);
    david.uongThuocHP(20);
    goliath.tanCong(david);
    david.tanCong(goliath);
    goliath.doiVuKhi("Riu cua tu than", 40);
    goliath.tanCong(david);

    cout << "David" << endl;
    david.inTrangThai();
    cout << endl;
    cout << "Goliath" << endl;
    goliath.inTrangThai();
    return 0;

}