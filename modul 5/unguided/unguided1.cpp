#include <iostream>
#include <list>
#include <string>

using namespace std;

// Struktur data untuk Mahasiswa
struct Mahasiswa {
    string nim;
    int nilai;

    // Konstruktor Mahasiswa
    Mahasiswa(string n, int v) : nim(n), nilai(v) {}
};

// Kelas untuk Hash Table
class HashTable {
private:
    static const int tableSize = 10;
    list<Mahasiswa> table[tableSize]; // Menggunakan linked list untuk collision handling

    // Fungsi hash sederhana
    int hashFunction(string key) {
        int hash = 0;
        for (char c : key) {
            hash += c;
        }
        return hash % tableSize;
    }

public:
    // Method untuk menyisipkan data
    void insert(string nim, int nilai) {
        int index = hashFunction(nim);
        for (auto& entry : table[index]) {
            if (entry.nim == nim) { // Jika NIM sudah ada, ubah nilai
                entry.nilai = nilai;
                return;
            }
        }
        table[index].emplace_back(nim, nilai);
    }

    // Method untuk menghapus data berdasarkan NIM
    void remove(string nim) {
        int index = hashFunction(nim);
        for (auto it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->nim == nim) {
                table[index].erase(it);
                return;
            }
        }
    }

    // Method untuk mencari data berdasarkan NIM
    int searchByNIM(string nim) {
        int index = hashFunction(nim);
        for (auto& entry : table[index]) {
            if (entry.nim == nim) {
                return entry.nilai;
            }
        }
        return -1; // NIM tidak ditemukan
    }

    // Method untuk mencari data berdasarkan rentang nilai (80 - 90)
    void searchByRange(int minNilai, int maxNilai) {
        for (int i = 0; i < tableSize; ++i) {
            for (auto& entry : table[i]) {
                if (entry.nilai >= minNilai && entry.nilai <= maxNilai) {
                    cout << "NIM: " << entry.nim << ", Nilai: " << entry.nilai << endl;
                }
            }
        }
    }

    // Method untuk menampilkan semua data yang ditambahkan
    void displayAllData() {
        for (int i = 0; i < tableSize; ++i) {
            for (auto& entry : table[i]) {
                cout << "NIM: " << entry.nim << ", Nilai: " << entry.nilai << endl;
            }
        }
    }
};

// Fungsi untuk menampilkan menu
void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Tambah data mahasiswa" << endl;
    cout << "2. Hapus data mahasiswa" << endl;
    cout << "3. Cari data mahasiswa berdasarkan NIM" << endl;
    cout << "4. Cari data mahasiswa berdasarkan rentang nilai (80 - 90)" << endl;
    cout << "5. Tampilkan semua data mahasiswa" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilihan: ";
}

int main() {
    HashTable hashTable;

    int choice;
    string nim;
    int nilai;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan nilai: ";
                cin >> nilai;
                hashTable.insert(nim, nilai);
                cout << "Data mahasiswa berhasil ditambahkan." << endl;
                break;
            case 2:
                cout << "Masukkan NIM mahasiswa yang akan dihapus: ";
                cin >> nim;
                hashTable.remove(nim);
                cout << "Data mahasiswa berhasil dihapus." << endl;
                break;
            case 3:
                cout << "Masukkan NIM mahasiswa yang akan dicari: ";
                cin >> nim;
                nilai = hashTable.searchByNIM(nim);
                if (nilai != -1) {
                    cout << "Nilai mahasiswa dengan NIM " << nim << ": " << nilai << endl;
                } else {
                    cout << "Mahasiswa dengan NIM tersebut tidak ditemukan." << endl;
                }
                break;
            case 4:
                cout << "Mahasiswa dengan nilai antara 80 - 90:" << endl;
                hashTable.searchByRange(80, 90);
                break;
            case 5:
                cout << "Data mahasiswa yang telah ditambahkan:" << endl;
                hashTable.displayAllData();
                break;
            case 6:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
        }
    } while (choice != 6);

    return 0;
}
