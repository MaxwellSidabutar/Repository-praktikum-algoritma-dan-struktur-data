#include <iostream>
#include <string>

using namespace std;

// Struktur node untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;
    int nim;
    Mahasiswa* next;
};

// Class untuk Linked List
class LinkedList {
private:
    Mahasiswa* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Destructor
    ~LinkedList() {
        Mahasiswa* current = head;
        while (current != nullptr) {
            Mahasiswa* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    // Method untuk menambahkan data mahasiswa di awal linked list
    void tambahDepan(string nama, int nim) {
        Mahasiswa* newMahasiswa = new Mahasiswa;
        newMahasiswa->nama = nama;
        newMahasiswa->nim = nim;
        newMahasiswa->next = head;
        head = newMahasiswa;
        cout << "Data telah ditambahkan.\n";
    }

    // Method untuk menambahkan data mahasiswa di akhir linked list
    void tambahBelakang(string nama, int nim) {
        Mahasiswa* newMahasiswa = new Mahasiswa;
        newMahasiswa->nama = nama;
        newMahasiswa->nim = nim;
        newMahasiswa->next = nullptr;

        if (head == nullptr) {
            head = newMahasiswa;
        } else {
            Mahasiswa* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newMahasiswa;
        }
        cout << "Data telah ditambahkan.\n";
    }

    // Method untuk menambahkan data mahasiswa di tengah linked list
    void tambahTengah(string nama, int nim, int posisi) {
        if (posisi <= 0) {
            cout << "Posisi tidak valid.\n";
            return;
        }

        Mahasiswa* newMahasiswa = new Mahasiswa;
        newMahasiswa->nama = nama;
        newMahasiswa->nim = nim;

        if (posisi == 1) {
            newMahasiswa->next = head;
            head = newMahasiswa;
            cout << "Data telah ditambahkan.\n";
            return;
        }

        Mahasiswa* current = head;
        for (int i = 1; i < posisi - 1 && current != nullptr; ++i) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Posisi tidak valid.\n";
        } else {
            newMahasiswa->next = current->next;
            current->next = newMahasiswa;
            cout << "Data telah ditambahkan.\n";
        }
    }

    // Method untuk mengubah data mahasiswa di awal linked list
    void ubahDepan(string nama, int nim) {
        if (head == nullptr) {
            cout << "Linked list kosong.\n";
            return;
        }
        head->nama = nama;
        head->nim = nim;
        cout << "Data telah diubah.\n";
    }

    // Method untuk mengubah data mahasiswa di akhir linked list
    void ubahBelakang(string nama, int nim) {
        if (head == nullptr) {
            cout << "Linked list kosong.\n";
            return;
        }

        Mahasiswa* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->nama = nama;
        current->nim = nim;
        cout << "Data telah diubah.\n";
    }

    // Method untuk mengubah data mahasiswa di tengah linked list
    void ubahTengah(string nama, int nim, int posisi) {
        if (head == nullptr) {
            cout << "Linked list kosong.\n";
            return;
        }

        Mahasiswa* current = head;
        for (int i = 1; i < posisi && current != nullptr; ++i) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Posisi tidak valid.\n";
        } else {
            current->nama = nama;
            current->nim = nim;
            cout << "Data telah diubah.\n";
        }
    }

    // Method untuk menghapus data mahasiswa di awal linked list
    void hapusDepan() {
        if (head == nullptr) {
            cout << "Linked list kosong.\n";
            return;
        }

        Mahasiswa* temp = head;
        head = head->next;
        delete temp;
        cout << "Data berhasil dihapus.\n";
    }

    // Method untuk menghapus data mahasiswa di akhir linked list
    void hapusBelakang() {
        if (head == nullptr) {
            cout << "Linked list kosong.\n";
            return;
        }

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            cout << "Data berhasil dihapus.\n";
            return;
        }

