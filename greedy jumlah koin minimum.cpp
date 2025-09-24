#include <iostream>
#include <vector>
#include <algorithm>

// Fungsi untuk mencari jumlah koin minimum
int minKoin(std::vector<int> koin, int uang) {
    // Urutkan koin-koin dalam urutan menurun
    std::sort(koin.rbegin(), koin.rend());
    
    int jumlahKoin = 0;
    // Iterasi setiap koin
    for (int i = 0; i < koin.size(); i++) {
        // Jika uang masih lebih besar dari koin saat ini
        while (uang >= koin[i]) {
            // Kurangi uang dengan nilai koin saat ini
            uang -= koin[i];
            // Tambahkan 1 ke jumlah koin
            jumlahKoin++;
        }
    }
    
    return jumlahKoin;
}

int main() {
    // Contoh koin-koin yang tersedia
    std::vector<int> koin = {1, 5, 10, 25};
    // Jumlah uang yang ingin dibayar
    int uang = 37;
    
    // Cari jumlah koin minimum
    int jumlahKoinMin = minKoin(koin, uang);
    
    std::cout << "Jumlah koin minimum yang dibutuhkan: " << jumlahKoinMin << std::endl;
    
    return 0;
}