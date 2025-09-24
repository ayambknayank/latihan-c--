#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n, k;
	cin >> n >> k;
	vector<int> bisa(1e6+5, 0);
	int ans=1;
	for(int i=2; i<=n; i++){
		if(bisa[i]==0){
			if(k*i<=n) ans++;
			for(int j=i*i; j<=n; j+=i){
				bisa[j]=i;
			}
		}
	}
	cout << ans;
}