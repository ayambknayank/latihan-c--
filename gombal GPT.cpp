#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, benda, sifat;

    cout << "Hai, apa namamu? ";
    getline(cin, nama);

    cout << "Sekarang masukkan sebuah benda: ";
    getline(cin, benda);

    cout << "Terakhir, masukkan sebuah sifat: ";
    getline(cin, sifat);

    cout << endl << "Halo " << nama << ", kamu seperti " << sifat << " " << benda << " di taman yang indah. Aku ingin bersamamu selamanya." << endl;

    return 0;
}
