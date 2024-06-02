#include "NhanVat.h"
#include "VuKhi.h"
using namespace std;

NhanVat::NhanVat(): m_hp(100), m_mp(100), m_vuKhi(0){
    m_vuKhi = new VuKhi();
}

NhanVat::NhanVat(string vuKhi, int dmg): m_hp(100), m_mp(100), m_vuKhi(vuKhi, dmg){
    m_vuKhi = new VuKhi(vuKhi, dmg);
}

NhanVat::~NhanVat(){
    delete m_vuKhi;
}

NhanVat::NhanVat(NhanVat const& nhanVatKhac) : m_hp(nhanVatKhac.m_hp), 
                                               m_mp(nhanVatKhac.m_mp), 
                                               m_vuKhi(0){

    m_vuKhi = new VuKhi(*(nhanVatKhac.m_vuKhi));
}

NhanVat &NhanVat::operator=(NhanVat const& nhanVatKhac){
    if(this != &nhanVatKhac){
        m_hp = nhanVatKhac.m_hp;
        m_mp = nhanVatKhac.m_mp;
        delete m_vuKhi;
        m_vuKhi = new VuKhi(*(nhanVatKhac.m_vuKhi));
    }
    return *this;
}

void NhanVat::nhanSatThuong(int soDmg){
    m_hp -= soDmg;

    if(m_hp < 0){
        m_hp = 0;
    }
}

void NhanVat::tanCong(NhanVat &mucTieu){
    mucTieu.nhanSatThuong(m_vuKhi->getDmg());
}

void NhanVat::uongThuocHP(int dungLuongThuoc){
    m_hp += dungLuongThuoc;
    if(m_mp > 100){
        m_hp = 100;
    }
}

void NhanVat::doiVuKhi(string vuKhiMoi, int dmgVuKhiMoi){
    m_vuKhi.thayDoi(vuKhiMoi, dmgVuKhiMoi);
}

bool NhanVat::conSong() const{
    return m_hp > 0;
}

void NhanVat::inTrangThai() const{
    cout << "HP: " << m_hp << endl;
    cout << "MP: " << m_mp << endl;
    m_vuKhi.inThongTin();
}
