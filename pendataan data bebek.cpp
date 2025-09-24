#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, q, x, y;
	cin >> n;
	long long bebek[n+1];
	for(int i=0; i<n; i++){
		cin >> bebek[i];
	}
	cin >> q;
	
	while(q--){
		long long hasil=0;
		long long awal, akhir;
		cin >> x >> y;
	//	for(int i=0; i<; i++){
			awal = upper_bound(bebek, bebek+n, x)-bebek;
			akhir = upper_bound(bebek, bebek+n, y)-bebek;
	//	}
		cout << akhir-awal << endl;
	}
}