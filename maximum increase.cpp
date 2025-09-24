#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int n; cin >> n;
	int y; cin >> y;
	int dp[n];
	dp[0]=1;
	for(int i=1; i<n; i++){
		int x; cin >> x;
		if(x>y){
			dp[i]=dp[i-1]+1;
		}else{
			dp[i]=1;
		}
		y=x;
	}
	int terbesar = 0;
	for(int i=0; i<n; i++){
		terbesar = max(terbesar, dp[i]);
	}
	cout << terbesar << endl;
}