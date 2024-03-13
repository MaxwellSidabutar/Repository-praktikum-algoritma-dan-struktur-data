#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main() {
    // Membuat map untuk menyimpan pasangan nilai (key-value pair)
    map<int, string> kodeNegara;
    
    // Menambahkan data ke dalam map
    kodeNegara[62] = "Indonesia";
    kodeNegara[1] = "Amerika Serikat";
    kodeNegara[81] = "Jepang";
    
    // Menggunakan iterator untuk mengakses elemen-elemen map
    map<int, string>::iterator it;
   cout << "Kode Negara:" << endl;
    for (it = kodeNegara.begin(); it != kodeNegara.end(); ++it) {
        cout << it->first << " => " << it->second <<endl;
    }
    
    return 0;
}
