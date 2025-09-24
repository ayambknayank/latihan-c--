#include <iostream>
#include <string>

int main() {
    std::string bracketSequence;
    std::cin >> bracketSequence;

    int maxLength = 0;
    int currentLength = 0;

    // Selama masih terdapat "()" dalam string, lakukan loop
    while (bracketSequence.find("()") != std::string::npos) {
        bracketSequence.replace(bracketSequence.find("()"), 2, "");  // Hapus "()" dari string
        currentLength += 2;  // Tambah panjang saat ini
        maxLength = std::max(maxLength, currentLength);
    }

    std::cout << maxLength << std::endl;

    return 0;
}
