#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	int n, k;
	cin >> n;
	cin >> k;
	
	//vector <int> ganjil, genap;
	vector <pair <int, int>> angka;
	int x;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x%2==1){ //kalau ganji langsung masuk ke vector
			angka.push_back({x, 1});
		}else{
			int a=1, h=x;
			while(h%2==0){
				h/=2;
				a*=2;
			}
			angka.push_back({h, a});
		}
	}
	sort(angka.begin(), angka.end(), [](auto &p1, auto &p2){
		return p1.first > p2.first;
	});
	
	int total=0, sdh=0;
	for(auto &i : angka){
		int nilai = i.first;
		int jumlah = i.second;
		int ambil = min(k-sdh, jumlah);
		total += ambil*nilai;
		sdh+=ambil;
		if(sdh==k) break;
	}
	cout << total;
	
//	for(int i=0; i<ganjil.size(); i++){
//		cout << ganjil[i] << " ";
//	}
//	cout << endl << ganjil.size();
}