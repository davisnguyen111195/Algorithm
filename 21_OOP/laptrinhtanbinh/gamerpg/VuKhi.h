#ifndef DEF_VUKHI
#define DEF_VUKHI
#include <iostream>
#include <string>

class VuKhi{

public:
    VuKhi();
    VuKhi(std::string ten, int dmg);
    void thayDoi(std::string ten, int dmg);
    void inThongTin() const;
    int getDmg() const;
private:
    std::string m_ten;
    int m_dmg;
};

#endif