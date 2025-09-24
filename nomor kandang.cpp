#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

int n;

string solve(vector<pair<int, int>> kandang, int bayar){
	sort(kandang.begin(), kandang.end(), greater<pair<int, int>>());
	string baru="";
	for(int i=0; i<=n; i++){
		int hasil = bayar/kandang[i].second;
		if(hasil>0){
			// keluaran;
			baru+=to_string(kandang[i].first);
			bayar-=kandang[i].second;
		}
	}
	return baru;
}

int main(){
	cin >> n;
	vector<pair<int, int>> kandang(n+1);
	for(int i=0; i<=n; i++){
		int x, y;
		cin >> x >> y;
		kandang[i].first = i;
		kandang[i].second = y;
	}
	int bayar;
	cin >> bayar;
	string hasil = solve(kandang, bayar);
	string awal="";
	string akhir="";
	if(hasil.length()>50){
		for(int i=0; i<50; i++){
			awal+=hasil[i];
		}
		for(int i=hasil.length()-1; i>=50; i--){
			akhir+=hasil[i];
		}
		cout << awal << endl;
		cout << akhir << endl;
	}else{
		cout << hasil << endl;
		cout << hasil << endl;
	}
	
	return 0;
}