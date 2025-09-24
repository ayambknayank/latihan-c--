#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

const int maks = 2e5 + 5;
int cnt;
vector<bool> vis(maks), node_khusus(maks), hapus(maks);
vector<int> adjlist [maks];

void dfs(int now){
	vis[now] = true;
	if(node_khusus[now]){
		cnt++;
	}
	for(auto &momo : adjlist[now]){
		if(!vis[momo]){
			dfs(momo);
		}
	}
}

void solve() {
	bismillah	
    int n, e, q, r;
    cin >> n >> e >> q >> r;
	for(int i=0; i<=maks;i++){
		adjlist[i].clear();
		hapus[i] = node_khusus[i] = vis[i] = 0;
	}
	vector<pair<int, int>> urutan(e + 1);
    for (int i = 1; i <= e; i++) {
        cin >> urutan[i].first >> urutan[i].second;
    }
    for (int i = 0; i < q; i++) {
        int node;
        cin >> node;
        node_khusus[node] = true;
    }
    for (int i = 0; i < r; i++) {
    	int x;
    	cin >> x;
        hapus[x] = true;
    }
    for (int i = 1; i <= e; i++) {
    	if(!hapus[i]){
    		adjlist[urutan[i].first].push_back(urutan[i].second);
    		adjlist[urutan[i].second].push_back(urutan[i].first);
		}
    }
    int ans = q*(q-1)/2;
    for(int i=1; i<=n; i++){
    	if(!vis[i]){
    		cnt=0;
    		dfs(i);
    		ans -= (cnt*(cnt-1)/2);
		}
	}
    cout << ans << endl;
}

signed main() {
	//bismillah
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
