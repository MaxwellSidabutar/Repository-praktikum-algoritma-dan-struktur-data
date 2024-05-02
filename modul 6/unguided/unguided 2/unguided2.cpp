#include <iostream>
#include <stack>
#include <sstream>

std::string reverseWordsAndLetters(const std::string &sentence) {
    std::stack<char> letters;
    std::stringstream ss(sentence);
    std::string word;
    std::string reversed;
    
    // Memproses setiap kata dalam kalimat
    while (ss >> word) {
        // Memasukkan setiap huruf dari kata ke dalam stack
        for (char letter : word) {
            letters.push(letter);
        }
        
        // Mengambil huruf dari stack dan membentuk kata terbalik
        while (!letters.empty()) {
            reversed += letters.top();
            letters.pop();
        }
        
        // Menambahkan spasi setelah setiap kata terbalik
        reversed += " ";
    }
    
    // Menghapus spasi ekstra di akhir kalimat
    reversed.pop_back();
    return reversed;
}

int main() {
    std::string sentence;
    std::cout << "Masukan kata: ";
    std::getline(std::cin, sentence);
    
    std::string reversed = reverseWordsAndLetters(sentence);
    std::cout << "Datastack Array:\n";
    std::cout << "Data : " << reversed << std::endl;
    
    return 0;
}
