#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> lamar(n);
	vector<ll> apart(m);
	for(ll i=0; i<n; i++){
		cin >> lamar[i];
	}
	for(ll i=0; i<m; i++){
		cin >> apart[i];
	}
	sort(lamar.begin(), lamar.end());
	sort(apart.begin(), apart.end());
	vector<bool> apartemen(m, false);
	ll bisa=0;
	ll j=0;
	for(ll i=0; i<n; i++){ 
		while(j<m && apart[j]<lamar[i]-k){
			j++;
		}
		if(j<m && apart[j]<=lamar[i]+k){
			bisa++;
			j++;
		}
	}
	cout << bisa << endl;
}