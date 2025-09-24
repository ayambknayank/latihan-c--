#include<bits/stdc++.h>
using namespace std;

int sorte(int angka[3]){
	int hasil=0;
	while(true){
		int cek=false;
		for(int i=0; i<2; i++){
			if(angka[i]>angka[i+1]){
				hasil++;
				int x=angka[i];
				angka[i]=angka[i+1];
				angka[i+1]=x;
				cek = true;
			}
			if(angka[i]==angka[i+1]){
				hasil = -1;
				cek = false;
				break;
			}
		}
		if(cek==false){
			return hasil;
		}
	}
	
}

int main(){
	int angka[3];
	for(int i=0; i<3; i++){
		cin >> angka[i];
	}
	cout << sorte(angka);
}