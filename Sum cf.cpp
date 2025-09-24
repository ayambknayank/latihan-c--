#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        vector<int> angka(x); // Menginisialisasi vector dengan ukuran x
        for (int i = 0; i < x; i++) {
            cin >> angka[i];
        }
        sort(angka.begin(), angka.end());
        bool sama = false;
        for (int i = 0; i < x - 1; i++) { // Perbaiki batas loop agar tidak melebihi ukuran vektor
            if (angka[i] == angka[i + 1]) {
                sama = true;
                break; // Keluar dari loop karena sudah ditemukan elemen yang sama
            }
        }
        if (sama) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
