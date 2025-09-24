#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
	int m; cin >> m;
	int batas = -1;
	
	int awal[m+1], akhir[m+1], gaji[m+1];
	for(int i=1; i<=m; i++){
		cin >> awal[i] >> akhir[i] >> gaji[i];
		if(batas < akhir[i]) batas = akhir[i];
	}
	int dp[batas+1];
	memset(dp, 0, sizeof dp); // isi vector dengan nilai 0
	for(int i=1; i<=batas; i++){
		dp[i] = dp[i-1];
		for(int j = 1; j<=m; j++){
			if(i != akhir[j]){
				continue;
			}
			dp[i] = max(dp[i], dp[awal[j]-1]+gaji[j]);
			/* 
			ide DP
			-> cek waktu dia selesai bekerja, lalu tambahkan gajinya
			-> tambhakan dengan dp sebelumnya dengan mengambil waktu dia wal bekerja
				lalu kurangkan 1 (karena akan mengembalikan nilai (gaji) waktu terakhir bekerja
				sebelum melakukan pekerjaan sekarang)
			*/
		}
	}	
	cout << dp[batas];
}