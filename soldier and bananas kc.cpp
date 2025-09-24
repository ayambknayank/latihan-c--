#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int main(){
	bismillah
	int k, n, w;
	cin >> k >> n >> w;
	int harga = 0;
	for(int i=1; i<=w; i++){
		harga += (k*i);
	}
	if(harga<n){
		cout << "0";
		return 0;
	}
	cout << harga-n;
	return 0;
}