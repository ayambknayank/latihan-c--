#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

ll dp(ll n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 0;
	}
	if(n==2){
		return 3;
	}
	return dp(n-1)+((n-1)*2)+1;
}

int main(){
	ll n;
	cin >> n;
	if(n%2==0){
		//cout << dp(n) << endl;
		cout << "Kabu" << endl;
	}else{
		//cout << dp(n) << endl;
		cout << "Wingka" << endl;
	}
}