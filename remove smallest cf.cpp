#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bismillah ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);

int mutlak(int y, int x){
	int lihat = x-y;
	if(lihat<0){
		return lihat*-1; 
	}
	return lihat;
}

int main(){
	bismillah
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		bool cek = true;
		vector <int> angka(n);
		for(int i=0; i<n; i++){
			cin >> angka[i];
		}
		if(n==1){
			cout << "yes" << endl;
			continue;
		}
		sort(angka.begin(), angka.end());
		for(int i=0; i<angka.size()-1; i++){
			if(angka[i]!=angka[i+1]-1 && angka[i]!=angka[i+1]){
				cek = false;
				break;
			}
		}
		if(cek) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}