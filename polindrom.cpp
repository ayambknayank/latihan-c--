#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int n;
ll memo[200][200];
string s;

ll dp(ll x, ll y){
	if(x==y) return 1;
	if(x>y) return 0;
	
	ll &ans = memo[x][y];
	if(ans==-1){
		if(s[x] == s[y]){
			ans = dp(x+1, y-1)+2;
		}else{
			ans = max(dp(x, y-1), dp(x+1, y));
		}
	}
	return ans;
}

int main(){
	cin >> n;
	
	for(ll i=0; i<n; i++){
		memset(memo, -1, sizeof memo);
		cin >> s;
		cout << dp(0, s.size()-1) << endl;
	}
}