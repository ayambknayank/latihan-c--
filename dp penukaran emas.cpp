#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int n;
	cin >> n;
	vector<int> dp(n+1);
	dp[0]=0;
	for(int i=1; i<=n; i++){
		dp[i] = max(i, dp[i/2]+dp[i/3]+dp[i/4]);
	}
	cout << dp[n] << endl;
}