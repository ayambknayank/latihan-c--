#include <bits/stdc++.h>
using namespace std;

#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

signed main(){
	bismillah
	ll n, k, x;
	cin >> n >> k >> x;
	ll a[n+1];
	for(ll i=1; i<=n; i++){
		cin >> a[i];
	}
	ll b[n+1];
	b[0]=0;
	for(ll i=1; i<=n; i++){
		cin >> b[i];
		b[i]+=b[i-1];
	}
	ll maks=0;
	for(ll i=1; i<=n; i++){ // coba sema kemungkinan berjalan 
		ll kiri = i; //mau ke kiri
		ll kanan = n; // mau ke kanan   pokoknya masih dalam range
		ll area;
		while(kiri<=kanan){
			ll mid = (kiri+kanan)/2;
			area = min(abs(x-a[i]), abs(x-a[mid]))+a[mid]-a[i];
			if(area<=k){
				maks = max(maks, b[mid]-b[i-1]);
				kiri = mid+1;
			}else{
				kanan = mid-1;
			}
		}
	}
	cout << maks << endl;
}