#include <iostream>
using namespace std;

// Fungsi Class
class Mahasiswa {
public:
    int nim;
    string nama;
    float nilai;

    void printData() {
        cout << "NIM   : " << nim << endl;
        cout << "Nama  : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
};


//Fungsi Struct
struct Point {
    int x;
    int y;
};

int main() {
    //Class
    cout << "Fungsi Class \n";
    Mahasiswa anton;
    anton.nim = 12345;
    anton.nama = "Antonius";
    anton.nilai = 85.5;

    anton.printData();
    cout << "\n";

    cout << "Fungsi Struct \n";
    //Struct
    Point p;
    p.x = 10;
    p.y = 20;

    cout << "Koordinat: (" << p.x << ", " << p.y << ")" << endl;
    return 0;
}
