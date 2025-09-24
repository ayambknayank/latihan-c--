#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
	int n, p, l;
	cin >> n >> p >> l;
	
	int ans = sqrt(n*p*l);
	
	while(true){
		if(ans*ans>=n*p*l){
			break;
		}
		ans++;
	}
	
	while(true){
		int lebar = ans/l;
		int panjang = ans/p;
		if(panjang*lebar>=n){
			cout << ans;
			return 0;
		}
		ans++;
	}
}