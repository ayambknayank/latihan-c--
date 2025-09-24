#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int dfs(){
	int ans=0;
	for(int i=0; i<n; i++){
		if()
	}
	return ans;
}

int main(){
	int v, e, a, b;
	cin >> v >> e >> a >> b;
	// jml kandang
	// banyak jalan
	// nomor kandang awal
	// nomor kandang tujuan
	int pjgjalan[v][v];
	vector<vector<bool>> cekhubung(n, vector<bool>(n, false));
	for(int i=0; i<e; i++){
		int x, y, z;
		cin >> x >> y >> z;
		if(cekhubung[x][y]==true){
			pjgjalan[x][y] = min(pjgjalan[x][y], z);
			continue;
		}
		cekhubung[x][y] = true;
		cekhubung[y][x] = true;
		pjgjalan[x][y] = z;
		pjgjalan[y][x] = z;
	}
	//pakai bfs
	//tujuan = b;
	//berarti y harus == b, jika sama break cari yang terkecil jaraknya
	int total=0;
	bool cek[n];
	fill(cek, cek+n, false);
	for(int i=0; i<n; i++){
//		int bykteman = teman[i].size();
//		if(cek[i]==true){
//			continue;
//		}
//		if(bykteman==0){
//			total+=biaya[i];
//			continue;
//		}
		int minimalbiaya = pjgjalan[a][i];
		for(int j=0; j<bykteman; j++){
			minimalbiaya = min(minimalbiaya, biaya[teman[i][j]]);
			cek[teman[i][j]]=true;;
		}
		total+=minimalbiaya;
	}
	cout << total << endl;
}