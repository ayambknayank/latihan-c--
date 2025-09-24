#include<iostream>

#define ll long long

using namespace std;

ll polinomial(ll n){
	ll hasil=0;
	for(ll i=n; i>=0; i--){
		hasil+=i;
	}
	
	return hasil;
}

int main(){
	ll q, n;
	cin >> q;
	for(int i=0; i<q; i++){
		cin >> n;
		ll polinomial = polinomial(ll n);
		ll jawab = polinomial *3;
	}
	
	cout << jawab;
	
	return 0;
}