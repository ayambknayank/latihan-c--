#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void solve(){
	bismillah
	int n, r;
	cin >> n >> r;
	vec x(n);
	int b = 0;
	for(int i=0; i<n; i++){
		cin >> x[i];
	}
	int ans = 0;
	int kurang = 0;
	sort(x.begin(), x.end());
	for(int i=n-1; i>=0; i--){
		if(x[i]==x[i-1] && i-1>=0){
			continue;
		}
		x[i] -= kurang;
		if(x[i]>0){
			kurang+=r;
			ans++;
		}
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