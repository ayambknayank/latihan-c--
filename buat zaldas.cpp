#include<bits/stdc++.h>
using namespace std;

int faktor(int x){
	int jml=0;
	for(int i=1; i<=x; i++){
		if(x%i==0){
			jml++;
			if(jml>5){
				return 5;
			}
		}
	}
	return jml;
}

int n, angka;
int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> angka;
		int hasil = faktor(angka);
		if(hasil<=4){
			cout << "YA" << endl;
		}else{
			cout << "BUKAN" << endl;
		}
	}
}