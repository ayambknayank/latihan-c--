#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll k, n;
    cin >> k;
    vector<pair<ll, ll>> kandang(k);
    for (ll i = 0; i < k; i++) {
        cin >> kandang[i].second;
    }
    for (ll i = 0; i < k; i++) {
        cin >> kandang[i].first;
    }
    sort(kandang.begin(), kandang.end());
    cin >> n;
    vector<ll> bebek(n);
    for (ll i = 0; i < n; i++) {
        cin >> bebek[i];
    }

    sort(bebek.begin(), bebek.end(), greater<ll>());

    ll totharga = 0, j=0;
    for (ll i = 0; i < n; i++) {
    	totharga+=bebek[i]*kandang[j].first;
    	kandang[j].second--;
    	if(kandang[j].second==0){
    		j++;
		}
    }
    cout << totharga << endl; 
    return 0;
}
