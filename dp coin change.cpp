#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	int n;
	cin >> n;
	vector<int> kembali(n);
	for(int i=0; i<n; i++){
		cin >> kembali[i];
	}
	int bayar;
	cin >> bayar;
	
	vector<int> dp(bayar+1, 1e9);
	dp[0]=0;
	
	for(int i=1; i<=bayar; i++){
		for(int j=0; j<n; j++){
			if(kembali[j] <= i){
				dp[i] = min(dp[i-kembali[j]]+1, dp[i]);
			}
		}
	}
	cout << dp[bayar] << endl;
}