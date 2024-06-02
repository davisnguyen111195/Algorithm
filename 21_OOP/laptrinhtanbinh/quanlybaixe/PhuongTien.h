#ifndef DEF_PHUONGTIEN
#define DEF_PHUONGTIEN
#include <iostream>
#include <string>

class PhuongTien{
public:
    PhuongTien(int giaTri);
    virtual void HienThi() const;
    virtual int soBanhXe() const;
    virtual ~PhuongTien();
private:
    int m_giaTri;
};


#endif