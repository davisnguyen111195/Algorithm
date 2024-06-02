#ifndef DEF_NHANVAT
#define DEF_NHANVAT
#include <iostream>
#include <string>
#include "VuKhi.h"

class NhanVat{
public:
    NhanVat();
    ~NhanVat();
    NhanVat(std::string vuKhi, int dmg);
    NhanVat(NhanVat const& nhanVatKhac);
    void nhanSatThuong(int soDmg);
    void tanCong(NhanVat &mucTieu);
    void uongThuocHP(int dungLuongThuoc);
    void doiVuKhi(std::string vuKhiMoi, int dmgVuKhiMoi);
    bool conSong() const;
    void inTrangThai() const;
private:
    int m_hp;
    int m_mp;
    VuKhi *m_vuKhi;    
};

#endif