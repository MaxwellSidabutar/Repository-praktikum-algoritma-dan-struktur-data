#include <iostream>
using namespace std;

// Deklarasi Struct Node
struct Node {
    int data;
    Node *next;
};

Node *head;
Node *tail;

// Inisialisasi Node
void init() {
    head = nullptr;
    tail = nullptr;
}

// Pengecekan apakah list kosong
bool isEmpty() {
    return head == nullptr;
}

// Tambah Node di depan
void insertDepan(int nilai) {
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = nullptr;
    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Tambah Node di belakang
void insertBelakang(int nilai) {
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = nullptr;
    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Hapus Node di depan
void hapusDepan() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }
    Node *hapus = head;
    head = head->next;
    delete hapus;
    if (head == nullptr) {
        tail = nullptr;
    }
}

// Hapus Node di belakang
void hapusBelakang() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }
    Node *hapus = tail;
    if (head == tail) {
        head = nullptr;
        tail = nullptr;
    } else {
        Node *bantu = head;
        while (bantu->next != tail) {
            bantu = bantu->next;
        }
        tail = bantu;
        tail->next = nullptr;
    }
    delete hapus;
}

// Hapus Node di posisi tertentu
void hapusTengah(int posisi) {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }
    if (posisi < 1) {
        cout << "Posisi tidak valid!" << endl;
        return;
    }
    if (posisi == 1) {
        hapusDepan();
        return;
    }
    Node *bantu = head;
    Node *sebelum = nullptr;
    int nomor = 1;
    while (nomor < posisi && bantu != nullptr) {
        sebelum = bantu;
        bantu = bantu->next;
        nomor++;
    }
    if (bantu == nullptr) {
        cout << "Posisi di luar jangkauan!" << endl;
        return;
    }
    sebelum->next = bantu->next;
    if (bantu == tail) {
        tail = sebelum;
    }
    delete bantu;
}

// Hapus seluruh Node dalam list
void clearList() {
    Node *bantu = head;
    while (bantu != nullptr) {
        Node *hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = nullptr;
    tail = nullptr;
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan isi list
void tampil() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }
    Node *bantu = head;
    cout << "Isi list: ";
    while (bantu != nullptr) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

int main() {
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertBelakang(7);
    tampil();
    hapusTengah(2);
    tampil();
    clearList();

    return 0;
}
