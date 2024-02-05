#include <iostream>
#include "Kubus.hpp"
#include "Balok.hpp"
#include "Silinder.hpp"

int main() {
    // Uji Kubus
    Kubus kubus(4.0);
    std::cout << "Nama: " << kubus.getNama() << std::endl;
    std::cout << "Jumlah Sisi: " << kubus.getJumlahSisi() << std::endl;
    std::cout << "Jumlah Rusuk: " << kubus.getJumlahRusuk() << std::endl;
    std::cout << "Luas Permukaan: " << kubus.getArea() << std::endl;
    std::cout << "Volume: " << kubus.getVolume() << std::endl;
    std::cout << std::endl;

    // Uji Balok
    Balok balok(5.0, 3.0, 2.0);
    std::cout << "Nama: " << balok.getNama() << std::endl;
    std::cout << "Jumlah Sisi: " << balok.getJumlahSisi() << std::endl;
    std::cout << "Jumlah Rusuk: " << balok.getJumlahRusuk() << std::endl;
    std::cout << "Luas Permukaan: " << balok.getArea() << std::endl;
    std::cout << "Volume: " << balok.getVolume() << std::endl;
    std::cout << std::endl;

    // Uji Silinder
    Silinder silinder(2.5, 4.0);
    std::cout << "Nama: " << silinder.getNama() << std::endl;
    std::cout << "Jumlah Sisi: " << silinder.getJumlahSisi() << std::endl;
    std::cout << "Jumlah Rusuk: " << silinder.getJumlahRusuk() << std::endl;
    std::cout << "Luas Permukaan: " << silinder.getArea() << std::endl;
    std::cout << "Volume: " << silinder.getVolume() << std::endl;

    return 0;
}
