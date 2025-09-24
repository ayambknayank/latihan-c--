#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main(){
	int n;
	ll d, harga, bebek;
	
	cin >> n >> d;
	pair<ll, ll> coklat[n];
	
	for(int i=0; i<n; i++){
		cin >> harga >> bebek;
		coklat[i].first = harga;
		coklat[i].second = bebek;
	}
	sort(coklat, coklat+n);
	ll jmlbebek=0;
	
	for(int i=0; i<n; i++){
		ll totharga = coklat[i].first * coklat[i].second;
		if(totharga<=d){
			d-=totharga;
			jmlbebek += coklat[i].second;
		}else if(coklat[i].first<=d){
			totharga = d/coklat[i].first;
			jmlbebek += totharga;
			d -= totharga*coklat[i].first;
		}
	}
	cout << jmlbebek << endl;
}