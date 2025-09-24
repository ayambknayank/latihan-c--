#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

vector<int> adjlist[100001];
int a[1000001], b[100001];
vector<bool> cek(100001);

int dfs(int cur){
	cek[cur] = true;
	int ans = a[cur];
	for(auto i : adjlist[cur]){
		if(!cek[i]){
			ans = min(ans, dfs(i));
		}
	}
	return ans;
}

signed main(){
	int n, m, k;
	cin >> n >> m >> k;
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<m; i++){
		cin >> b[i];
	}
	sort(b, b+m);
	for(int i=0; i<k; i++){
		int u, v;
		cin >> u >> v;
		adjlist[v-1].push_back(u-1);
		adjlist[u-1].push_back(v-1);
	}
	vec desa;
	for(int i=0; i<n; i++){
		if(!cek[i]){
			desa.push_back(dfs(i));
		}
	}
	sort(desa.begin(), desa.end());
	if(desa.size() > m){
		cout << "-1" << endl;
		return 0;
	}else{
		int hasil = 0;
		for(int i=0; i<m && !desa.empty(); i++){
			hasil += desa.back()*b[i];
			desa.pop_back();
		}
		cout << hasil << endl;
	}
}