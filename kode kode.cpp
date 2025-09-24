#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> data(n);
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    unordered_map<int, int> freq;
    int unique_count = 0;

    // **Inisialisasi Window Pertama**
    for (int i = 0; i < k; i++) {
        if (freq[data[i]] == 0) unique_count++;  // Elemen baru
        freq[data[i]]++;
    }
    cout << unique_count << endl;

    // **Geser Window**
    for (int i = k; i < n; i++) {
        // **Hapus Elemen Kiri**
        freq[data[i - k]]--;
        if (freq[data[i - k]] == 0) unique_count--;  // Jika elemen habis, kurangi jumlah unik

        // **Tambahkan Elemen Kanan**
        if (freq[data[i]] == 0) unique_count++;  // Jika elemen baru, tambahkan unik
        freq[data[i]]++;

        cout << unique_count << endl;
    }

    return 0;
}
