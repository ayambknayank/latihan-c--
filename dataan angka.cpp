#include<bits/stdc++.h>
using namespace std;

int n, q;
long long angka[100001];

int cari(long long x){
	int depan = 0, tengah, belakang = n-1;
	while(depan<=belakang){
		tengah = depan + (belakang - depan)/2;
		if(angka[tengah] <= x){
			depan = tengah +1;
		}else{
			belakang = tengah -1;
		}
	}
	return depan;
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> angka[i];
	}
	
	cin >> q;
	
	for(int i=0; i<q; i++){
		long long x, y;
		cin >> x >> y;
		cout << cari(y)-cari(x) << endl;
	}
}