#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> cari_faktor(int n) {
    vector<int> faktor;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            faktor.push_back(i);
            if (i != n / i) {
                faktor.push_back(n / i);
            }
        }
    }
    return faktor;
}

signed main() {
    int n;
    cin >> n; // Membaca input N
    
    vector<int> faktor = cari_faktor(n); // Mencari faktor N
    
    int oo = 0, ss = 0, aa = 0;
    for (int i = 0; i < faktor.size(); i++) {
        for (int j = i; j < faktor.size(); j++) {
            for (int k = j; k < faktor.size(); k++) {
                int a = faktor[i], b = faktor[j], c = faktor[k];
                if (a * b * c == n && a + b + c <= 5000) {
                    oo = a;
                    ss = b;
                    aa = c;
                    
                    // Mencetak hasil string
                    for (int x = 0; x < oo; x++) cout << 'O';
                    for (int x = 0; x < ss; x++) cout << 'S';
                    for (int x = 0; x < aa; x++) cout << 'A';
                    cout << endl;
                    return 0;
                }
            }
        }
    }
    
    // Jika tidak ada kombinasi yang memenuhi syarat
    cout << "Tidak mungkin menyusun string." << endl;
    return 0;
}
