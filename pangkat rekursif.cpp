#include <iostream>
using namespace std;

int pangkat(int a, int b){
	int hasil = a;
	for (int i=1; i<b; i++){
		hasil = hasil * a;
	}
	return hasil;
}

int pangkat_rekursif (int a, int b){
	if (b<=1){
		cout << "akhir dari rekursif\n";
		return a;
	}else{
		cout << "rekursif\n";
		return a*pangkat_rekursif(a,(b-1));
	}
	
}

int main(){
	int a, b;
	cout << "angka : ";
	cin >> a;
	cout << "pangkat : ";
	cin >> b;
	cout << "hasil pangkat = " << pangkat(a,b)<< endl;
	cout << "hasil pangkat rekursif = " << pangkat_rekursif(a,b) << endl;
	
	cin.get();
}