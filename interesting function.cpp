#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void solve(){
	int n, m;
	cin >> n >> m;
	int ans = 0;
	while(m>0 || n>0){
		ans += m-n;
		m /= 10;
		n /= 10;
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