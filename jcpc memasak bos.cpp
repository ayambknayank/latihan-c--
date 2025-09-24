#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;
    
    vector<int> d(n - 1, 0); // D_i = 0 untuk batasan
    vector<int> t(n);
    
    for (int i = 0; i < n - 1; ++i) {
        cin >> d[i]; 
    }    
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }
    
    int waktu = 0;
    int tunggu = 0;

    // Menghitung total waktu memasak untuk semua stan yang relevan
    for (int i = 0; i < n; ++i) {
        if (t[i] != -1) {
            waktu += t[i];
            tunggu = max(tunggu, t[i]);
        }
    }
    cout << waktu << endl;
    return 0;
}
