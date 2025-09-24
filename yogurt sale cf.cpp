#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int t;cin >> t;
	while(t--){
		int n, a, b;
		cin >> n >> a >> b;
		int bayar;
		if(a*2<b){
			cout << n*a << endl;
			continue;
		}else{
			bayar = n/2;
			n%=2;
		}
		cout << (bayar*b)+(n*a) << endl;
	}
}