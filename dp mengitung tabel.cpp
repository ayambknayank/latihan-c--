#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int t;cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
//		vector<int, int> dp;
		ll dp[n][m];
		dp[1][1]=1;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(i>1 && j>1){
					dp[i][j] = dp[i-1][j]+dp[i][j-1];
				}else if(i>1){
					dp[i][j] = dp[i-1][j];
				}else if(j>1){
					dp[i][j] = dp[i][j-1];
				}
			}
		}
		
	}
}