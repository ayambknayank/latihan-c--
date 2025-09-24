#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
 
int main(){
	int n, m;
	cin >> n >> m;
	vector<int> biaya(n);
	ll jml=0;
	for(int i=0; i<n; i++){
		cin >> biaya[i];
		jml+=biaya[i];
	}
	
	if(m==0){
		cout << jml << endl;  //kasus 
		return 0;
	}
	
	vector<vector <int>> teman(n+1);
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		teman[x].push_back(y);
		teman[y].push_back(x);
	}
	int total=0;
	bool cek[n];
	fill(cek, cek+n, false);
	for(int i=0; i<n; i++){
		int bykteman = teman[i].size();
		if(cek[i]==true){
			continue;
		}
		if(bykteman==0){
			total+=biaya[i];
			continue;
		}
		int minimalbiaya = biaya[i];
		for(int j=0; j<bykteman; j++){
			minimalbiaya = min(minimalbiaya, biaya[teman[i][j]]);
			cek[teman[i][j]]=true;;
		}
		total+=minimalbiaya;
	}
	cout << total << endl;
}