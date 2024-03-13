#include <iostream>

double hitungLuasSegitiga(double alas, int tinggi) {
    return (alas * tinggi) / 2;
}

int main() {
    // Fungsi 1
    double alas; 
    int tinggi;

    // Meminta input dari pengguna
    std::cout << "Masukkan panjang alas segitiga: ";
    std::cin >> alas;

    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi;

    // Menghitung luas segitiga
    double luas = hitungLuasSegitiga(alas, tinggi);

    // Menampilkan hasil
    std::cout << "Luas segitiga dengan alas " << alas << " dan tinggi " << tinggi << " adalah " << luas << std::endl;

    return 0;
}