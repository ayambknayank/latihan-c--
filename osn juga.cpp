#include <bits/stdc++.h>
using namespace std;
#define int int64_t 
#define bismillah ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int n, m, mod;
vector<int> data_val;
vector<vector<int>> tabel;
int offset = 0;

int apply_offset(int value) {
    return (value + offset) % mod;
}

void satu(int r1, int c1, int r2, int c2) {
    swap(tabel[r1][c1], tabel[r2][c2]);
}

void dua(int w) {
    offset = (offset + w) % mod;
}

void tiga(int r1, int c1, int r2, int c2) {
    vector<bool> seen(mod, false);
    for (int i = r1; i <= r2; ++i) {
        for (int j = c1; j <= c2; ++j) {
            seen[apply_offset(tabel[i][j])] = true;
        }
    }
    for (int i = 0; i < mod; ++i) {
        if (!seen[i]) {
            cout << i << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

int32_t main() {
    bismillah;
    
    cin >> n >> m;
    mod = n * m;
    tabel.resize(n + 1, vector<int>(m + 1));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> tabel[i][j];
        }
    }

    int q; cin >> q;
    while (q--) {
        int type; cin >> type;
        if (type == 1) {
            int r1, c1, r2, c2;
            cin >> r1 >> c1 >> r2 >> c2;
            satu(r1, c1, r2, c2);
        } else if (type == 2) {
            int w; cin >> w;
            dua(w);
        } else if (type == 3) {
            int r1, c1, r2, c2;
            cin >> r1 >> c1 >> r2 >> c2;
            tiga(r1, c1, r2, c2);
        }
    }

    return 0;
}
