#include <iostream>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int x[4], y[4];

        for (int i = 0; i < 4; ++i) {
            std::cin >> x[i] >> y[i];
        }

        std::sort(x, x + 4);
        std::sort(y, y + 4);

        int panjang = x[3] - x[0];
        int lebar = y[3] - y[0];

        int luas = panjang * lebar;

        std::cout << luas << std::endl;
    }

    return 0;
}
