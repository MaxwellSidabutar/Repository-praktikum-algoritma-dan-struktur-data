#include <iostream>
using namespace std;

int main() {
    cout << "## Program C++ Menghitung Jumlah Huruf Vokal ##" << endl;
    cout << "=================================================" << endl;
    cout << endl;

    string kalimat;
    int vokal = 0;

    cout << "Input kata / kalimat: ";
    getline(cin, kalimat);
    cout << endl;

    // Hitung jumlah huruf vokal
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' || kalimat[i] == 'e' || kalimat[i] == 'o') {
            vokal++;
        }
    }

    // Tampilkan total huruf vokal jika ditemukan
    if (vokal > 0) {
        cout << "Jumlah huruf vokal = " << vokal;
    } else {
        cout << "Huruf vokal tidak ditemukan";
    }

    cout << endl;
    return 0;
}
