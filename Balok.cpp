#include "Balok.hpp"

Balok::Balok(double _panjang, double _lebar, double _tinggi)
    : BangunRuang("Balok", 6, 12), panjang(_panjang), lebar(_lebar), tinggi(_tinggi) {
    // Inisialisasi panjang, lebar, dan tinggi pada balok
}

double Balok::getArea() const {
    return 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
}

double Balok::getVolume() const {
    return panjang * lebar * tinggi;
}