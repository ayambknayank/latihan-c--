#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int faktor(int n){
	int ans=0;
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			ans+=i;
			ans+=n/i;
		}
		if(ans>MOD){
			ans%=MOD;
		}
	}
	return ans;
}

void solve(){
	int n; cin >> n;
	cout << faktor(n);
}

int main(){
	solve();
}