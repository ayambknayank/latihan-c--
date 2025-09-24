#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int angka[3];
        std::cin >> angka[0] >> angka[1] >> angka[2];
        std::sort(angka, angka + 3);
        std::cout << angka[1] << std::endl;
    }

    return 0;
}
