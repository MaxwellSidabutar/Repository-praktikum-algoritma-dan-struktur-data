#include <iostream>
#include <vector>
#include <numeric> // Untuk std::accumulate

int main() {
    std::vector<int> data;
    int n;

    std::cout << "Masukkan jumlah elemen: ";
    std::cin >> n;

    std::cout << "Masukkan " << n << " bilangan bulat:" << std::endl;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        data.push_back(num);
    }

    // Mencari nilai maksimum dan minimum
    int max = data[0];
    int min = data[0];
    for (int num : data) {
        if (num > max) max = num;
        if (num < min) min = num;
    }

    // Menghitung rata-rata
    double average = std::accumulate(data.begin(), data.end(), 0.0) / data.size();

    std::cout << "Nilai Maksimum: " << max << std::endl;
    std::cout << "Nilai Minimum: " << min << std::endl;
    std::cout << "Nilai Rata-rata: " << average << std::endl;

    return 0;
}
