#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

void solve(){
	int n; cin >> n;
	vector<int> a(101, 0);
	int maks=0;
	for(int i=0; i<n; i++){
		int x; cin >> x;
		a[x]++;
	}
	sort(a.begin(), a.end());
	int ans=0;
	for(auto& y: a){	
		ans += y/3;
	}
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}