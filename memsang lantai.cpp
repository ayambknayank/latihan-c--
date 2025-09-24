#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e6;

signed main(){
	int n; cin >> n;
	int dp[10001];
	dp[0]=0;
	dp[1]=1;
	dp[2]=1;
	dp[3]=2;
	for(int i=4; i<=n; i++){
		dp[i]= (dp[i-1] + dp[i-3]) % MOD; 
	}
	cout << dp[n] << endl;
}