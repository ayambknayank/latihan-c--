#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

const long long mod = 1e9+7;

long long pangkat(int m, int n){
	n--;
	ll p=1;
	for(int i=1; i<=n; i++){
		p*=m;
		p%=mod;
	}
	return p;
}

int main(){
	bismillah
	int n, m;
	cin >> n >> m;
	ll hasil=m;
	hasil = hasil+(pangkat(m, n)*(m-1));
	hasil = hasil%mod;
	cout << hasil << endl;
	return 0;
}