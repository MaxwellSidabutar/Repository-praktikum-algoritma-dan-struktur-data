#include <iostream>
#include <string>

using namespace std;

struct Node {
    string productName;
    int price;
    Node* prev;
    Node* next;
};

class SkincareStore {
private:
    Node* head;
    Node* tail;

public:
    SkincareStore() {
        head = nullptr;
        tail = nullptr;
    }

    // Method to add a node to the end of the list
    void addData(string productName, int price) {
        Node* newNode = new Node;
        newNode->productName = productName;
        newNode->price = price;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Method to delete a node by product name
    void deleteData(string productName) {
        Node* current = head;
        while (current != nullptr) {
            if (current->productName == productName) {
                if (current == head && current == tail) {
                    head = nullptr;
                    tail = nullptr;
                } else if (current == head) {
                    head = head->next;
                    head->prev = nullptr;
                } else if (current == tail) {
                    tail = tail->prev;
                    tail->next = nullptr;
                } else {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
        }
        cout << "Product not found!" << endl;
    }

    // Method to update price by product name
    void updateData(string productName, int newPrice) {
        Node* current = head;
        while (current != nullptr) {
            if (current->productName == productName) {
                current->price = newPrice;
                return;
            }
            current = current->next;
        }
        cout << "Product not found!" << endl;
    }

    // Method to add a node after a specific node
    void addDataAtPosition(string productName, int price, string prevProductName) {
        Node* newNode = new Node;
        newNode->productName = productName;
        newNode->price = price;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        Node* current = head;
        while (current != nullptr) {
            if (current->productName == prevProductName) {
                newNode->next = current->next;
                newNode->prev = current;
                if (current->next != nullptr) {
                    current->next->prev = newNode;
                }
                current->next = newNode;
                if (current == tail) {
                    tail = newNode;
                }
                return;
            }
            current = current->next;
        }
        cout << "Previous product not found!" << endl;
    }

    // Method to display all data
    void displayData() {
        Node* current = head;
        cout << "Nama Produk\tHarga" << endl;
        while (current != nullptr) {
            cout << current->productName << "\t\t" << current->price << endl;
            current = current->next;
        }
    }

    // Method to delete all nodes
    void deleteAllData() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    ~SkincareStore() {
        deleteAllData();
    }
};

int main() {
    SkincareStore store;
    store.addData("Originote", 60000);
    store.addData("Somethinc", 150000);
    store.addData("Skintific", 100000);
    store.addData("Wardah", 50000);
    store.addData("Hanasui", 30000);

    int choice;
    string productName;
    int price;
    string prevProductName;

    do {
        cout << "Toko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        cout << "Pilih menu: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nama produk: ";
                cin >> productName;
                cout << "Masukkan harga: ";
                cin >> price;
                store.addData(productName, price);
                break;
            case 2:
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> productName;
                store.deleteData(productName);
                break;
            case 3:
                cout << "Masukkan nama produk yang ingin diupdate: ";
                cin >> productName;
                cout << "Masukkan harga baru: ";
                cin >> price;
                store.updateData(productName, price);
                break;
            case 4:
                cout << "Masukkan nama produk baru: ";
                cin >> productName;
                cout << "Masukkan harga: ";
                cin >> price;
                cout << "Masukkan nama produk sebelumnya: ";
                cin >> prevProductName;
                store.addDataAtPosition(productName, price, prevProductName);
                break;
            case 5:
                // Implement this if needed
                break;
            case 6:
                store.deleteAllData();
                cout << "Data berhasil dihapus semua" << endl;
                break;
            case 7:
                store.displayData();
                break;
            case 8:
                cout << "Terima kasih telah menggunakan program ini." << endl;
                break;
            default:
                cout << "Menu tidak valid. Silakan pilih menu yang sesuai." << endl;
        }
    } while (choice != 8);

    return 0;
}
