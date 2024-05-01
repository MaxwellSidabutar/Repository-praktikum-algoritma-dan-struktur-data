#include <iostream>
#include <vector>

int main() {
    std::vector<int> data;
    int n;

    std::cout << "Masukkan jumlah array: ";
    std::cin >> n;

    std::cout << "Masukkan " << n << " bilangan bulat:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        data.push_back(num);
    }

    std::cout << "Data Array: ";
    for (const auto& num : data) {
        std::cout << num << ' ';
    }
    
    std::cout << "\nNomor Genap: ";
    for (const auto& num : data) {
        if (num % 2 == 0) {
            std::cout << num << ' ';
        }
    }

     std::cout << "\nNomor Ganjil: ";
     for (const auto& num : data) {
         if (num % 2 != 0) {
             std::cout << num << ' ';
         }
     }

     return 0;
}
