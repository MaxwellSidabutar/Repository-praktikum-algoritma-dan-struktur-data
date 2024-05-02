#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string sentence) {
    // Menghapus spasi dan mengubah huruf menjadi huruf kecil
    string clean_sentence;
    for (char c : sentence) {
        if (isalpha(c)) {
            clean_sentence += tolower(c);
        }
    }
    
    // Membuat stack kosong
    stack<char> char_stack;
    
    // Memasukkan setengah karakter pertama ke dalam stack
    size_t half_length = clean_sentence.length() / 2;
    for (size_t i = 0; i < half_length; ++i) {
        char_stack.push(clean_sentence[i]);
    }
    
    // Menentukan indeks awal untuk membandingkan karakter di stack
    size_t start_index = (clean_sentence.length() % 2 == 0) ? half_length : half_length + 1;
    
    // Membandingkan karakter di stack dengan karakter di sisa kalimat
    for (size_t i = start_index; i < clean_sentence.length(); ++i) {
        if (clean_sentence[i] != char_stack.top()) {
            return false;
        }
        char_stack.pop();
    }
    
    // Jika tidak ada perbedaan, kalimat adalah palindrom
    return true;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    
    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }
    
    return 0;
}
