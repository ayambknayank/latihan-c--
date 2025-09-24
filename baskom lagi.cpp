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
		int jarak = r-l+1;
		int ans=jarak/9*45;
		for(int j=1; j<=jarak%9; j++){
			if(l%9==0){
				ans+=9;
			}else{
				ans += l%9;
			}
			l++;
		}
		cout << ans << endl;
	}
	return 0;
}