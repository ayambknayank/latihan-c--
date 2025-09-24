#include<bits/stdc++.h>
using namespace std;

signed main(){
	string s;
	cin >> s;
	
	int O=0, S=0, N=0, P=0;
	int ans=0;
	
	for(char c:s){
		if(c=='O'){
			O++;
		}else if(c=='S'){
			S++;
		}else if(c=='N'){
			N++;
		}else if(c=='P' && O>0 && S>0 && N>0){
			P++;
			ans=max(O+S+N, ans);
			ans++;
		}
	}
	if(ans<=0){
		cout << -1 << endl;
	}else{
		cout << ans << endl;
	}
}