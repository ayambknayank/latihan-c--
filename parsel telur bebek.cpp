#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

vector<ll> kel;

ll parsel(ll x, ll n);
ll biser(ll m, ll n);

int main(){
	bismillah
	ll n, m;
	cin >> n >> m;
	for(ll i=0; i<n; i++){
		ll j;
		cin >> j;
		kel.push_back(j);
	}
	//sort(kel.begin(), kel.end());
	cout << biser(m+1, n) - biser(m, n)<< endl;
}

ll biser(ll m, ll n){
	ll kiri=0, kanan= INT64_MAX;
	ll ans;
	while(kanan>kiri){
		ll mid = (kiri+kanan)/2;
		if(parsel(mid, n) >= m){
			kanan=mid;
			ans=mid;
		}else{
			kiri=mid+1;
		}
	}
	return ans;
}

ll parsel(ll x, ll n){
	ll jml=0;
	for(ll i=0; i<n; i++){
		jml+=x/kel[i];
	}
	return jml;
}