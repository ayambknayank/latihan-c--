#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> hubungan;
vector<bool> orang;

int dfs(int now){
	orang[now] = false;
	int ans=1;
	for(auto i:hubungan[now]){
		if(orang[i]){
			ans+=dfs(i);
		}
	}
	return ans;
}

int main(){
	int n, m;
	cin >> n >> m;
	orang.resize(n, true);
	hubungan.resize(n+1);
	for(int i=0; i<m; i++){
		int x, y;
		cin >> x >> y;
		x--;y--;
		hubungan[x].push_back(y);
		hubungan[y].push_back(x);
	}
	int sendiri=0;
	int mobil = 0;
	for(int i=0; i<n; i++){
		if(orang[i]){
			int hasil = dfs(i);
			if(hasil==1){
				sendiri++;
			}else{
				mobil++;
			}
		}
	}
	if(sendiri>1){
		mobil++;
	}
	cout << mobil << endl;
}