#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n; cin >> n;
	int atas[n];
	vector<pair<int, int>> angka(200001, {-1, -1});
	vector<bool> cek(200001, 0);
	//titik atas
	for(int i=0; i<n; i++){
		cin >> atas[i];
	}
	//titik bawah
	for(int i=0; i<n; i++){
		int x; cin >> x;
		if(cek[x]==1){
			angka[x].second = i;
		}else{
			angka[x].first = i;
			angka[x].second = i;
			cek[x]= 1;
		}
	}
	int ans=0;
	for(int i=0; i<n; i++){
		if(cek[atas[i]]==0){
			continue;
		}
		int kiri = abs(angka[atas[i]].first-i);
		int kanan = abs(angka[atas[i]].second-i);
		
		ans+=max(kiri, kanan);
	}
	cout << ans << endl;
}