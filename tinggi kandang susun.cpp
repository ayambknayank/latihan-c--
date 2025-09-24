#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n,k;
	cin >> n >> k;
	int ans=0;
	int terbesar =0;
	for(int i=1; i<=n; i++){
		int x;
		cin >> x;
		terbesar = max(terbesar, x);
		if(i%k==0){
			ans+=terbesar;
			terbesar = 0;
		}
	}
	if(n%k==0){
		cout << ans + (n/k)-1+2;
	}else{
		ans+=terbesar;
		cout << ans + (n/k)+2;
	}
	
}