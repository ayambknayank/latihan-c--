#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main() {
    bismillah
    ll n;
    cin >> n;
    vector<ll> kota(n);
    for (ll i = 0; i < n; i++) {
        cin >> kota[i];
    }
    sort(kota.begin(), kota.end());
    ll terkecil = 2e9;
    vector<ll> angka(n-1);
    for(int i=0; i<n-1; i++){
    	ll selisih = abs(kota[i]-kota[i+1]);
    	terkecil = min(terkecil, selisih);
    	angka[i]=selisih;
	}
	ll bisa = 0;
	for(int i=0; i<n-1; i++){
		if (angka[i]==terkecil){
			bisa++;
		}
	}
    cout << terkecil << " " << bisa << endl;
    return 0;
}
