#ifndef KUBUS_H
#define KUBUS_H

#include "BangunRuang.hpp"

class Kubus : public BangunRuang {
public:
    Kubus(double sisi);
    
    double getArea() const override;
    double getVolume() const override;
};

#endif // KUBUS_H