#include <bits/stdc++.h>
using namespace std;
#define int int64_t 
#define bismillah ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

int n, m;
int mod;
vector<int> data_val;
vector<vector<int>> tabel;
int terbesar = 0;

void satu(int r1, int c1, int r2, int c2) {
    swap(tabel[r1][c1], tabel[r2][c2]);
}

void dua(int w) {
    if (w % mod == 0) return;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            tabel[i][j] = (tabel[i][j] + w) % mod;
        }
    }
}

void tiga(int r1, int c1, int r2, int c2) {
    unordered_set<int> seen;
    for(int i = r1; i <= r2; i++) {
        for(int j = c1; j <= c2; j++) {
            seen.insert(tabel[i][j]);
        }
    }
    for(const auto& val : data_val) {
        if(seen.find(val) == seen.end()) {
            cout << val << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int32_t main() {
    bismillah
    cin >> n >> m;
    mod = n * m;
    tabel.resize(n + 1, vector<int>(m + 1));
    data_val.resize(n * m);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            int x; cin >> x;
            tabel[i][j] = x;
            data_val[(i - 1) * m + (j - 1)] = x;
            terbesar = max(terbesar, x);
        }
    }

    sort(data_val.begin(), data_val.end());

    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        if(x == 1) {
            int r1, c1, r2, c2;
            cin >> r1 >> c1 >> r2 >> c2;
            satu(r1, c1, r2, c2);
        } else if(x == 2) {
            int w; cin >> w;
            dua(w);
        } else if(x == 3) {
            int r1, c1, r2, c2;
            cin >> r1 >> c1 >> r2 >> c2;
            tiga(r1, c1, r2, c2);
        }
    }
}
