#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;

    // Mendapatkan nomor baris (n) dan nomor kursi (s)
    long long n = input[0] - '0'; // Mengubah karakter ke nomor
    char s = input[1];

    // Menghitung jumlah waktu untuk melayani semua penumpang di baris sebelum baris tempat Vasya duduk
    long long totalTime = 0;
    long long rowsBefore = n - 1;
    totalTime += (rowsBefore / 2) * 7; // Untuk setiap dua baris, dibutuhkan 7 detik
    if (rowsBefore % 2 == 1) {
        totalTime += 1; // Jika baris sebelum baris tempat Vasya duduk adalah baris ganjil, tambahkan 1 detik tambahan
    }

    // Tentukan apakah Vasya akan dilayani oleh pelayan pertama atau kedua
    bool servedByFirstAttendant = (n % 2 == 1 && s == 'f') || (n % 2 == 0 && s != 'f');

    // Menghitung jumlah waktu untuk melayani Vasya setelah pelayan yang sesuai mencapai baris tempat dia duduk
    if (servedByFirstAttendant) {
        if (s == 'f') {
            totalTime += 1;
        } else if (s == 'e') {
            totalTime += 2;
        } else if (s == 'd') {
            totalTime += 3;
        } else if (s == 'a') {
            totalTime += 4;
        } else if (s == 'b') {
            totalTime += 5;
        } else if (s == 'c') {
            totalTime += 6;
        }
    } else {
        if (s == 'f') {
            totalTime += 4;
        } else if (s == 'e') {
            totalTime += 3;
        } else if (s == 'd') {
            totalTime += 2;
        } else if (s == 'a') {
            totalTime += 6;
        } else if (s == 'b') {
            totalTime += 5;
        } else if (s == 'c') {
            totalTime += 1;
        }
    }

    cout << totalTime << endl;

    return 0;
}
