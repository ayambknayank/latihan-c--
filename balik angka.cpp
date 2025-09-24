#include <iostream>
using namespace std;

int balik(int n){
	int hasil = 0;
	
	while (n>0){
		int sisa = n % 10;
		hasil = (hasil *10) + sisa;
		n = n/10;
	}
	return hasil;
}

int main(){
	int n;
	int hasil_balik[10000];
	cin >> n;
	for (int i=0; i<n; i++){
		int k;
		cin >> k;
		hasil_balik[i] = balik (k);
	}
	
	for (int i=0; i<n; i++){
		cout << hasil_balik[i] << endl;
	}
	
	return 0;
}