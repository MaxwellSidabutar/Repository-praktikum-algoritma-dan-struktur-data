#include <iostream>
using namespace std;

// Node structure
struct Node {
    string nama;
    int usia;
    Node* next;
};

// Linked list class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to insert data at the front of the list
    void insertFront(string nama, int usia) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;
        newNode->next = head;
        head = newNode;
    }

    // Function to insert data at the end of the list
    void insertEnd(string nama, int usia) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to insert data at the middle of the list after a specified node
    void insertAfter(string nama, int usia, string keyNama) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;

        Node* temp = head;
        while (temp != nullptr && temp->nama != keyNama) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Node dengan nama " << keyNama << " tidak ditemukan" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Function to remove a node by name
    void removeNode(string keyNama) {
        Node* temp = head;
        Node* prev = nullptr;

        // If the node to be deleted is the head
        if (temp != nullptr && temp->nama == keyNama) {
            head = temp->next;
            delete temp;
            return;
        }

        // Find the node to be deleted
        while (temp != nullptr && temp->nama != keyNama) {
            prev = temp;
            temp = temp->next;
        }

        // If the node is not found
        if (temp == nullptr) {
            cout << "Node dengan nama " << keyNama << " tidak ditemukan" << endl;
            return;
        }

        // Unlink the node from linked list
        prev->next = temp->next;
        delete temp;
    }

    // Function to update the data of a node by name
    void updateNode(string keyNama, string newNama, int newUsia) {
        Node* temp = head;

        while (temp != nullptr && temp->nama != keyNama) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Node dengan nama " << keyNama << " tidak ditemukan" << endl;
            return;
        }

        temp->nama = newNama;
        temp->usia = newUsia;
    }

    // Function to display the linked list
    void displayList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << "Nama: " << temp->nama << ", Usia: " << temp->usia << endl;
            temp = temp->next;
        }
    }
};

int main() {
    LinkedList list;

    // Menambahkan data awal
    list.insertFront("Maxwell", 19); // Ganti "Nama_anda" dan Usia_anda dengan data Anda

    // a. Masukkan data sesuai urutan
    list.insertEnd("John", 19);
    list.insertEnd("Jane", 20);
    list.insertEnd("Michael", 18);
    list.insertEnd("Yusuke", 19);
    list.insertEnd("Akechi", 20);
    list.insertEnd("Hoshino", 18);
    list.insertEnd("Karin", 18);

    // b. Hapus data Akechi
    list.removeNode("Akechi");

    // c. Tambahkan data berikut diantara John dan Jane
    list.insertAfter("Futaba", 18, "John");

    // d. Tambahkan data berikut diawal
    list.insertFront("Igor", 20);

    // e. Ubah data Michael menjadi : Reyn 18
    list.updateNode("Michael", "Reyn", 18);

    // f. Tampilkan seluruh data
    cout << "Data Mahasiswa:" << endl;
    list.displayList();

    return 0;
}
