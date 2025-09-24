#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n; cin >> n;
	vector<int> d, t;
	int akhir=-1;
	int ans=0;
	for(int i=1; i<n; i++){
		int x; cin >> x;
		d.push_back(x); // jarak antar stand
	}
	//mesan dulu
	for(int i=0; i<n; i++){
		int x; cin >> x;
		t.push_back(x);
		
		if(x != -1){
			akhir = i;
		}
		if(i!=0){
			ans += d[i-1];
			if(x != -1){
				t[i]+=ans;
			}
		}
	}
	// jika -1 berarti gada yg bisa dipesan
	if(akhir == -1){
		cout << 0 << endl;
		return 0;
	}
	int tunggu = t[akhir];
	//tunggu masing masing pesanan
	for(int i=akhir-1; i>=0; i--){
		if(t[i] != -1){
			if(tunggu >= t[i]){
				tunggu += d[i];
			}else{
				tunggu = t[i];
			}
		}else{
			tunggu += d[i];
		}
	}
	cout << tunggu << endl;
}