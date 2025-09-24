#include<bits/stdc++.h>
using namespace std;
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
#define int long long

signed main(){
	bismillah
	int q;
	cin >> q;
	int l, r;
	for(int i=0; i<q; i++){
		cin >> l >> r;
		int ans=0;
		for(int j=l; j<=r; j++){
			if(j%9==0){
				ans+=9;
				continue;
			}
			ans += j%9;
			
		}
		cout << ans << endl;
	}
	return 0;
}