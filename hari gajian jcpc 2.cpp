#include<bits/stdc++.h>
using namespace std;
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

signed main() {
    bismillah;
    int q; cin >> q;
    int n = q;
    int y = 0;
    vector<pair<int, int>> data;
    int bagi[] = {5, 2, 1};

    int kali = 1;
    while (n > 0) {
        // Cari nilai terbesar dari 10, 100, 1000, dst yang kurang dari atau sama dengan n
        while (n / kali >= 10) {
            kali *= 10;
        }
        
        // Bagi n dengan pembagi terbesar (5, 2, atau 1) dan masukkan hasilnya ke data
        for (int i = 0; i < 3; i++) {
            int pembagi = bagi[i] * kali;
            if (n / pembagi > 0) {
                int count = n / pembagi;
                data.push_back({pembagi, count});
                n -= pembagi * count;
            }
        }
        kali /= 10; // Kurangi kali dengan membagi 10
    }

    cout << data.size() << endl;
    for (auto &p : data) {
        cout << p.first << " " << p.second << endl;
    }
}
