#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int n, x;
	cin >> n >> x;
	vector<int> kembalian(n+1);
	for(int i=0; i<n; i++){
		cin >> kembalian[i];
	}
	vector<int> dp(x+1, 1e9);
	dp[0]=0;
	for(int i=1; i<=x; i++){
		for(int j=0; j<n; j++){
			if(i-kembalian[j]>=0){
				dp[i]=min(dp[i], dp[i-kembalian[j]]+1);
			}
		}
	}
	if(dp[x]==1e9){
		cout << "-1" << endl;
	}else{
		cout << dp[x] << endl;
	}
	return 0;
}