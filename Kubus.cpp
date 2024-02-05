#include "Kubus.hpp"

Kubus::Kubus(double sisi)
    : BangunRuang("Kubus", 6, 12) {
    // Inisialisasi sisi pada kubus
}

double Kubus::getArea() const {
    return 6 * jumlahSisi * jumlahSisi;
}

double Kubus::getVolume() const {
    return jumlahSisi * jumlahSisi * jumlahSisi;
}