#ifndef SILINDER_H
#define SILINDER_H

#include "BangunRuang.hpp"

class Silinder : public BangunRuang {
private:
    double jariJari, tinggi;

public:
    Silinder(double _jariJari, double _tinggi);
    
    double getArea() const override;
    double getVolume() const override;
};

#endif // KUBUS_H