#include <bits/stdc++.h>
using namespace std;
#define dvec vector<vector<int>>
#define vec vector<int>
#define int long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

const int maks = 1e5 + 5;
vector<int> x(maks), dp(maks);

int super(int i){
	return 3*(x[i]-x[i-2])*(x[i]-x[i-2]);
}
int biasa(int i){
	return (x[i]-x[i-1])*(x[i]-x[i-1]);
}

signed main(){
	int n, awal;
	cin >> n, awal;
	
	for(int i=1; i<=n; i++){
		cin >> x[i];
	}
//	vector <int> dp(n);
//	for(int i=1; i<n; i++){
//		int tambah;
//		if(super(balok[i+1], awal) <= biasa(balok[i], awal) && i+1<n){
//			tambah = super(balok[i], awal);
//			awal = balok[i+1];
//			i++;
//		}else{
//			tambah = biasa(balok[i], awal);
//			awal = balok[i];
//		}
//		dp[i] = dp[i-1] + tambah;
//	}
////	
////	int total=0;
////	for(int i=1; i<n-1; i++){
////		int x = abs(balok[i]-awal);
////		int y = abs(balok[i+1]-awal);
////		if(x>y){
////			total += biasa(awal, balok[i]);
////			awal = balok[i];
////		}else if(y>x){
////			total += super(awal, balok[i+1]);
////			awal = balok[i+1];
////			i++;
////		}
////		if(x==y && x==1){
////			total+=super(awal, balok[i+1]);
////			awal+=balok[i+1];
////			i++;
////		}else{
////			total += biasa(awal, balok[i]);
////			awal = balok[i];
////		}
////		
////		cout << total << endl;
////	}
//	
//	cout << dp[n-1] << endl;
	dp[1]=0;
	dp[2]=min(biasa(2), biasa(3)+super(3));
	for(int i=3; i<=n; i++){
		int hitung1 = dp[i-1]+biasa(i);
		int hitung2 = dp[i-2]+super(i);
		int hitung3 = dp[i-1]+biasa(i+1)+super(i+1);
		dp[i] = min(hitung1, min(hitung2, hitung3));
		//dp[i] = min(dp[i-1]+biasa(x[i], x[i-1]), min(dp[i-2]+super(x[i], x[i-2]), dp[i-1]+biasa(x[i+1], x[i])+super(x[i+1], x[i-1])));
	} //min(dp[i-1]+biasa(x[i], x[i-1]), min(dp[i-2]+super(x[i], x[i-2]), dp[i-1]+biasa(x[i+1], x[i])+super(x[i+1], x[i-1])));
	cout << dp[n];
	return 0;
}