#ifndef BALOK_H
#define BALOK_H

#include "BangunRuang.hpp"

class Balok : public BangunRuang {
private:
    double panjang, lebar, tinggi;

public:
    Balok(double _panjang, double _lebar, double _tinggi);
    
    double getArea() const override;
    double getVolume() const override;
};

#endif // BALOK_H