        Mahasiswa* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }

        delete current->next;
        current->next = nullptr;
        cout << "Data berhasil dihapus.\n";
    }

    // Method untuk menghapus data mahasiswa di tengah linked list
    void hapusTengah(int posisi) {
        if (head == nullptr) {
            cout << "Linked list kosong.\n";
            return;
        }

        if (posisi <= 0) {
            cout << "Posisi tidak valid.\n";
            return;
        }

        if (posisi == 1) {
            Mahasiswa* temp = head;
            head = head->next;
            delete temp;
            cout << "Data berhasil dihapus.\n";
            return;
        }

        Mahasiswa* current = head;
        for (int i = 1; i < posisi - 1 && current != nullptr; ++i) {
            current = current->next;
        }

        if (current == nullptr || current->next == nullptr) {
            cout << "Posisi tidak valid.\n";
        } else {
            Mahasiswa* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Data berhasil dihapus.\n";
        }
    }

    // Method untuk menghapus seluruh data mahasiswa
    void hapusList() {
        while (head != nullptr) {
            hapusDepan();
        }
        cout << "Seluruh data berhasil dihapus.\n";
    }

    // Method untuk menampilkan semua data mahasiswa
    void tampilkanMahasiswa() {
        if (head == nullptr) {
            cout << "Linked list kosong.\n";
            return;
        }
        cout << "DATA MAHASISWA\n";
        cout << "NAMA\tNIM\n";
        Mahasiswa* current = head;
        while (current != nullptr) {
            cout << current->nama << "\t" << current->nim << endl;
            current = current->next;
        }
    }
};

int main() {
    LinkedList linkedList;
    int pilihan;
    string nama;
    int nim;
    int posisi;

    do {
        cout << "\nPROGRAM SINGLE LINKED LIST NON-CIRCULAR\n";
        cout << "1. Tambah Depan\n";
        cout << "2. Tambah Belakang\n";
        cout << "3. Tambah Tengah\n";
        cout << "4. Ubah Depan\n";
        cout << "5. Ubah Belakang\n";
        cout << "6. Ubah Tengah\n";
        cout << "7. Hapus Depan\n";
        cout << "8. Hapus Belakang\n";
        cout << "9. Hapus Tengah\n";
        cout << "10. Hapus List\n";
        cout << "11. Tampilkan Data\n";
        cout << "0. Keluar\n";
        cout << "Pilih Operasi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "-Tambah Depan\n";
                cout << "Masukkan Nama: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan NIM: ";
                cin >> nim;
                linkedList.tambahDepan(nama, nim);
                break;
            case 2:
                cout << "-Tambah Belakang\n";
                cout << "Masukkan Nama: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan NIM: ";
                cin >> nim;
                linkedList.tambahBelakang(nama, nim);
                break;
            case 3:
                cout << "-Tambah Tengah\n";
                cout << "Masukkan Nama: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                linkedList.tambahTengah(nama, nim, posisi);
                break;
            case 4:
                cout << "-Ubah Depan\n";
                cout << "Masukkan Nama Baru: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan NIM Baru: ";
                cin >> nim;
                linkedList.ubahDepan(nama, nim);
                break;
            case 5:
                cout << "-Ubah Belakang\n";
                cout << "Masukkan Nama Baru: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan NIM Baru: ";
                cin >> nim;
                linkedList.ubahBelakang(nama, nim);
                break;
            case 6:
                cout << "-Ubah Tengah\n";
                cout << "Masukkan Nama Baru: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan NIM Baru: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                linkedList.ubahTengah(nama, nim, posisi);
                break;
            case 7:
                cout << "-Hapus Depan\n";
                linkedList.hapusDepan();
                break;
            case 8:
                cout << "-Hapus Belakang\n";
                linkedList.hapusBelakang();
                break;
            case 9:
                cout << "-Hapus Tengah\n";
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                linkedList.hapusTengah(posisi);
                break;
            case 10:
                cout << "-Hapus List\n";
                linkedList.hapusList();
                break;
            case 11:
                cout << "-Tampilkan Data\n";
                linkedList.tampilkanMahasiswa();
                break;
            case 0:
                cout << "Program berakhir.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi.\n";
        }
    } while (pilihan != 0);

    return 0;
}
