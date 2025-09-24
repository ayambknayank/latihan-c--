#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
int dp[30][70005], huruf[30];

int DP(int now, int mask){
	if(mask==0) return 1;
	if(now==26) return 0;
	int &ret = dp[now][mask];
	if(ret!=-1) return ret;
	ret = DP(now+1, mask);
	int maxi = min(mask, huruf[now]);
	for(int i=mask; i>0; i=(i-1) & mask){
		if(i<=maxi) ret = (ret+DP(now+1, mask-i))%MOD;
	}
	return ret;
}

int main(){
	string s;
	cin >> s;
	
	for(int i=0; i<s.length(); i++){
		huruf[s[i]-'a']++;
	}
	sort (huruf, huruf+26);
	memset(dp,-1,sizeof(dp));
	int ans=0;
	for(int i=1; (1<<i)-1<=s.length(); i++){
		ans=(ans+DP(0,(1<<i)-1))%MOD;
	}
	cout << ans << endl;
	
	return 0;
}