#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9+7;

signed main(){
	int n; cin >> n;
	int dp[1001];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 4;
	dp[3] = 9;
	for(int i=4; i<=n; i++){
		dp[i] = (dp[i-1]+dp[i-2]) % MOD;
	}
	cout << dp[n];
}