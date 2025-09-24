#include<bits/stdc++.h>
using namespace std;
#difine bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	//masukan
	
	
	//fungsi
	vector<vector<int, int> dp(m, vector<int>(n));
	for(int i=0 i<m; i++){
		dp[i][0] = 0;
	}
	for(int i=0 i<n; i++){
		dp[0][i] = 0;
	}
	for(int i=1; i<m; i++){
		for(int j=1; j<n; j++){
			if(a[i]==b[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	cout << dp[m][n];
}