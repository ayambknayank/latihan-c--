#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

void solve(){
	vector<int> dp(n+1);
	for(int i=0; i<g; i++){
		dp[0][i]=0;
	}
	for(int i=1; i<=n; i++){
		for(int j=0; j<n; j++){
			ans = dp[i-1][j];
			if(j >= batu[i]){
				ans = max(ans, dp[i-1][j-batu[i]]+v[i]);
			}
			dp[i][j]=ans;
		}
	}
	cout << dp[n][g];
}


// top down knapsack
int solve(){
	if(i==0){
		return 0;
	}
	if(cek[i][c]){
		return memo[i][c];
	}
	
	ans = solve(i-1, c);
	if(c>=w[i]){
		ans = max(ans, solve(i-1, c-w[i])+v[i]);
	}
	cek[i][c]=true;
	memo[i][c]=ans;
	return ans
}

int main(){
	int n; // kapasitas tas
	int k; // jumlah batu
	cin >> n >> k;
	vector<int> w(k);
	vector<int> h(k);
	for(int i=0; i<k; i++){
		cin >> w[i]; // berat batu
		cin >> h[i];// harga batu
	}
	//secara top-down
	
	
	//secara  bottom-up
	
	
	//secara bottom up dengan optimalisasi flying table
}