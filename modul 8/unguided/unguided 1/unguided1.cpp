#include <iostream>
#include <cstring>
using namespace std;

int linearSearch(char arr[], int n, char target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    char sentence[100];
    cout << "Masukkan kalimat: ";
    cin.getline(sentence, 100);
    char target;
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;

    int n = strlen(sentence);

    int result = linearSearch(sentence, n, target);
    if (result != -1) {
        cout << "Huruf '" << target << "' ditemukan pada indeks " << result << endl;
    } else {
        cout << "Huruf '" << target << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
