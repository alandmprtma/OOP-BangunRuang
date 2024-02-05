#ifndef BANGUNRUANG_H
#define BANGUNRUANG_H

#include <string>

class BangunRuang {
protected:
    std::string nama;
    int jumlahSisi;
    int jumlahRusuk;

public:
    BangunRuang(std::string _nama, int _jumlahSisi, int _jumlahRusuk);
    
    std::string getNama() const;
    int getJumlahSisi() const;
    int getJumlahRusuk() const;
    
    virtual double getArea() const = 0;
    virtual double getVolume() const = 0;
};

#endif // BANGUNRUANG_H
