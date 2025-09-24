#include<bits/stdc++.h>
using namespace std;

#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL), cout.tie(NULL);
#define int long long

signed main(){
	int b, c, d;
	cin >> b >> c >> d;
	int ans=0;
	for(int i=1; i<=b; i++){
		if(c%i==d){
			ans++;
		}
	}
	cout << ans;
}