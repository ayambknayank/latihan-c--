#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int n, x, y, d;

int jarak (int x, int y){
	return (abs(x-y)+(d-1))/d;
}

void solve(){
	cin >> n >> x >> y >> d;
	// jml halaman
	// halaman awal
	// halaman tujuan
	// jml halaman yang di gulirkan dengan menekan satu tmbol
	int pjg = abs(x-y);
	int ans = 1e9;
	if(pjg % d == 0){
		ans = min(ans, jarak(x, y));
	}
	pjg = y-1;
	if(pjg % d == 0){
		ans = min(ans, jarak(x, 1) + jarak(1, y));
	}
	pjg = n-y;
	if(pjg % d == 0){
		ans = min(ans, jarak(x, n) + jarak(n, y));
	}
	if (ans == 1e9){
		ans = -1;
	}
	cout << ans << endl;
}

int main(){
	bismillah
	int t; cin >> t;
	while(t--){
		solve();
	}
}