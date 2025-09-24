#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int angka[n];
	for(int i=0; i<n; i++){
		cin >> angka[i];
	}
	sort(angka, angka+n);
	
	int awal = angka[0];
	int akhir = angka[0];
	
	for(int i=0; i<n; i++){
		if(angka[i] == akhir) continue;
		if(angka[i] == akhir+1){
			akhir = angka[i];
		}else{
			if(awal == akhir) cout << awal << ",";
			else cout << awal << "-" << akhir << ",";
			akhir = angka[i];
			awal = angka[i];
		}
	}
	if(awal == akhir) cout << awal;
	else cout << awal << "-" << akhir;
}