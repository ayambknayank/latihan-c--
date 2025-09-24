#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Cek pembagian oleh nol
    if (c == 0) {
        cout << "TIDAK" << endl;
        return 0;
    }

    int ope = a * b / c;

    // Cek apakah ope adalah bilangan genap
    if (ope % 2 == 0) {
        // Cek apakah ope adalah pangkat dua
        while (ope > 1 && ope % 2 == 0) {
            ope /= 2;
        }

        if (ope == 1) {
            cout << "YA" << endl;
        } else {
            cout << "TIDAK" << endl;
        }
    } else {
        cout << "TIDAK" << endl;
    }

    return 0;
}
