#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

vector<ll> a;

ll parsel(ll x, ll n){
	ll hasil=0;
	for(ll i=0; i<n; i++){
		hasil+=x/a[i];
	}
	return hasil;
}

ll binser(ll m, ll n){
	ll ans;
	ll kiri = 0, kanan = 1e9;
	while(kanan>kiri){
		int mid = (kanan+kiri)/2;
		if(parsel(mid, n) >= m){
			kanan = mid;
			ans = mid;
		}else{
			kiri = mid+1;
		}
	} 
	return ans;
}

int main(){
	ll n, m;
	cin >> n >> m;
	a.resize(n);
	for(ll i=0; i<n; i++){
		cin >> a[i];
	}
//	int minim = lower_bound(a, a+n, m);
//	int maksi = upper_bound(a, a+n, m+1);
	sort(a.begin(), a.end());
	cout << binser(m+1, n) - binser(m, n) << endl;
}