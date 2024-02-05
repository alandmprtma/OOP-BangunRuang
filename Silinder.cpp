#include "Silinder.hpp"

Silinder::Silinder(double _jariJari, double _tinggi)
    : BangunRuang("Silinder", 3, 3), jariJari(_jariJari), tinggi(_tinggi) {
    // Inisialisasi jari-jari dan tinggi pada silinder
}

double Silinder::getArea() const {
    return 2 * 3.14 * jariJari * (jariJari + tinggi);
}

double Silinder::getVolume() const {
    return 3.14 * jariJari * jariJari * tinggi;
}