#include<bits/stdc++.h>
using namespace std;
#define int long long
#define bismillah ios_base::sync_with_stdio(NULL), cin.tie(0), cout.tie(0);

int perubahan=0;
int n, now=-1;
vector<pair<int, int>> gigi;

int cek(int a){
	for(int i=0; i<n; i++){
		int x = gigi[i].first;
		int y = gigi[i].second;
		if((a>=x) && (a<=y)){
			//cout << "bisa " << x << " " << y;
			if(now!=i){
				perubahan++;
				now=i;
				//cout << "ubah";
			}
			//cout << "\n";
			return 1;
		}
	}
	return 0;
}

signed main(){
	bismillah
	cin >> n;
	gigi.resize(n);
	for(int i=0; i<n; i++){
		int x, y;
		cin >> x >> y;
		gigi[i].first = x;
		gigi[i].second = y;
	}
	int m; cin >> m;
	//sort(gigi.begin(), gigi.end());
	
	int b; cin >> b;
	if(cek(b)==0){
		cout << -1;
		return 0;
	}
	
	//dimulai dari 1;
	for(int i=1; i<m; i++){
		int a; cin >> a;
		if(cek(a)==0){
			cout << -1;
			return 0;
		}
	}
	cout << perubahan-1;
	return 0;
}