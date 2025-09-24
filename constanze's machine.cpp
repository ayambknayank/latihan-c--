#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

const int MOD = 1000000007;

int main(){
	bismillah
	string s;
	cin >> s;
	for(char a:s){
		if(a == 'm' || a == 'w'){
			cout << "0" << endl;
			return 0;
		}
	}
	int n = s.size();
	vector<int> dp(n+1);
	dp[0]=1;
	dp[1]=1;
	for(int i=2; i<=n; ++i){
		dp[i] = dp[i-1];
		if((s[i-1]==s[i-2]) && (s[i-1]=='u' || s[i-1]=='n')){
			dp[i]=(dp[i]+dp[i-2])%MOD;
		}
	}
	cout << dp[n];
}