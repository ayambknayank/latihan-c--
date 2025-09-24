#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

const int maks = 2e5 + 5;
int cnt;
vector<bool> vis(maks), node_khusus(maks), hapus(maks);
vector<int> adjlist[maks];

int dfs(int now) {
    vis[now] = true;
    if (memo[now]) {
        return memo[now];
    }
    for (auto &momo : adjlist[now]) {
        if (!vis[momo]) {
            dfs(momo);
        }
    }
}
int n, e, q, r;


void solve() {
    bismillah
    cin >> n >> e >> q >> r;
    vector<pair<int, int>> urutan(e + 5); // Perbaiki ukuran vektor urutan

    for (int i = 1; i <= e; i++) { // saling terhubung
        cin >> urutan[i].first >> urutan[i].second;
    }
    for (int i = 1; i <= q; i++) { // node khusus
        int node;
        cin >> node;
        node_khusus[node] = true;
    }
    for (int i = 1; i <= r; i++) { // hapus hubungan ke-1
        int x;
        cin >> x;
        hapus[x] = true;
    }
    for (int i = 1; i <= e; i++) { // menghubungkan
        if (!hapus[i]) {
            adjlist[urutan[i].first].push_back(urutan[i].second);
            adjlist[urutan[i].second].push_back(urutan[i].first);
        }
    }
    for(int i=1; i<n; i++){
    	for(int j=i+1; j<n; j++){
    		if(node_khusus[i] && node_khusus[j] && )
		}
	}
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        for (int i = 1; i <= n*10; ++i) {
            adjlist[i].clear();
            vis[i] = hapus[i] = node_khusus[i] = 0;
        }
    }
    return 0;
}