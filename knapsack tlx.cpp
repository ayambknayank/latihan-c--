#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

//vector<vector<bool>> cek;
//vector<vector<int>> memo;
//vector<pair<int, int>> batu;
//vector<int> ambil;

//int solve(int c, int i){
//	if(c==0){
//		return 0;
//	}
//	if(i==0){
//		return 0;
//	}
//	if(cek[i][c]){
//		ambil.push_back(i);
//		return memo[i][c];
//	}
//	int best = solve(c, i-1);
//	if(c>=batu[i].first){
//		int banding;
//		banding = solve(c-batu[i].first, i-1)+batu[i].second; //cari harga terbesar
////		if(banding > best){
////			//ambil.clear();
////			ambil.push_back(i);
//			best = banding;
////		}else if(best==banding){
////			ambil.push_back(i);
////		}
//	}
//	cek[i][c] = true;
//	memo[i][c] = best;
//	return best;
//}

int main(){

	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> batu(k+1);
	vector<vector<int>> dp(k + 2, vector<int>(n + 1, 0));
	for(int i=1; i<=k; i++){
		cin >> batu[i].first >> batu[i].second;
//		cin >> w[i] >> h[i];
	}
	for(int i=k;i>=1; i--){
		for(int j=0; j<=n; j++){
			dp[i][j]=dp[i+1][j];
			if(j>=batu[i].first){
				dp[i][j] = max(dp[i][j], dp[i+1][j-batu[i].first]+batu[i].second);
			}
		}
	}
	int beratmin = n;
	for(int i=n; i>=0; i--){
		if(dp[1][i]==dp[1][n]){
			beratmin = i;
		}
	}
	for(int i=1; i<=k; i++){
		if(dp[i][beratmin]==dp[i+1][beratmin-batu[i].first]+batu[i].second){
//			ambil.push_back(i);
			cout << i << endl;
			beratmin -= batu[i].first;
		}
	}
//	for(int i=0; i<ambil.size(); i++){
//		cout << ambil[i] << endl;
//	}
	return 0;
}