#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int angka;
	while(n--){
		cin >> angka;
		
		int i=0, hasil[6];
		if(angka>10000){
			hasil[i] = (angka/10000)*10000;
			angka%=10000;
			i++; 
		}if(angka>1000){
			hasil[i] = (angka/1000)*1000;
			angka%=1000;
			i++; 
		}if(angka>100){
			hasil[i] = (angka/100)*100;
			angka%=100;
			i++; 
		}if(angka>10){
			hasil[i] = (angka/10)*10;
			angka%=10;
			i++; 
		}if(angka>0){
			hasil[i] = (angka/1)*1;
			angka%=1;
			i++; 
		}
		cout << i << endl;
		for(int j=0; j<i; j++){
			cout << hasil[j] << " ";
		}
		cout << endl;
	}
}