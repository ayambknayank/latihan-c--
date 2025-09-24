#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

bool prima(int n){
	if(n==0 || n==1){
		return false;
	}
	for(int i=2; i<n*n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void solve(int n){
	if(prima(n)){
		cout << 1;
		return;
	}
	int ans=0;
	int bagi = n;
	for(int i=2; i<n; i++){
		if(bagi%i==0){
			bagi/=i;
			ans++;
		}
	}
	cout << ans;
}

signed main(){
	int n; cin >> n;
	solve(n);
}