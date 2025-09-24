#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    
    vector<pair<int, int>> stand(n+1); // +1 karena indeks 1-based
    vector<int> pindah(n+1); // +1 karena indeks 1-based
    
    stand[0].second = 0; // Inisialisasi awal
    for (int i=2; i<=n; ++i) {
        cin >> pindah[i];
        stand[i].second = stand[i-1].second + pindah[i];
    }
    
    // Membaca nilai stand[i].first
    for (int i=1; i<=n; ++i){
        cin >> stand[i].first;
    }
    
    // Menghitung waktu yang dibutuhkan
    int waktu = stand[n].second + stand[n].first; // waktu sudah dipesan semua
    for (int i=n; i>=1; --i){
        waktu += pindah[i];
        if (i > 1 && stand[i-1].first - stand[i-1].second > waktu){
            waktu += stand[i-1].first - stand[i-1].second - waktu;
        }
    }
    
    cout << waktu << endl;
    
    return 0;
}
