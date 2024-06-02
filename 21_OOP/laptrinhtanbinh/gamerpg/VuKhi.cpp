#include "VuKhi.h"

using namespace std;

VuKhi::VuKhi(): m_ten("Kiem Go"), m_dmg(10){

}

VuKhi::VuKhi(string ten, int dmg): m_ten(ten), m_dmg(dmg){

}

void VuKhi::thayDoi(string ten, int dmg){
    m_ten = ten;
    m_dmg = dmg;
}

void VuKhi::inThongTin() const{
    cout << "Vu Khi: " << m_ten << " (Muc Sat Thuong: " << m_dmg << ")" << endl; 
}

int VuKhi::getDmg() const{
    return m_dmg;
}
