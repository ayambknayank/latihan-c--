#include<bits/stdc++.h>
using namespace std;

#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int main(){
	bismillah
	int v, h, n;
	cin >> v >> h >> n;
	int arr[v+1][h+1];
	for(int i=0; i<n; i++){
		int v1, h1, v2, h2;
		cin >> v1 >> h1 >> v2 >> h2;
		for(int ii=v1; ii<=v2; ii++){
			for(int iii=h1; iii<=h2; iii++){
				arr[ii][iii] = 1;
			}
		}
	}
	long long dp[v+2][h+2];
	memset(dp, 0, sizeof dp);
	for(int i=v-1; i>=0; i--){
		for(int j=1; j<=h; j++){
			if(arr[i][j]==1){
				continue;
			}
			if(arr[i+1][j]==1){
				int kiri=j, kanan=j;
				while(kiri>0 && arr[i+1][kiri]==1){
					kiri--;
				}
				while(kanan<=h && arr[i+1][kanan]==1){
					kanan++;
				}
				dp[i][j] = dp[i+1][kiri] + dp[i+1][kanan]+1;
			}else{
				dp[i][j] = dp[i+1][j];
			}
		}
	}
	long long ans = 0;
	for(int i=1; i<=h; i++){
		ans = max(ans, dp[0][i]);
	}
	cout << ans;
}