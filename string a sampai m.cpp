#include <iostream>
#include <string>

// Fungsi untuk menghasilkan string ke-n dari susunan A sampai M
std::string generateString(int n) {
    const int numLetters = 13;  // Jumlah huruf dari A sampai M
    const int digitsPerString = 4;  // Jumlah digit huruf dalam satu string
    std::string result = "";

    // Menghasilkan string ke-n
    for (int i = 0; i < digitsPerString; i++) {
        char currentChar = 'A' + (n % numLetters);
        result = currentChar + result;
        n /= numLetters;
    }

    return result;
}

int main() {
    int n;

    // Meminta input dari pengguna
    std::cout << "Masukkan nilai n: ";
    std::cin >> n;

    // Menghasilkan dan menampilkan string ke-n
    std::string result = generateString(n);
    std::cout << "String ke-" << n << ": " << result << std::endl;

    return 0;
}
