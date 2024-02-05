#include "BangunRuang.hpp"

BangunRuang::BangunRuang(std::string _nama, int _jumlahSisi, int _jumlahRusuk)
    : nama(_nama), jumlahSisi(_jumlahSisi), jumlahRusuk(_jumlahRusuk) {}

std::string BangunRuang::getNama() const {
    return nama;
}

int BangunRuang::getJumlahSisi() const {
    return jumlahSisi;
}

int BangunRuang::getJumlahRusuk() const {
    return jumlahRusuk;
}
