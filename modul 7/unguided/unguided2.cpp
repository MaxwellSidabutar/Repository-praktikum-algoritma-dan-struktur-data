#include <iostream>
using namespace std;

struct Node {
    string nama;
    string nim;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* back;
    int size;
    const int maksimalQueue = 5; // Maksimal antrian

public:
    Queue() {
        front = nullptr;
        back = nullptr;
        size = 0;
    }

    bool isFull() {
        return size == maksimalQueue;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueueAntrian(string nama, string nim) {
        if (isFull()) {
            cout << "Antrian penuh" << endl;
            return;
        }

        Node* newNode = new Node();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = newNode;
            back = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }
        size++;
    }

    void dequeueAntrian() {
        if (isEmpty()) {
            cout << "Antrian kosong" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
        size--;

        if (isEmpty()) {
            back = nullptr;
        }
    }

    int countQueue() {
        return size;
    }

    void clearQueue() {
        while (!isEmpty()) {
            dequeueAntrian();
        }
    }

    void viewQueue() {
        cout << "Data antrian teller:" << endl;
        Node* temp = front;
        int index = 1;

        while (temp != nullptr) {
            cout << index << ". Nama: " << temp->nama << ", NIM: " << temp->nim << endl;
            temp = temp->next;
            index++;
        }

        for (int i = index; i <= maksimalQueue; i++) {
            cout << i << ". (kosong)" << endl;
        }
    }
};

int main() {
    Queue queue;
    queue.enqueueAntrian("Maxwell Tumpal Sidabutar", "2211102137");
    queue.enqueueAntrian("Andi", "2211102138");
    queue.enqueueAntrian("Maya", "2211102139");
    queue.viewQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;
    queue.dequeueAntrian();
    queue.viewQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;
    queue.clearQueue();
    queue.viewQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;
    return 0;
}
