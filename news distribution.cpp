#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

vector<bool> cek;
vector<vector<int>> adjlist;

int dfs(int now){
	cek[now]= true;
	int ans = 1;
	for(int i : adjlist[now]){
		if(!cek[i]){
			ans += dfs(i);
		}
	}
	return ans;//untuk mengeluarkan jml node yang berhubungan
}

signed main(){
	bismillah
	int n, m;
	cin >> n >> m;
	adjlist.resize(n+1);
	cek.assign(n+1, false);
	for(int i=0; i<m; ++i){
		int k;
		cin >> k;
		vector<int> orang(k);
		for(int j=0; j<k; ++j){
			cin >> orang[j];
		}
		for (int j = 0; j < k; ++j) {
            for (int l = j+1; l < k; ++l) {
                adjlist[orang[j]].push_back(orang[l]);
                adjlist[orang[l]].push_back(orang[j]);
            }
        }
	}
	 for (int i = 1; i <= n; ++i) {
        cek.assign(n + 1, false);
        int total = dfs(i) ; 
        cout << total << " ";
    }
}