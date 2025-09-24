#include<bits/stdc++.h>
using namespace std;
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
#define int long long

signed main(){
	bismillah
	int n; cin >> n;
	int a[101];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int m;
	cin >> m;
	int ans=0;
	for(int i=0; i<m ;i++){
		int k;
		cin >> k;
		bool cek = true;
		for(int j=0; j<k; j++){
			int x;
			cin >> x;
			for(int p=0; p<n; p++){
				if(x==a[p]){
					cek = false;
					break;
				}
			}
		}
		if(cek){
			ans++;
		}
	}
	cout << ans;
}