#include <iostream>
#include <vector>
#include <algorithm>

long long maxServings(int N, std::vector<int>& ingredientsA, std::vector<int>& ingredientsB, std::vector<int>& quantity) {
    long long maxServings = LLONG_MAX;

    // Iterasi melalui semua bahan
    for (int i = 0; i < N; ++i) {
        // Menghitung jumlah maksimum hidangan A yang dapat dibuat dengan bahan i
        long long servingsA = quantity[i] / ingredientsA[i];

        // Menghitung jumlah maksimum hidangan B yang dapat dibuat dengan bahan i
        long long servingsB = quantity[i] / ingredientsB[i];

        // Memilih jumlah minimum dari hidangan A dan B untuk bahan i
        long long minServings = std::min(servingsA, servingsB);

        // Memperbarui jumlah maksimum total hidangan yang dapat dibuat
        maxServings = std::min(maxServings, minServings);
    }

    return maxServings;
}

int main() {
    int N;  // Jumlah jenis bahan
    std::cin >> N;

    std::vector<int> ingredientsA(N), ingredientsB(N), quantity(N);

    // Memasukkan jumlah bahan untuk setiap jenis bahan
    for (int i = 0; i < N; ++i) {
        std::cin >> quantity[i];
    }

    for (int i = 0; i < N; ++i) {
        std::cin >> ingredientsA[i];
    }

    for (int i = 0; i < N; ++i) {
        std::cin >> ingredientsB[i];
    }

    // Memanggil fungsi untuk menghitung jumlah maksimum total hidangan yang dapat dibuat
    long long result = maxServings(N, ingredientsA, ingredientsB, quantity);

    // Menampilkan hasil
    std::cout << result << std::endl;

    return 0;
}
