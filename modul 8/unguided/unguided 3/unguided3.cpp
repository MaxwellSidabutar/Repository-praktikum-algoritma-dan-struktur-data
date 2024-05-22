#include <iostream>
using namespace std;

int main() {
    const int size = 10; // Jumlah elemen dalam data
    int data[size] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    cout << "9, 4, 1, 4, 7, 10, 5, 4, 12, 4\n";
    int countFour = 0; // Jumlah angka 4

    for (int i = 0; i < size; ++i) {
        if (data[i] == 4) {
            countFour++;
        } 
    }

    cout << "Jumlah angka 4: " << countFour << endl;
    return 0;
}
