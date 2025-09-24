#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int n, m;
	cin >> n >> m;
	vector<int> h(n+1), k(n+1), d(n+1);
	for(int i=1; i<=n; i++){
		cin >> h[i] >> k[i] >> d[i];
	}
	vector<vector<int>> dp(n+1, vec(m+1, 0));
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			dp[i][j] = dp[i-1][j];
			if(h[i]<=j){
				if(d[i]==1){
					dp[i][j] = max(dp[i][j], dp[i-1][j-h[i]]+k[i]);
				}else{
					dp[i][j] = max(dp[i][j], dp[i][j-h[i]]+k[i]);
				}
			}
		}
	}
	cout << dp[n][m] << endl;
}